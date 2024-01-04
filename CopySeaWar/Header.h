#pragma once

#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>
using namespace std;

const int startCoordX = 2;
const int startCoordY = 2;
const int moveRight = 4;
const int moveDown = 2;

int ship3(int arr[2][3]);

int ship2(int arr[2][2]);

int autoR(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1]);

int manualR(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1]);

bool pois(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1], int coordinates);

void fieldHuman(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1]);

void fieldAll(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1], int Ship4[2][4], int Ship3_1[2][3], int Ship3_2[2][3], int Ship2_1[2][2], int Ship2_2[2][2], int Ship2_3[2][2], int Ship1_1[2][1], int Ship1_2[2][1], int Ship1_3[2][1], int Ship1_4[2][1], int shotH[100], int shotC[100]);

int ship_search(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1], int* pol, int* st, int p, int shotC[100], int* w, int* pr, int* lv, int* vr, int* nz);

void game(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1], int Ship4[2][4], int Ship3_1[2][3], int Ship3_2[2][3], int Ship2_1[2][2], int Ship2_2[2][2], int Ship2_3[2][2], int Ship1_1[2][1], int Ship1_2[2][1], int Ship1_3[2][1], int Ship1_4[2][1], int shotH[100], int shotC[100], int* pr, int* lv, int* vr, int* nz);

enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

void SetColor(ConsoleColor text, ConsoleColor background);