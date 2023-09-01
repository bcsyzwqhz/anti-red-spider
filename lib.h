#include<windows.h>
#include<iostream>
#include<string>
using namespace std;
void movexy(short x, short y)
{
    COORD position={x, y};
    HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, position);
}
void setcolor(int num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),num);
 } 
