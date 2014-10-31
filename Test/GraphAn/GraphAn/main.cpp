//Подключаем необходимые библиотеки
#include <math.h>
#include "..\\..\\..\\Source\\GraphanLib\\GraphmatFile.h"
#include "..\\..\\..\\Source\\common\\util_classes.h"
#pragma comment (lib,"..\\..\\..\\Source\\common\\Debug\\common.lib")
#pragma comment (lib,"..\\..\\..\\Source\\GraphanLib\\Debug\\GraphanLib.lib")
#pragma comment (lib,"..\\..\\..\\Source\\StructDictLib\\Debug\\StructDictLib.lib")
//----------------------------------
int main(){
	MorphLanguageEnum Langua;
	GetLanguageByString("Russian", Langua);//Выбор языка
	string InputFile = "<path to input file> *.txt|.html";//Входной файл html или txt в кодировке CP-1251
	string GraFile = "<path to output file> *.gra";//Путь к выходному файлу *.gra (Открывается простым блокнотом), если задано только имя файла,то он будет создан в корне проекта(папка с исходным кодом) 
	CGraphmatFile Graphan; //Обявление объекта графематики
	Graphan.m_Language = Langua; // Задание языка
	if (!Graphan.LoadDicts()) //Загрузка словарей(переменная среды RML обязательна!)
	{
		printf("Cannot load dictionaries \n");
		printf("Error: %s\n", Graphan.GetLastError().c_str());
		system("pause");
		return 1;
	};
	//Задание параметров вывода
	Graphan.m_bSentBreaker = true;
	Graphan.m_bUseParagraphTagToDivide = false;
	Graphan.m_bFilterUnprintableSymbols = false;
	Graphan.m_GraOutputFile = GraFile;
	Graphan.m_bUseIndention = true;
	//-----------------------------
	fprintf(stderr, "Loading file %s\n", InputFile.c_str());//Проверка доступности входного файла
	if (!Graphan.LoadFileToGraphan(InputFile))// Собственно анализ
	{
		fprintf(stderr, "Cannot load file %s \n", InputFile.c_str());
		fprintf(stderr, "Error: %s\n", Graphan.GetLastError().c_str());
		system("pause");
		return 1;
	};
	system("pause");
	return 0;
}
