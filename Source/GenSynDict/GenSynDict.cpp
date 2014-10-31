// GenSynDict.cpp : Defines the entry point for the console application.
//

#pragma  warning (disable:4786)
#include <string>
#include <vector>
#include <stdio.h>
#include "../common/utilit.h"
#include "../common/MorphologyHolder.h"
#pragma comment (lib,"../AgramtabLib/Debug/AgramtabLib.lib")
#pragma comment (lib,"../BinaryDictsLib/Debug/BinaryDictsLib.lib")
#pragma comment (lib,"../common/Debug/common.lib")
#pragma comment (lib,"../GraphanLib/Debug/GraphanLib.lib")
#pragma comment (lib,"../LemmatizerLib/Debug/LemmatizerLib.lib")
#pragma comment (lib,"../MAPostLib/Debug/MAPostLib.lib")
#pragma comment (lib,"../MorphWizardLib/Debug/MorphWizardLib.lib")
#pragma comment (lib,"../PCRE/Debug/libs-pcre.lib")
#pragma comment (lib,"../RmlThesLib/Debug/RmlThesLib.lib")
#pragma comment (lib,"../SemanLib/Debug/SemanLib.lib")
#pragma comment (lib,"../SimpleGrammarLib/Debug/SimpleGrammarLib.lib")
#pragma comment (lib,"../StructDictLib/Debug/StructDictLib.lib")
#pragma comment (lib,"../SynanLib/Debug/SynanLib.lib")
#pragma comment (lib,"../SynCommonLib/Debug/SynCommonLib.lib")
#pragma comment (lib,"../Transfer/Debug/Transfer.lib")
#pragma comment (lib,"../TrigramLib/Debug/TrigramLib.lib")
CMorphologyHolder MorphHolderRus;


int main(int argc, char* argv[])
{
	//if(argc < 3)
	//{
	//	printf("Usage: buildsyn text_file output_file\n");
	//	return 1;
	//}

	std::string word, syn, buf;
	char b[1000];

	std::map<long, std::vector<long> > synonims;


	if (!MorphHolderRus.LoadGraphanAndLemmatizer(morphRussian))
	{
		fprintf(stderr, "cannot load Russian morphology\n");
		return 1;
	}


	//FILE* input = fopen(argv[1], "r");
	FILE* input = fopen("C:/RML/Dicts/SrcBinDict/synonyms.txt", "r");

	DwordVector main_ids;
	while(true)
	{
		fscanf(input, "%s",b);
		if(feof(input)) break;

		buf = b;

		if(buf == "$$$")
		{
			word.erase();
			continue;
		}

		if(word.empty())
		{
			word = buf;
			MorphHolderRus.string_to_ids(buf.c_str(), main_ids, true);
			continue;
		}

		DwordVector ids;
		MorphHolderRus.string_to_ids(buf.c_str(), ids, true);

		for(long  i = 0; i < main_ids.size(); i++)
			for(long  k = 0; k < ids.size(); k++)
			{
				synonims[main_ids[i]].push_back(ids[k]);
				synonims[ids[k]].push_back(main_ids[i]);
			}
	}

	fclose(input);
	


	//FILE* output = fopen(argv[2], "wb");
	FILE* output = fopen("C:/RML/Dicts/BinDict/synonyms.bin", "wb");
	long count = synonims.size();
	fwrite((void*)&count, sizeof(long), 1, output);

	for(std::map<long, std::vector<long> >::iterator i = synonims.begin();i != synonims.end(); i++)
	{
		std::vector<long>& v = (*i).second;

		sort(v.begin(), v.end() );

		vector<long>::iterator end =  unique(v.begin(), v.end());
		v.erase(end, v.end());

		fwrite((void*)&((*i).first), sizeof(long), 1, output);

		long  sz = v.size();
		fwrite((void*)&sz, sizeof(long), 1, output);

		for(unsigned int i = 0; i < sz; i++)
		{
			long uu = v[i];
			fwrite( (void*)&uu, sizeof(long), 1, output);
		}
		//WriteVectorInner(output, v);
	}

	fclose(output);

	
	return 0;
}

