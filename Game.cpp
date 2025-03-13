#include "Game.h"
#pragma comment(lib,"winmm.lib")

_Game::_Game(int pSize, int pLeft, int  pTop)
{
	_b = new _Board(pSize, pLeft, pTop);
	_loop = _turn = true;
	_command = -1;
	_x = pLeft;
	_y = pTop;
	scorep1=0;
	scorep2=0;
}
int _Game::getCommand(){ return _command; }
bool _Game::isContinue(){ return _loop; }
char _Game::waitKeyBoard()
{
	_command = toupper(_getch());
	return _command;
}
void _Game::startGame(int pSize)
{
	system("cls");
	_b->resetData();
	_b->drawBoard();
	_x = _b->getXAt(0, 0);
	_y = _b->getYAt(0, 0);
	if (_turn == 1)
	{
		Textcolor(Blue);
		_Common::gotoXY(pSize * 4 + 13,(pSize * 2 -12) / 2+10-1);
		cout << "It's player1's turn ";
	}
	else
	{
		Textcolor(Red);
		_Common::gotoXY(pSize * 4 + 13,(pSize * 2 -12) / 2+10-1);
		cout << "It's player2's turn ";
	}
	Textcolor(Blue);
	_Common::gotoXY(pSize *4 + 31, (pSize * 2 -12) / 2+2-1);
	cout << _b->CountX;
	Textcolor(Red);
	_Common::gotoXY(pSize * 4 + 31, (pSize * 2 -12) / 2+7-1);
	cout << _b->CountY;
}
void _Game::exitGame()
{
	_loop = false;
}
void _Game::moveRight(){
	if (_x<_b->getXAt(_b->getSize() - 1, _b->getSize() - 1))
	{
		_x += 4;
		_Common::gotoXY(_x, _y);
	}
}

