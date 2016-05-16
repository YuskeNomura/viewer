#pragma once

#include<stdio.h>

int read_data(void);
//ƒOƒ[ƒoƒ‹•Ï”
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
static int framenum;//‰Â•Ï‚Åæ“¾
static int exframenum;
