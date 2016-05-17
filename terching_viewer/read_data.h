#pragma once

#include<stdio.h>

int read_data(void);
//グローバル変数
typedef struct{
	float time;
	float tannoux;
	float tannouy;
	float tannoudoumyakux;
	float tannoudoumyakuy;
	float tannoukanx;
	float tannoukany;
	float tyuusix;
	float tyuusiy;
	float kanshix;
	float kanshiy;
	float kaokakudo;
}data;

static vector<data> positiondata;
static vector<data> expositiondata;
static char filename[] = "1211_a.csv";
static char exfilename[] = "1218_a.csv";
static int framenum;//可変で取得
static int exframenum;

//熟練医用のグリッド
//
static int exgrid[5][5][100];
