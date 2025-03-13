#pragma once
#include "Game.h"

struct Diem
{
	int score1;
	int score2;
};
void size();
void ScreenStartGame();											 // Menu Chính
void PrintScoreBoard(int size);									 // BANG DIEM
void PlayerVsCom(Diem &a, int load, char data[30], int size);	 // BOT(ez)
void PlayerVsCom2(Diem &a, int load, char data[30], int size);	 // BOT(hard)
void PlayerVsPlayer(Diem &a, int load, char data[30], int size); // P VS P
void LoadLoad();												 // load game da save
void ReadNameFile();
int ReadChedo(char a[30]);
int ReadNameSize(char a[30]);
