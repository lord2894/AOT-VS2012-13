//Отменяем выдачу никоторых предупреждений
#pragma warning(disable:4786)
#pragma warning(disable:4530)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <locale.h>
//Подключаем необходимые библиотеки АОТ
#include "../../../Source/common/utilit.h"
#include "../../../Source/AgramtabLib/RusGramTab.h"
#include "../../../Source/AgramtabLib/EngGramTab.h"
#include "../../../Source/AgramtabLib/GerGramTab.h"
#include "../../../Source/LemmatizerLib/Lemmatizers.h"
#include "../../../Source/LemmatizerLib/Paradigm.h"
#pragma comment (lib,"..\\..\\..\\Source\\AgramtabLib\\Debug\\AgramtabLib.lib")
#pragma comment (lib,"..\\..\\..\\Source\\common\\Debug\\common.lib")
#pragma comment (lib,"..\\..\\..\\Source\\GraphanLib\\Debug\\GraphanLib.lib")
#pragma comment (lib,"..\\..\\..\\Source\\LemmatizerLib\\Debug\\LemmatizerLib.lib")
#pragma comment (lib,"..\\..\\..\\Source\\MorphWizardLib\\Debug\\MorphWizardLib.lib")
#pragma comment (lib,"..\\..\\..\\Source\\StructDictLib\\Debug\\StructDictLib.lib")
#pragma comment (lib,"..\\..\\..\\Source\\PCRE\\Debug\\libs-pcre.lib")
//Задаем специальные функции для работы с морфологией
bool				bPrintIds = true;;
MorphLanguageEnum	Language;
CLemmatizer*		pLemmatizer;
CAgramtab*			pAgramtab;

string GetGrammems(const char* tab_str)
{
	QWORD G;
	pAgramtab->GetGrammems(tab_str, G);
	string s = pAgramtab->GrammemsToStr(G);
	if (!s.empty() && (s[s.length() - 1] == ','))
		s.erase(s.length() - 1);
	return s;
}

void RussianConvertToDictionary(std::string& S)
{
#ifdef WIN32
	//OemToCharBuff((char*)S.c_str(), (char*)S.c_str(), S.length());	
	OemToCharBuff((LPCSTR)S.c_str(), (LPSTR)S.c_str(), S.length());
#else
	//KOI8ToWin(S);
#endif

};

void RussianConvertToScreen(std::string& S)
{
#ifdef WIN32
	//CharToOemBuff((char*)S.c_str(), (char*)S.c_str(), S.length());	
	CharToOemBuff((LPCSTR)S.c_str(), (char*)S.c_str(), S.length());
#else
	//WinToKOI8(S);
#endif

};

std::string  GetMorphInfo(std::string  Form)
{

	std::string  Result;

	bool bCapital = is_upper_alpha((BYTE)Form[0], Language);

	std::vector<CFormInfo> Paradigms;

	pLemmatizer->CreateParadigmCollection(false, Form, bCapital, true, Paradigms);

	for (int i = 0; i < Paradigms.size(); i++)
	{
		const CFormInfo& F = Paradigms[i];
		Result += F.m_bFound ? "+ " : "- ";

		Result += "{";
		Result += F.GetWordForm(0);
		Result += ", ";

		{
			string GramCodes = F.GetSrcAncode();
			BYTE  PartOfSpeech = pAgramtab->GetPartOfSpeech(GramCodes.c_str());
			Result += pAgramtab->GetPartOfSpeechStr(PartOfSpeech) + std::string(", ");

			string  CommonAncode = F.GetCommonAncode();
			Result += Format("\"%s\",  (", (CommonAncode.empty()) ? "" : GetGrammems(CommonAncode.c_str()).c_str());

			for (long i = 0; i < GramCodes.length(); i += 2)
				Result += Format("\"%s\",", GetGrammems(GramCodes.c_str() + i).c_str());

			Result += ") }";
		}

		if (bPrintIds)
			Result += Format(" Id=%i", F.GetParadigmId()) + " ";

		BYTE Accent = F.GetSrcAccentedVowel();
		if (Accent != 0xff)
			Result += Format("Accented=%s'%s", Form.substr(0, Accent + 1).c_str(), Form.substr(Accent + 1).c_str());

		Result += "\nAll forms: ";
		for (int k = 0; k < F.GetCount(); k++)
		{
			Result += Paradigms[i].GetWordForm(k);
			Result += " ";
		};
		Result += "\n\n";

	};

	return Result;
};

template <class  T, class Y>
bool InitMorphologySystem()
{
	std::string langua_str = GetStringByLanguage(Language);
	pLemmatizer = new T;
	string strError;
	if (!pLemmatizer->LoadDictionariesRegistry(strError))
	{
		fprintf(stderr, "Cannot load %s  morphological dictionary\n", langua_str.c_str());
		fprintf(stderr, "Return error: %s\n", strError.c_str());
		return false;
	};
	pAgramtab = new Y;
	if (!pAgramtab->LoadFromRegistry())
	{
		fprintf(stderr, "Cannot load %s  gramtab\n", langua_str.c_str());
		return false;
	};
	return true;
};



//Собственно основная функция
int main(int argc, char **argv)
{
	GetLanguageByString("Russian", Language); //Задаем язык

	// ===============  LOADING DICTS ================
	printf("Loading..\n");
	bool bResult = false;
	bResult = InitMorphologySystem<CLemmatizerRussian, CRusGramTab>();

	if (!bResult)
		return 1;
	// ===============  WORKING ===============
	std::string s = "стали"; //Задаем входное слово
	Trim(s);
	//if (s.empty()) break;
	//if (s == "noids")
	//{
	//	bPrintIds = false;
	//	continue;
	//};
	string Result = GetMorphInfo(s); //Отправляем слово на анализ
	if (morphRussian == Language)  //Приводим результат к читаемому виду(тебуется не всегда)  
		RussianConvertToScreen(Result);
	printf("%s", Result.c_str());//Печатаем результат
	delete pLemmatizer; //очищаем память
	delete pAgramtab;
	system("pause");
	return 0;
}
