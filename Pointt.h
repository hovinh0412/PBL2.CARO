#pragma once
#include <conio.h>
#include <iostream>
#include "Common.h"
using namespace std;
class _Point
{
public:
	int _x;
	int _y;
	// Tọa độ x y trên bàn cờ
	int _check;
	// Biến nhận biết X và O ( -1 = X , 1 = O, 0 = Ô trống )
	int _size;
	// Kích thước bàn cờ (size x size)
	int _left;
	int _top;
	// Tọa độ phía bên trái và trên bàn cờ.

public:
	bool setCheck(int);
	// Cài đặt biến _check
	int getX();
	// Lấy giá trị của _x
	int getY();
	// Lấy giá trị của _y
	int getCheck();
	// Lấy giá trị của _check
	void setX(int);
	// Cài đặt biến _x
	void setY(int);
	// Cài đặt biến _y

public:
	_Point(int, int); // tính đa hình
	_Point();
	~_Point();
};