void _Game::moveLeft(){
	if (_x>_b->getXAt(0,0))
	{
		_x -= 4;
		_Common::gotoXY(_x, _y);
	}
}
void _Game::moveDown(){
	if (_y<_b->getYAt(_b->getSize() - 1, _b->getSize() - 1))
	{
		_y += 2;
		_Common::gotoXY(_x, _y);
	}
}
void _Game::moveUp() {
	if (_y>_b->getYAt(0,0))
	{
		_y -= 2;
		_Common::gotoXY(_x, _y);
	}
}
bool _Game::processCheckBoard(int pSize)	
{
	switch (_b->checkBoard(_x, _y, _turn))
	{
	case -1:
		Textcolor(Blue);
		cout << "X";
		_Common::gotoXY(pSize *4 + 31, (pSize * 2 -12) / 2+2-1);
		cout << _b->CountX;
		Textcolor(Red);
		_Common::gotoXY(pSize * 4 + 31, (pSize * 2 -12) / 2+7-1);
		cout << _b->CountY;
		_Common::gotoXY(pSize * 4 + 13,(pSize * 2 -12) / 2+10-1);
		cout << "It's player2's turn ";

		_Common::gotoXY(_x, _y);
		break;
	case 1:
		Textcolor(Red);
		cout << "O";
		Textcolor(Blue);
		_Common::gotoXY(pSize * 4 + 31, (pSize * 2 -12) / 2+2-1);
		cout << _b->CountX;
		_Common::gotoXY(pSize * 4 + 13,(pSize * 2 -12) / 2+10-1);
		cout << "It's player1's turn ";
		Textcolor(Red);
		_Common::gotoXY(pSize * 4 + 31, (pSize * 2 -12) / 2+7-1);
		cout << _b->CountY;

		break;
	case 0:
		return false;
		break;
	}
	return true;
}
int _Game::DemNuocCoDaDi()
{
	return _b->CountX + _b->CountY;
}
void P1()
{
	int i = 30, j = 10;
	Textcolor(Blue);
	_Common::gotoXY(i, j);      cout<<" _______________________________________________________________________            ";
	_Common::gotoXY(i, j + 1);  cout<<"|XXXX        XXXX   XXXX              XXXX   XXXX   XXXXXXXX        XXXX|           ";
	_Common::gotoXY(i, j + 2);  cout<<"| XXXX      XXXX    XXXX     XXXX     XXXX   XXXX   XXXX XXXX       XXXX|           ";
	_Common::gotoXY(i, j + 3);  cout<<"|  XXXX    XXXX     XXXX     XXXX     XXXX   XXXX   XXXX  XXXX      XXXX|           ";
	_Common::gotoXY(i, j + 4);  cout<<"|   XXXX  XXXX      XXXX     XXXX     XXXX   XXXX   XXXX   XXXX     XXXX|           ";
	_Common::gotoXY(i, j + 5);  cout<<"|    XXXXXXXX       XXXX     XXXX     XXXX   XXXX   XXXX    XXXX    XXXX|           ";
	_Common::gotoXY(i, j + 6);  cout<<"|   XXXX  XXXX      XXXX     XXXX     XXXX   XXXX   XXXX     XXXX   XXXX|           ";
	_Common::gotoXY(i, j + 7);  cout<<"|  XXXX    XXXX     XXXX     XXXX     XXXX   XXXX   XXXX      XXXX  XXXX|           ";
	_Common::gotoXY(i, j + 8);  cout<<"| XXXX      XXXX    XXXX     XXXX     XXXX   XXXX   XXXX       XXXX XXXX|           ";
	_Common::gotoXY(i, j + 9);  cout<<"|XXXX        XXXX     XXXXXXX     XXXXXX     XXXX   XXXX        XXXXXXXX|           ";
	_Common::gotoXY(i, j + 10); cout<<"|_______________________________________________________________________|           ";
	Textcolor(Cyan);
	_Common::gotoXY(i, j + 11);
	cout << "                             Y   : Play Again                                              ";
	_Common::gotoXY(28, j + 12);
	cout << "                               ESC : BACK                                                   ";
}
void P2()
{
	int i = 30, j = 10;
	Textcolor(Red);
	_Common::gotoXY(i, j);      cout<<" ________________________________________________________________________            ";
	_Common::gotoXY(i, j + 1);  cout<<"|    ooooooooo       oooo              oooo   oooo   oooooooo        oooo|           ";
	_Common::gotoXY(i, j + 2);  cout<<"|  ooooooooooooo     oooo     oooo     oooo   oooo   oooo oooo       oooo|           ";
	_Common::gotoXY(i, j + 3);  cout<<"|oooo         oooo   oooo     oooo     oooo   oooo   oooo  oooo      oooo|           ";
	_Common::gotoXY(i, j + 4);  cout<<"|ooo           ooo   oooo     oooo     oooo   oooo   oooo   oooo     oooo|           ";
	_Common::gotoXY(i, j + 5);  cout<<"|ooo           ooo   oooo     oooo     oooo   oooo   oooo    oooo    oooo|           ";
	_Common::gotoXY(i, j + 6);  cout<<"|ooo           ooo   oooo     oooo     oooo   oooo   oooo     oooo   oooo|           ";
	_Common::gotoXY(i, j + 7);  cout<<"|oooo         oooo   oooo     oooo     oooo   oooo   oooo      oooo  oooo|           ";
	_Common::gotoXY(i, j + 8);  cout<<"|  ooooooooooooo     oooo     oooo     oooo   oooo   oooo       oooo oooo|           ";
	_Common::gotoXY(i, j + 9);  cout<<"|    ooooooooo         ooooooo     oooooo     oooo   oooo        oooooooo|           ";
	_Common::gotoXY(i, j + 10); cout<<"|________________________________________________________________________|           ";
	Textcolor(Cyan);
	_Common::gotoXY(i, j + 11);
	cout << "                             Y   : Play Again                                                 ";
	_Common::gotoXY(28, j + 12); 
	cout << "                               ESC : BACK                                                      ";
}
void Draw()
{
	int i = 29, j = 10;
	Textcolor(Red);
	_Common::gotoXY(i, j);     cout<<" ____________________________________________________________________________           ";
	_Common::gotoXY(i, j + 1); cout<<"|ooooooo        ooooooo               oooooo           oooo              oooo|          ";
	_Common::gotoXY(i, j + 2); cout<<"|oooo  oooo     oooo  oooo           ooo oooo          oooo     oooo     oooo|          ";
	_Common::gotoXY(i, j + 3); cout<<"|oooo   oooo    oooo   oooo         ooo   oooo         oooo     oooo     oooo|          ";
	_Common::gotoXY(i, j + 4); cout<<"|oooo    oooo   oooo  oooo         ooo     oooo        oooo     oooo     oooo|          ";
	_Common::gotoXY(i, j + 5); cout<<"|oooo    oooo   ooooooo           oooooooooooooo       oooo     oooo     oooo|          ";
	Textcolor(Blue);
	_Common::gotoXY(i, j + 6); cout<<"|XXXX    XXXX   XXXXXXX          XXXXXXXXXXXXXXXX      XXXX     XXXX     XXXX|          ";
	_Common::gotoXY(i, j + 7); cout<<"|XXXX   XXXX    XXXX XXXX       XXX           XXXX     XXXX     XXXX     XXXX|          ";
	_Common::gotoXY(i, j + 8); cout<<"|XXXX  XXXX     XXXX  XXXX     XXX             XXXX    XXXX     XXXX     XXXX|          ";
	_Common::gotoXY(i, j + 9); cout<<"|XXXXXXX        XXXX   XXXX   XXX               XXXX     XXXXXXX     XXXXXX  |          ";
	_Common::gotoXY(i, j + 10);cout<<"|____________________________________________________________________________|          ";
	Textcolor(Cyan);
	_Common::gotoXY(i, j + 11);
	cout << "                             Y   : Play Again                                                   ";
	_Common::gotoXY(28, j + 12);
	cout << "                               ESC : BACK                                                        ";
}
void box(){
	Textcolor(Grey);
	_Common::gotoXY(23,8);
	for(int i=0;i<89;i++)cout<< char(223);cout<<"                ";//in de
	_Common::gotoXY(23,24);
	for(int i=0;i<89;i++)cout<< char(223);cout<<"                ";//in de
	_Common::gotoXY(25,9);
	for(int i=0;i<85;i++)cout<< char(223);cout<<"                ";//in de
	_Common::gotoXY(25,23);
	for(int i=0;i<85;i++)cout<< char(223);cout<<"                ";//in de
	_Common::gotoXY(23,25);
	for(int i=0;i<89;i++)cout<<" ";cout<<"                ";//in de
	_Common::gotoXY(23,7);
	for(int i=0;i<89;i++)cout<<" ";cout<<"                ";//in de
}
int _Game::processFinish(int x,int y)
{
	_Common::gotoXY(0, _b->getYAt(_b->getSize() - 1, _b->getSize() - 1) + 2);
	int pWhoWin = _b->testBoard(x,y);
	switch (pWhoWin)
	{
	case -1:
		AnTroChuot();
		box();
		P1();
		break;
	case 1:
		AnTroChuot();
		box();
        P2();
		break;
	case 0:
		AnTroChuot();
		box();
        Draw();
		break;
	case 2:
		_turn = !_turn;
	}
	_Common::gotoXY(_x, _y);// Tráº£ vá» vá»‹ trĂ­ hiá»‡n hĂ nh cá»§a con trá» mĂ n hĂ¬nh bĂ n cá»
	return pWhoWin;
}
int _Game::getXatEnter()
{
	return _x;
}
int _Game::getYatEnter()
{
	return _y;
}
void _Game::TimKiemNuocDi()
{
	_x = _b->Tim_Kiem_NuocDi().getX();
	_y = _b->Tim_Kiem_NuocDi().getY();
}
void _Game::TimKiemNuocDi2()
{
	_x = _b->Tim_Kiem_NuocDi2().getX();
	_y = _b->Tim_Kiem_NuocDi2().getY();
}
_Game::~_Game()
{
	delete _b;
}
void _Game::SaveGame(int n,int pSize,int s1,int s2)
{
	char data[30];
	ofstream f1;
	ofstream f2;
	_Common::gotoXY(pSize * 4 + 14, (pSize * 2 -12) / 2+12+5);
	cout << "ENTER FILE NAME: ";
	Textcolor(Cyan);
	cin.getline(data, 30);
	f1.open(data, ios::out);
	f2.open("Name.txt", ios::app);
	f2 << data << " " << endl;
	//thong tin
	f1 << s1 << " " << s2 << " " << n << " " << pSize << endl;
	for (int i = 0; i < pSize; i++)
	{
		for (int j = 0; j < pSize; j++)
		{
			f1 << _b->get_Check(i, j) << " ";
		}
		f1 << endl;
	}
	f1.close();
	f2.close();
	_Common::gotoXY(pSize * 4 + 14, (pSize * 2 -12) / 2+12+6);
	cout << "ESC : BACK";
	while (1)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 27:
				ScreenStartGame();
				break;
			}
		}
	}
}
void _Game::LoadGame(char data[30],int pSize)
{

	//NHAP FILE
	ifstream f;
	f.open(data, ios::in);
	if (!f){
		_Common::gotoXY(35, 46);
		cout << "\n FILE KHONG TON TAI!" << endl;
	}
	else
	{
		int Size;
		f >> scorep1 >> scorep2 >> chedo >> Size;
		system("cls");
		//thong tin
		//ban co
		_b->drawBoard();
		int k;
		for (int i = 0; i < pSize; i++)
		{
			for (int j = 0; j < pSize; j++)
			{
				f >> k;
				_b->loadData(i, j, k);
			}
		}
		_x = _b->getXAt(0, 0);
		_y = _b->getYAt(0, 0);
		f.close();
	}
	Textcolor(Blue);
	_Common::gotoXY(pSize *4 + 26, (pSize * 2 -12) / 2+2-1);
	cout << _b->CountX;
	Textcolor(Red);
	_Common::gotoXY(pSize * 4 + 26, (pSize * 2 -12) / 2+7-1);
	cout << _b->CountY;
	if (_turn == 1)
	{
	Textcolor(Blue);
	_Common::gotoXY(pSize * 4 + 13,(pSize * 2 -12) / 2+10-1);
	cout << "It's player1's turn ";
	}
	else
	{
	Textcolor(Red);
	_Common::gotoXY(pSize * 4 + 13,(pSize * 2 -12) / 2+10-1);
	cout << "It's player2's turn ";
	}
}