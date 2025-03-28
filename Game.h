#pragma once
#include "Board.h"
#include "Play.h"
#include <Windows.h>
#include <fstream>
#include <mmsystem.h>

void P1();
void P2();
void P1WIN();
void P2WIN();
void Box();
void Draw();
void PDraw();
// Xử lí hiệu ứng thắng - thua - hòa .
class _Game : public _Point
{
private:
	_Board *_b; // Khởi tạo 1 bàn cờ
	bool _turn; // True là lượt người chơi 1 , false là người chơi 2.
	// int _x, _y;		// Tọa độ            kế thừa lớp _Point
	int _command; // Nhận phím
	int scorep1;  // Số trận thắng P1
	int scorep2;  // Số trận thắng P2
	bool _loop;	  // True chơi tiếp, False Out.
	int chedo;	  // Đọc file để nhận biết chế độ chơi
				  // -31 : Chế độ P vs P đang đến lượt X
				  // -30 : Chế độ P vs P đang đến lượt O
				  // -4  : Chế độ P vs Bot đang đến lượt X
public:
	void setCountXY()
	{
		_b->CountX = 0;
		_b->CountY = 0;
	}
	// Cài đặt biến đếm nước cờ X và Y = 0.
	int getChedo() { return chedo; }
	// Nhận biết chế độ .
	int getCommand();
	// Lấy giá trị của phím nhập vào .
	void setCommand(int x) { _command = x; }
	// Cài đặt phím nhập vào
	bool isContinue();
	// Trò chơi tiếp tục
	char waitKeyBoard();
	// Chờ nhập phím
	char askContinue();
	// Chơi lại hay không ?

public:
	void startGame(int pSize);						 // Khởi tạo game . Bắt đầu game
	void exitGame();								 // Thoát Game
	void SaveGame(int n, int pSize, int s1, int s2); // Lưu Game đang chơi với biến n là chế độ và lượt .
	void LoadGame(char data[30], int pSize);		 // Khởi tạo game . Bắt đầu game ( trường hợp Load Game )
public:
	int processFinish(int x, int y);
	// Kiểm tra thắng thua - tiếp tục
	bool processCheckBoard(int pSize);
	// Đánh dấu X và O trên bàn cờ
	void moveRight();
	void moveLeft();
	void moveUp();
	void moveDown();
	// Di chuyển lên - xuống - trái - phải
	void setX(int x) { _x = x; }
	void setY(int y) { _y = y; }
	// Cài đặt biến _x _y
	int getXatEnter();
	int getYatEnter();
	// Lấy giá trị _x _y
	bool getTurn() { return _turn; }
	// Lấy giá trị của lượt chơi .
	void setTurn() { _turn = !_turn; }
	// Đảo lượt chơi
	void TimKiemNuocDi();  // Tìm kiếm nước đi cho máy(ez)
	void TimKiemNuocDi2(); // Tìm kiếm nước đi cho máy(Hard)
	int DemNuocCoDaDi();
	// Đếm nước cờ đã đi được
public:
	_Game();
	_Game(int pSize, int pLeft, int pTop); // tinh da hinh
	~_Game();
};
void P1();
void P2();
void Draw();
void box();