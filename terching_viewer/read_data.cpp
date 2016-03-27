#include "stdafx.h"
#include "Form1.h"
#include "read_data.h"


int read_data()
{
	
	float ttime;
	float ttannoux;
	float ttannouy;
	float ttannoudoumyakux;
	float ttannoudoumyakuy;
	float ttannoukanx;
	float ttannoukany;
	float ttyuusix;
	float ttyuusiy;
	float tkanshix;
	float tkanshiy;
	float tkaokakudo;
	
	data temp;//データサイズを可変にするため
	
	//ファイルより値の入力
	FILE *fp;
	char dirname[100];
	//入出力
	sprintf_s(dirname, "..\\positionfile\\%s",filename);
	fopen_s(&fp,dirname, "r");
	int i=0;

	while (	fscanf_s(fp, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f",&ttime, &ttannoux, &ttannouy, &ttannoudoumyakux, &ttannoudoumyakuy, &ttannoukanx, &ttannoukany, &ttyuusix, &ttyuusiy,&tkanshix,&tkanshiy,&tkaokakudo)!= EOF)
		
	{
		temp.time=ttime;
		temp.tannoux=ttannoux;
		temp.tannouy=ttannouy;
		temp.tannoudoumyakux=ttannoudoumyakux;
		temp.tannoudoumyakuy=ttannoudoumyakuy;
		temp.tannoukanx=ttannoukanx;
		temp.tannoukany=ttannoukany;
		temp.tyuusix=ttyuusix;
		temp.tyuusiy=ttyuusiy;
		temp.kanshix=tkanshix;
		temp.kanshiy=tkanshiy;
		temp.kaokakudo=tkaokakudo;
		positiondata.push_back(temp);
		i++;
		if(i>18000) break;
	}
	if(i==0) return -1;
	framenum=i;
	return 0;
}

	
	