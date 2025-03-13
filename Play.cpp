#include "Play.h"
#include <vector>
#include <iostream>
using namespace std;
int _size; //size ban co
int s1=0,s2=0; //gia tri de luu so tran thang vao savegame 
void PrintCaro()
{
	int x = 25, y = 0;
	Textcolor(Red);
	_Common::gotoXY(x, y);				   cout << "ooooooooooooo";
	_Common::gotoXY(x - 3, y + 1);			cout << "oooooooooooooooo";
	_Common::gotoXY(x - 5, y + 2);    cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 6, y + 3);   cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 7, y + 4);  cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 5); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 6); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 7); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 8); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 9); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 10); cout << "ooooooo";
	_Common::gotoXY(x - 7, y + 11); cout << "ooooooo";
	_Common::gotoXY(x - 6, y + 12);  cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 5, y + 13);   cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 3, y + 14);		cout << "oooooooooooooooo";
	_Common::gotoXY(x, y + 15);			   cout << "ooooooooooooo";
	Textcolor(Green);
	_Common::gotoXY(x - 4 + 22, y + 4);				    cout << "ooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 2, y + 5);		      cout << "ooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 6);		     cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 11);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 12);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 13);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 14);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 15);		 cout << "oooooo     oooooo";
	Textcolor(Blue);

	_Common::gotoXY(x + 33, y + 4);			cout << "ooooo   ooooooooo";
	_Common::gotoXY(x + 33, y + 5);			cout << "oooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 6);			cout << "ooooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 7);			cout << "oooooooooooooooooooo";
	_Common::gotoXY(x + 1 + 33, y + 8);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 9);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 10);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 11);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 12);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 13);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 14);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 15);		 cout << "ooooooo";
	Textcolor(Yellow);
	_Common::gotoXY(x + 57, y + 4);					cout << "ooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 5);			  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 6);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 11);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 12);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 13);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 14);		  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57, y + 15);				cout << "ooooooooooo";
	Textcolor(defaultColor);

}
void About()
{
	system("cls");
	PrintCaro();
	Textcolor(Cyan);
	_Common::gotoXY(60, 18);
	cout << "ABOUT";
	_Common::gotoXY(50, 21);
	cout << "DO AN GAME CARO - LOP 22T_KHDL - DUT" << endl;
	_Common::gotoXY(50, 22);
	cout << "-> Ho ten : NGUYEN THANH TRUNG." << endl;
	_Common::gotoXY(50, 23);
	cout << "-> MSSV   : 102220044." << endl;
	_Common ::gotoXY(50, 24);
	cout << "-> Ho Ten : HO NGUYEN THE VINH." << endl;
	_Common::gotoXY(50, 25);
	cout << "-> MSSV   : 102220046." << endl;
	_Common::gotoXY(50, 26);
	cout << "-> GV huong dan : DANG HOAI PHUONG " << endl;
	_Common::gotoXY(50, 27);
	cout << "-> Chuc moi nguoi choi game vui ve !!" << endl;
	_Common::gotoXY(60, 30);
	cout << "BACK";
	char command = ' ';
	command = _getch();
	system("cls");
}
void Help()
{
	system("cls");
	PrintCaro();
	Textcolor(Cyan);
	_Common::gotoXY(60, 18);
	cout << "HELP";
	_Common::gotoXY(50, 21);
	cout << "HUONG DAN" << endl;
	_Common::gotoXY(50, 22);
	cout << "1. Ban co gom N x N o vuong." << endl;
	_Common::gotoXY(50, 23);
	cout << "2. Su dung cac phim W A S D hoac cac phim mui ten de di chuyen va Enter de danh." << endl;
	_Common::gotoXY(50, 24);
	cout << "3. Luat choi cu du 5 quan co X hoac O theo hang ngang, doc, cheo se chien thang." << endl;
	_Common::gotoXY(50, 25);
	cout << "4. Luat choi tuan theo quy dinh chan 2 dau " << endl;

	_Common::gotoXY(50, 26);
	cout << "-> Chuc moi nguoi choi game vui ve !!" << endl;
	_Common::gotoXY(60, 30);
	cout << "BACK";
	char command = ' ';
	command = _getch();
	system("cls");
}
void size(){
	AnTroChuot();
	system("cls");
	PrintCaro();
	int x = 50, y = 20;	
	Textcolor(7);
	_Common::gotoXY(48, 18);cout<<"==                ==";
	Textcolor(3);
	_Common::gotoXY(50, 18); cout << "SIZE TABLE N x N";
	Textcolor(Red);
	_Common::gotoXY(51, 20); cout << "-> 14 X 14 <-";
	Textcolor(7);
	_Common::gotoXY(51, 21); cout << "   15 X 15   ";
	_Common::gotoXY(51, 22); cout << "   16 X 16   ";
	_Common::gotoXY(51, 23); cout << "   17 X 17   ";
	_Common::gotoXY(51, 24); cout << "   18 X 18   ";
	//xu ly giao dien menu
	while (1)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'w':
				 //PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y > 20)
				{
					y--;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::gotoXY(51, 20); cout << "-> 14 X 14 <-";
					Textcolor(7);
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 21)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					Textcolor(Red);
					_Common::gotoXY(51, 21); cout << "-> 15 X 15 <-";
					Textcolor(7);
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 22)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					Textcolor(Red);
					_Common::gotoXY(51, 22); cout << "-> 16 X 16 <-";
					Textcolor(7);
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 23)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					Textcolor(Red);
					_Common::gotoXY(51, 23); cout << "-> 17 X 17 <-";
					Textcolor(7);
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 24)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					Textcolor(Red);
					_Common::gotoXY(51, 24); cout << "-> 18 X 18 <-";
				}
				break;
			case 's':
				 //PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y<24)
				{
					y++;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::gotoXY(51, 20); cout << "-> 14 X 14 <-";
					Textcolor(7);
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 21)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					Textcolor(Red);
					_Common::gotoXY(51, 21); cout << "-> 15 X 15 <-";
					Textcolor(7);
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 22)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					Textcolor(Red);
					_Common::gotoXY(51, 22); cout << "-> 16 X 16 <-";
					Textcolor(7);
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 23)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					Textcolor(Red);
					_Common::gotoXY(51, 23); cout << "-> 17 X 17 <-";
					Textcolor(7);
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 24)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					Textcolor(Red);
					_Common::gotoXY(51, 24); cout << "-> 18 X 18 <-";
				}
				break;
			case 72:
				if (y > 20)
				{
					y--;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::gotoXY(51, 20); cout << "-> 14 X 14 <-";
					Textcolor(7);
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 21)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					Textcolor(Red);
					_Common::gotoXY(51, 21); cout << "-> 15 X 15 <-";
					Textcolor(7);
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 22)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					Textcolor(Red);
					_Common::gotoXY(51, 22); cout << "-> 16 X 16 <-";
					Textcolor(7);
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 23)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					Textcolor(Red);
					_Common::gotoXY(51, 23); cout << "-> 17 X 17 <-";
					Textcolor(7);
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 24)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					Textcolor(Red);
					_Common::gotoXY(51, 24); cout << "-> 18 X 18 <-";
				}
				break;
			case 80:
				if (y<24)
				{
					y++;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::gotoXY(51, 20); cout << "-> 14 X 14 <-";
					Textcolor(7);
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 21)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					Textcolor(Red);
					_Common::gotoXY(51, 21); cout << "-> 15 X 15 <-";
					Textcolor(7);
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 22)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					Textcolor(Red);
					_Common::gotoXY(51, 22); cout << "-> 16 X 16 <-";
					Textcolor(7);
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 23)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					Textcolor(Red);
					_Common::gotoXY(51, 23); cout << "-> 17 X 17 <-";
					Textcolor(7);
					_Common::gotoXY(51, 24); cout << "   18 X 18   ";
				}
				if (y == 24)
				{
					Textcolor(7);
					_Common::gotoXY(51, 20); cout << "   14 X 14   ";
					_Common::gotoXY(51, 21); cout << "   15 X 15   ";
					_Common::gotoXY(51, 22); cout << "   16 X 16   ";
					_Common::gotoXY(51, 23); cout << "   17 X 17   ";
					Textcolor(Red);
					_Common::gotoXY(51, 24); cout << "-> 18 X 18 <-";
				}
				break;
			case 13:
				 //PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y == 20)
				{
					_size=14;
					return;
				}
				if (y == 21)
				{
					_size=15;
					return;
				}
				if (y == 22)
				{
				    _size=16;
					return;
				}
				if (y == 23)
				{
				    _size=17;
					return;
				}
				if (y == 24)
				{
				 	_size=18;
					return;
				}
				break;
			case 27:
			    ScreenStartGame();
			}
		}	
	}
}
void ScreenStartGame(){
	AnTroChuot();
	system("cls");
	int x = 50, y = 20;	
	char s[30] = " ";
	PrintCaro();
	Textcolor(Red);
	_Common::gotoXY(47, 20); cout << "-> Player Vs Player <-";
	Textcolor(7);
	_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
	_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
	_Common::gotoXY(47, 23); cout << "   Help   ";
	_Common::gotoXY(47, 24); cout << "   About   ";
	_Common::gotoXY(47, 25); cout << "   Load Game   ";
	_Common::gotoXY(47, 26); cout << "   Exit   ";
	_Common::gotoXY(47, 32); cout << "....... W - S|"<<char(30)<<" "<<char(31)<<": Move ( Off Unikey - Off Caps Lock ) ";
	_Common::gotoXY(47, 33); cout << "....... Enter : Select ";

//xu ly giao dien menu
	while (1)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'w':
				 //PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y > 20)
				{
					y--;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::gotoXY(47, 20); cout << "-> Player Vs Player <-";
					Textcolor(7);
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 21)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					Textcolor(Red);
					_Common::gotoXY(47, 21); cout << "-> Player Vs Computer (Easy) <-";
					Textcolor(7);
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 22)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					Textcolor(Red);
					_Common::gotoXY(47, 22); cout << "-> Player Vs Computer (Hard) <-";
					Textcolor(7);
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 23)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					Textcolor(Red);
					_Common::gotoXY(47, 23); cout << "-> Help <-";
					Textcolor(7);
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 24)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					Textcolor(Red);
					_Common::gotoXY(47, 24); cout << "-> About <-";
					Textcolor(7);
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 25)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					Textcolor(Red);
					_Common::gotoXY(47, 25); cout << "-> Load Game <-";
					Textcolor(7);
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 26)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					Textcolor(Red);
					_Common::gotoXY(47, 26); cout << "-> Exit <-";
				}
				break;
			case 's':
				 //PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y<26)
				{
					y++;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::gotoXY(47, 20); cout << "-> Player Vs Player <-";
					Textcolor(7);
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 21)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					Textcolor(Red);
					_Common::gotoXY(47, 21); cout << "-> Player Vs Computer (Easy) <-";
					Textcolor(7);
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 22)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					Textcolor(Red);
					_Common::gotoXY(47, 22); cout << "-> Player Vs Computer (Hard) <-";
					Textcolor(7);
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 23)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					Textcolor(Red);
					_Common::gotoXY(47, 23); cout << "-> Help <-";
					Textcolor(7);
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 24)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					Textcolor(Red);
					_Common::gotoXY(47, 24); cout << "-> About <-";
					Textcolor(7);
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 25)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					Textcolor(Red);
					_Common::gotoXY(47, 25); cout << "-> Load Game <-";
					Textcolor(7);
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 26)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					Textcolor(Red);
					_Common::gotoXY(47, 26); cout << "-> Exit <-";
				}
				break;
			case 72:
				if (y > 20)
				{
					y--;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::gotoXY(47, 20); cout << "-> Player Vs Player <-";
					Textcolor(7);
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 21)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					Textcolor(Red);
					_Common::gotoXY(47, 21); cout << "-> Player Vs Computer (Easy) <-";
					Textcolor(7);
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 22)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					Textcolor(Red);
					_Common::gotoXY(47, 22); cout << "-> Player Vs Computer (Hard) <-";
					Textcolor(7);
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 23)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					Textcolor(Red);
					_Common::gotoXY(47, 23); cout << "-> Help <-";
					Textcolor(7);
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 24)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					Textcolor(Red);
					_Common::gotoXY(47, 24); cout << "-> About <-";
					Textcolor(7);
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 25)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					Textcolor(Red);
					_Common::gotoXY(47, 25); cout << "-> Load Game <-";
					Textcolor(7);
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 26)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					Textcolor(Red);
					_Common::gotoXY(47, 26); cout << "-> Exit <-";
				}
				break;
			case 80:
				if (y<26)
				{
					y++;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					Textcolor(Red);
					_Common::gotoXY(47, 20); cout << "-> Player Vs Player <-";
					Textcolor(7);
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 26); cout << "   Load Game   ";
					_Common::gotoXY(47, 25); cout << "   Exit   ";
				}
				if (y == 21)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					Textcolor(Red);
					_Common::gotoXY(47, 21); cout << "-> Player Vs Computer (Easy) <-";
					Textcolor(7);
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 22)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					Textcolor(Red);
					_Common::gotoXY(47, 22); cout << "-> Player Vs Computer (Hard) <-";
					Textcolor(7);
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 23)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					Textcolor(Red);
					_Common::gotoXY(47, 23); cout << "-> Help <-";
					Textcolor(7);
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 24)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					Textcolor(Red);
					_Common::gotoXY(47, 24); cout << "-> About <-";
					Textcolor(7);
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 25)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					Textcolor(Red);
					_Common::gotoXY(47, 25); cout << "-> Load Game <-";
					Textcolor(7);
					_Common::gotoXY(47, 26); cout << "   Exit   ";
				}
				if (y == 26)
				{
					Textcolor(7);
					_Common::gotoXY(47, 20); cout << "   Player Vs Player   ";
					_Common::gotoXY(47, 21); cout << "   Player Vs Computer (Easy)   ";
					_Common::gotoXY(47, 22); cout << "   Player Vs Computer (Hard)   ";
					_Common::gotoXY(47, 23); cout << "   Help   ";
					_Common::gotoXY(47, 24); cout << "   About   ";
					_Common::gotoXY(47, 25); cout << "   Load Game   ";
					Textcolor(Red);
					_Common::gotoXY(47, 26); cout << "-> Exit <-";
				}
				break;
			case 13:
				if (y == 20)
				{
					size();
					Diem a;
					a.score1 = 0;
					a.score2 = 0;
					PlayerVsPlayer(a,0,s,_size);
				}
				if (y == 21)
				{
					size();
					Diem a;
					a.score1 = 0;
					a.score2 = 0;
					PlayerVsCom(a,0,s,_size);
				}
				if (y == 22)
				{
					size();
					Diem a;
					a.score1 = 0;
					a.score2 = 0;
				    PlayerVsCom2(a,0,s,_size);
				}
				if (y == 23)
				{
				    Help();
				    ScreenStartGame();
				}
				if (y == 24)
				{
				 	About();
					ScreenStartGame();
				}
				if (y == 25)
				{
					LoadLoad();
				}
				if (y == 26)
				{
					exit(0);
				}
				break;
			}
		}	
	}
}
void PrintScoreBoard(int size)
{
	// Textcolor(Red);
	// // cot doc
	// for (int i = 0; i <= size*2; i++){
	// 	_Common::gotoXY(size * 4 + 1, i);
	// 	if(i==0)cout<<char(254);
	// 	else cout << char(219);
	// }
	// _Common::gotoXY(0, size*2+1);
	// for(int i=0;i<size*4+2;i++){
	// 	cout<< char(223);
	// }
	// Textcolor(DarkRed);
	// for (int i = 0; i <= size * 2; i++){
	// 	_Common::gotoXY(size * 4 + 2, i);
	// 	if(i==0)cout<<char(254);
	// 	else cout << char(219);
	// }
	// _Common::gotoXY(size*4+2, size*2+1);cout<< char(223);
	// //
	//Bang
	Textcolor(Red); 
	_Common::gotoXY(size * 4 + 7, (size * 2 -12) / 2-8 + 0);cout<<" oooo  ";
	_Common::gotoXY(size * 4 + 7, (size * 2 -12) / 2-8 + 1);cout<<"oo     ";
	_Common::gotoXY(size * 4 + 7, (size * 2 -12) / 2-8 + 2);cout<<"oo     ";
	_Common::gotoXY(size * 4 + 7, (size * 2 -12) / 2-8 + 3);cout<<" oooo  ";
	Textcolor(Green); 
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2-8 + 0);cout<<"   ooo     ";
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2-8 + 1);cout<<"  oo oo    ";
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2-8 + 2);cout<<" ooooooo   ";
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2-8 + 3);cout<<"oo     oo  ";
	Textcolor(Blue); 
	_Common::gotoXY(size * 4 + 25, (size * 2 -12) / 2-8 + 0);cout<<"oooo   ";
	_Common::gotoXY(size * 4 + 25, (size * 2 -12) / 2-8 + 1);cout<<"oo oo  ";
	_Common::gotoXY(size * 4 + 25, (size * 2 -12) / 2-8 + 2);cout<<"oooo   ";
	_Common::gotoXY(size * 4 + 25, (size * 2 -12) / 2-8 + 3);cout<<"oo oo  ";
	Textcolor(Yellow); 
	_Common::gotoXY(size * 4 + 32, (size * 2 -12) / 2-8 + 0);cout<<" oooo  ";
	_Common::gotoXY(size * 4 + 32, (size * 2 -12) / 2-8 + 1);cout<<"oo  oo ";
	_Common::gotoXY(size * 4 + 32, (size * 2 -12) / 2-8 + 2);cout<<"oo  oo ";
	_Common::gotoXY(size * 4 + 32, (size * 2 -12) / 2-8 + 3);cout<<" oooo  ";
	//khung

	Textcolor(DarkWhite);
	for (int i = 0; i < size*2; i++){
		_Common::gotoXY(size * 4 + 4, i);
		if(i==0)cout<<char(254);
		else cout << char(219);
	}
	_Common::gotoXY(size * 4 + 4, size*2);
	for(int i=0;i<38;i++){
		cout<< char(223);
	}
	for (int i = 0; i < size*2; i++){
		_Common::gotoXY(size * 4 + 4 + 37, i);
		if(i==0)cout<<char(254);
		else cout << char(219);
	}
	//bang

	Textcolor(Grey);
	for (int i = 0; i < 20; i++){
		_Common::gotoXY(size * 4 + 8,(size * 2 -12) / 2-3 + i);
		cout << char(219);
	}
	for (int i = 1; i < 20; i++){
		_Common::gotoXY(size * 4 + 37,(size * 2 -12) / 2-3 + i);
		cout << char(219);
	}
	_Common::gotoXY(size * 4 + 8, (size * 2 -12) / 2-3 );
	for (int i = 0; i <= 29; i++){ 
		cout << char(220);
	}
	_Common::gotoXY(size * 4 + 8, (size * 2 -12) / 2+12+4 );
	for (int i = 0; i <= 29; i++){ 
		cout << char(223);
	}
	_Common::gotoXY(size * 4 + 10, (size * 2 -12) / 2+8 );
	for (int i = 2; i <= 27; i++){ 
		cout <<"-";
	}
	_Common::gotoXY(size * 4 + 10, (size * 2 -12) / 2+10 );
	for (int i = 2; i <= 27; i++){ 
		cout <<"-";
	}
	_Common::gotoXY(size * 4 + 11, (size * 2 -12) / 2+3 );
	for (int i = 3; i <= 26; i++){ 
		cout <<"=";
	}
	
	//noi dung trong ban
	Textcolor(DarkYellow);
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2-1 );
	cout << "PLAYER 1";
	Textcolor(DarkWhite);
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2+2-1 );
	cout << "Chess pieces X : ";
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2+2 );
	cout << "The match was won: ";

	Textcolor(DarkYellow);
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2+5-1 );
	cout << "PLAYER 2";
	Textcolor(DarkWhite);
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2+7-1 );
	cout << "Chess pieces O : ";
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2+7 );
	cout << "The match was won: ";


	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2+12-1 );
	cout << "L : Save Game ";
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2+12 );
	cout << "T : Load Game ";
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2+12+1 );
	cout << "ESC : Back ";
	_Common::gotoXY(size * 4 + 13, (size * 2 -12) / 2+12+3 );
	cout<< "W A S D||"<<char(30)<<" "<<char(31)<<" "<<char(17)<<" "<<char(16)<<":Move";

	_Common::gotoXY(0,0);
}
void PlayerVsCom(Diem &a, int load , char data[30],int size)
{
	HienTroChuot();
	_Game g(size, 0, 0);
	g.setCountXY();
	if (load == -4)
	{
		g.LoadGame(data,size);
	}
	else
	{
		g.startGame(size);
	}
	PrintScoreBoard(size);
	Textcolor(Cyan);
	_Common::gotoXY(size * 4 + 12,(size * 2 -12) / 2-3 );
	cout << " PLAYER VS BOT (EASY) ";
	Textcolor(DarkYellow);
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2-1 );
	cout << "PLAYER     ";
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2+5-1 );
	cout << "COMPUTER      ";
	Textcolor(Blue);
	_Common::gotoXY(size * 4 + 13,(size * 2 -12) / 2+10-1);
	cout << "It's player 's turn    ";
	_Common::gotoXY(size * 4 + 33, (size * 2 -12) / 2+2);
	cout << a.score1;
	Textcolor(Red);
	_Common::gotoXY(size * 4 + 33, (size * 2 -12) / 2+7);
	cout << a.score2;
	_Common::gotoXY(2, 1);
	while (g.isContinue())
	{
		if (!g.getTurn())
		{
				g.TimKiemNuocDi();
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				_Common::gotoXY(x, y);
				// Sleep(300);
				g.setCommand(13);
		}
		else
			g.waitKeyBoard();
		if (g.getCommand() == 27)
		{
			ScreenStartGame();
		}
		else
		{
			switch (g.getCommand())
			{
			case 'A':
				g.moveLeft();
				break;
			case 'D':
				g.moveRight();
				break;
			case 'W':
				g.moveUp();
				break;
			case 'S':
				g.moveDown();
				break;
			case 75:
				g.moveLeft();
				break;
			case 77:
				g.moveRight();
				break;
			case 72:
				g.moveUp();
				break;
			case 80:
				g.moveDown();
				break;
			case 'L':
			    g.SaveGame(-4,size,s1,s2);
				break;
			case 'T':
			    LoadLoad();
				break;
			case 13:
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				if (g.processCheckBoard(size)){
					Textcolor(Blue);
					_Common::gotoXY(size * 4 + 13,(size * 2 -12) / 2+10-1);
					cout << "It's player 's turn    ";
					_Common::gotoXY(x, y);
					switch (g.processFinish(x, y)){
					case -1:
						a.score1++;
						s1=a.score1;
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									return PlayerVsCom(a,0,data,size);
									break;
								case 27:
									ScreenStartGame();
									break;
								}
							}
						}
                        break;
					case 1:
						a.score2++;
						s2=a.score2;
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									return PlayerVsCom(a,0,data,size);
									break;
								case 27:
									ScreenStartGame();
									break;
								}
							}
						}
						break;
					case 0:
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									return PlayerVsCom(a,0,data,size);
									break;
								case 27:
									ScreenStartGame();
									break;
								}
							}
						}
						break;
					}
				}
			}
		}

	}
}
void PlayerVsCom2(Diem &a, int load , char data[30],int size)
{
	HienTroChuot();
	_Game g(size, 0, 0);
	g.setCountXY();
	if (load == -5)
	{
		g.LoadGame(data,size);
	}
	else
	{
		g.startGame(size);
		g.setTurn();
	}
	PrintScoreBoard(size);
	Textcolor(Cyan);
	_Common::gotoXY(size * 4 + 12,(size * 2 -12) / 2-3 );
	cout << " PLAYER VS BOT (HARD) ";
	Textcolor(DarkYellow);
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2-1 );
	cout << "PLAYER     ";
	_Common::gotoXY(size * 4 + 14, (size * 2 -12) / 2+5-1 );
	cout << "COMPUTER      ";
	Textcolor(Blue);
	_Common::gotoXY(size * 4 + 13,(size * 2 -12) / 2+10-1);
	cout << "It's player 's turn     ";
	_Common::gotoXY(size * 4 + 33, (size * 2 -12) / 2+2);
	cout << a.score1;
	Textcolor(Red);
	_Common::gotoXY(size * 4 + 33, (size * 2 -12) / 2+7);
	cout << a.score2;
	_Common::gotoXY(2, 1);
	while (g.isContinue())
	{
		if (!g.getTurn())
		{
			if (g.DemNuocCoDaDi() == 0)
			{
				if(size%2==0){
					g.setX((size * 4 / 2)-2);
					g.setY((size * 2 / 2)-1);
					_Common::gotoXY((size * 4 / 2) - 2, (size * 2 / 2) - 1);
					g.setCommand(13);
				}
				else{
					g.setX((size * 4 / 2));
					g.setY((size * 2 / 2));
					_Common::gotoXY((size * 4 / 2), (size * 2 / 2));
					g.setCommand(13);
				}
			}
			else
			{
				g.TimKiemNuocDi2();
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				_Common::gotoXY(x, y);
				// Sleep(300);
				g.setCommand(13);
			}
		}
		else
			g.waitKeyBoard();
		
		if (g.getCommand() == 27)
		{
			ScreenStartGame();
		}
		else
		{
			switch (g.getCommand())
			{
			case 'A':
				g.moveLeft();
				break;
			case 'D':
				g.moveRight();
				break;
			case 'W':
				g.moveUp();
				break;
			case 'S':
				g.moveDown();
				break;
			case 75:
				g.moveLeft();
				break;
			case 77:
				g.moveRight();
				break;
			case 72:
				g.moveUp();
				break;
			case 80:
				g.moveDown();
				break;
			case 'L':
			    g.SaveGame(-5,size,s1,s2);
				break;
			case 'T':
			    LoadLoad();
				break;
			case 13:
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				if (g.processCheckBoard(size)){
					Textcolor(Blue);
					_Common::gotoXY(size * 4 + 13,(size * 2 -12) / 2+10-1);
					cout << "It's player 's turn    ";
					_Common::gotoXY(x, y);
					switch (g.processFinish(x, y)){
					case -1:
						a.score1++;
						s1=a.score1;
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									return PlayerVsCom2(a,0,data,size);
									break;
								case 27:
									ScreenStartGame();
									break;
								}
							}
						}
                        break;
					case 1:
						a.score2++;
						s2=a.score2;
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									return PlayerVsCom2(a,0,data,size);
									break;
								case 27:
									ScreenStartGame();
									break;
								}
							}
						}
						break;
					case 0:
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									return PlayerVsCom2(a,0,data,size);
									break;
								case 27:
									ScreenStartGame();
									break;
								}
							}
						}
						break;
					}
				}
			}
		}

	}
}
void PlayerVsPlayer(Diem &a, int load , char data[30],int size)
{
	HienTroChuot();
	_Game g(size, 0, 0);
	g.setCountXY(); 
	if (load == -30)
	{
		g.setTurn();
		g.LoadGame(data,size);
	}
	else if (load == -31)
	{
		g.LoadGame(data,size);
	}
	else 
		g.startGame(size);
	PrintScoreBoard(size);
	Textcolor(Cyan);
	_Common::gotoXY(size * 4 + 12,(size * 2 -12) / 2-3 );
	cout << " PLAYER VS PLAYER ";
	Textcolor(Blue);
	_Common::gotoXY(size * 4 + 33, (size * 2 -12) / 2+2);
	cout << a.score1;
	Textcolor(Red);
	_Common::gotoXY(size * 4 + 33, (size * 2 -12) / 2+7);
	cout << a.score2;
	_Common::gotoXY(2, 1);
	while (g.isContinue())
	{
		g.waitKeyBoard();
		if (g.getCommand() == 27){
			ScreenStartGame();
		}	
		else
		{
			switch (g.getCommand())
			{
			case 'A':
				g.moveLeft();
				break;
			case 'D':
				g.moveRight();
				break;
			case 'W':
				g.moveUp();
				break;
			case 'S':
				g.moveDown();
				break;
			case 75:
				g.moveLeft();
				break;
			case 77:
				g.moveRight();
				break;
			case 72:
				g.moveUp();
				break;
			case 80:
				g.moveDown();
				break;
			case 'L':
				if (g.getTurn() == 1)
					g.SaveGame(-31,size,s1,s2);
				else
					g.SaveGame(-30,size,s1,s2);
				break;
			case 'T':
				LoadLoad();
				break;
			case 13:
				int x = g.getXatEnter();
				int y = g.getYatEnter();
				if (g.processCheckBoard(size)){
					switch (g.processFinish(x, y)){
					case -1:
						a.score1++;
						s1=a.score1;
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									return PlayerVsPlayer(a,0,data,size);
									break;
								case 27:
									ScreenStartGame();
									break;
								}
							}
						}
						break;
					case 1:
						a.score2++;
						s2=a.score2;
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									return PlayerVsPlayer(a,0,data,size);
									break;
								case 27:
									ScreenStartGame();
									break;
								}
							}
						}
						break;
					case 0:
						while (1)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case 'y':
									return PlayerVsPlayer(a,0,data,size);
									break;
								case 27:
									ScreenStartGame();
									break;
								}
							}
						}
						break;
					}
				}
			}
		}
	}
}
int ReadChedo(char a[30])
{
	int d1, d2, chedo;
	system("cls");
	ifstream f;
	f.open(a, ios::in);
	if (!f){
		_Common::gotoXY(35, 46);
		cout << "\n FILE KHONG TON TAI!" << endl;
		ScreenStartGame();
	}
	else
		f >> d1>> d2 >> chedo;
	f.close();
	return chedo;
}
int ReadNameSize(char a[30])
{
	int d1, d2, chedo, size;
	system("cls");
	ifstream f;
	f.open(a, ios::in);
	if (!f){
		_Common::gotoXY(35, 46);
		cout << "\n FILE KHONG TON TAI!" << endl;
		ScreenStartGame();
	}
	else
		f >> d1>> d2 >> chedo >> size;
	f.close();
	return size;
}
void ReadNameFile()
{
	Textcolor(Cyan);
	_Common::gotoXY(60, 18);
	cout << "LIST FILE NAME";
	int i = 19;
	ifstream f;
	f.open("Name.txt", ios::in);
	while (!f.eof())
	{
		char s[30];
		f >> s;
		_Common::gotoXY(50, i);
		cout << s;
		i++;
	}
	f.close();
}
void LoadLoad()
{
	system("cls");
	PrintCaro();
	ReadNameFile();
	char data[30];
	_Common::gotoXY(50, 32);
	HienTroChuot();
	cout << "ENTER FILE NAME: ";
	char e=_getch();
	if(e==27)ScreenStartGame();
	cin.getline(data, 30);
	int chedo = ReadChedo(data);
	int size = ReadNameSize(data);
	ifstream f;
	f.open(data, ios::in);
	int s1,s2;
	f >> s1 >> s2;
	if (chedo == -30 || chedo == -31)
	{
		Diem a;
		a.score1 = s1;
		a.score2 = s2;
		PlayerVsPlayer(a, chedo, data,size);
	}
	if (chedo == -4)
	{
		Diem a;
		a.score1 =s1;
		a.score2 =s2;
		PlayerVsCom(a, -4, data,size);
	}
	if (chedo == -5)
	{
		Diem a;
		a.score1 = s1;
		a.score2 = s2;
		PlayerVsCom2(a, -5, data,size);
	}
}