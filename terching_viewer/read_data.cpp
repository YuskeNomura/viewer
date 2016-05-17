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
	int tclassnum;
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

	if (i == 0) return -1;
	framenum = i;

	sprintf_s(dirname, "..\\positionfile\\%s",exfilename);
	fopen_s(&fp, dirname, "r");
	i = 0;

	while (fscanf_s(fp, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%d", &ttime, &ttannoux, &ttannouy, &ttannoudoumyakux, &ttannoudoumyakuy, &ttannoukanx, &ttannoukany, &ttyuusix, &ttyuusiy, &tkanshix, &tkanshiy, &tkaokakudo,&tclassnum) != EOF)

	{
		temp.time = ttime;
		temp.tannoux = ttannoux;
		temp.tannouy = ttannouy;
		temp.tannoudoumyakux = ttannoudoumyakux;
		temp.tannoudoumyakuy = ttannoudoumyakuy;
		temp.tannoukanx = ttannoukanx;
		temp.tannoukany = ttannoukany;
		temp.tyuusix = ttyuusix;
		temp.tyuusiy = ttyuusiy;
		temp.kanshix = tkanshix;
		temp.kanshiy = tkanshiy;
		temp.kaokakudo = tkaokakudo;
		temp.classnum = tclassnum;
		expositiondata.push_back(temp);
		i++;
		if (i>24000) break;
	}
	if(i==0) return -1;
	exframenum=i;
	i = 0;
	for (int i2 = 0; i2 < 100; i2++)
	{
		
		for (; i < exframenum-10; i++)
		{
			int inx, iny;
			//グリッド計算
			float diffarencex = expositiondata[i + 1].tyuusix - expositiondata[i].tyuusix;
			if (diffarencex < -14.5)
			{
				inx = 0;
			}
			else if (-14.5 < diffarencex  && diffarencex < -7.5)
			{
				inx = 1;
			}
			else if (-7.5 < diffarencex  && diffarencex < 7.5)
			{
				inx = 2;
			}
			else if (7.5 < diffarencex  && diffarencex < 14.5)
			{
				inx = 3;
			}
			else
			{
				inx = 4;
			}
			float diffarencey = expositiondata[i+1].tyuusiy - expositiondata[i].tyuusiy;
			if (diffarencey < -14.5)
			{
				iny = 0;
			}
			else if (-14.5 < diffarencey  && diffarencey < -7.5)
			{
				iny = 1;
			}
			else if (-7.5 < diffarencey  && diffarencey < 7.5)
			{
				iny = 2;
			}
			else if (7.5 < diffarencey  && diffarencey < 14.5)
			{
				iny = 3;
			}
			else
			{
				iny = 4;
			}

			exmean[i2].time += expositiondata[i].time;
			exmean[i2].tannoukanx += expositiondata[i].tannoux;
			exmean[i2].tannoukany += expositiondata[i].tannouy;
			exmean[i2].tannoudoumyakux += expositiondata[i].tannoudoumyakux;
			exmean[i2].tannoudoumyakuy += expositiondata[i].tannoudoumyakuy;
			exmean[i2].tannoukanx += expositiondata[i].tannoukanx;
			exmean[i2].tannoukany += expositiondata[i].tannoukany;
			exmean[i2].tyuusix += expositiondata[i].tyuusix;
			exmean[i2].tyuusiy += expositiondata[i].tyuusiy;
			exmean[i2].kanshix += expositiondata[i].kanshix;
			exmean[i2].kanshix += expositiondata[i].kanshiy;
			exmean[i2].kaokakudo += expositiondata[i].kaokakudo;
			
			exgrid[inx][iny][i2]++;
			clusternum[i2]++;
			if (expositiondata[i + 1].classnum > i2)
			{
				exmean[i2].time /= clusternum[i2];
				exmean[i2].tannoukanx /= clusternum[i2];
				exmean[i2].tannoukany /= clusternum[i2];
				exmean[i2].tannoudoumyakux /= clusternum[i2];
				exmean[i2].tannoudoumyakuy /= clusternum[i2];
				exmean[i2].tannoukanx /= clusternum[i2];
				exmean[i2].tannoukany /= clusternum[i2];
				exmean[i2].tyuusix /= clusternum[i2];
				exmean[i2].tyuusiy /= clusternum[i2];
				exmean[i2].kanshix /= clusternum[i2];
				exmean[i2].kanshix /= clusternum[i2];
				exmean[i2].kaokakudo /= clusternum[i2];
				i++;
				
				break;
			}
		}
	}
	return 0;
}

	
	