#pragma once
#include <Windows.h>

// #define SIZE			16  // SIZE BÀN CỜ
#define Black 0
#define DarkBlue 1
#define DarkGreen 2
#define DarkCyan 3
#define DarkRed 4
#define DarkPink 5
#define DarkYellow 6
#define DarkWhite 7
#define Grey 8
#define Blue 9
#define Green 10
#define Cyan 11
#define Red 12
#define Pink 13
#define Yellow 14
#define White 15
#define defaultColor 7
void Textcolor(int n); // Đổi màu kí tự
void AnTroChuot();	   // Ẩn trỏ chuột
void HienTroChuot();   // Hiện trỏ chuột
class _Common
{
public:
	static void fixConsoleWindow();				// Cố định màn hình Console
	static void gotoXY(int, int);				// Di chuyển đến tọa độ (x,y) trong màn hình Console
	static void setConsoleWindow(int w, int h); // Chỉnh size của màn hình Console
public:
	_Common();
	~_Common();
};
