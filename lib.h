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
 
void k_rs(bool enable)
{
	if(enable) system("taskkill /f /t /im REDAgent.exe");
} 

void k_jy(bool enable)
{
	if(enable) system("taskkill /f /t /im StudentMain.exe");
}

void k_yk(bool enable)
{
	if(enable) system("taskkill /f /t /im Student.exe");
}
void k_rj(bool enable)
{
	if(enable)
	{
		system("taskkill /f /t /im RJAgent.exe");
        system("taskkill /f /t /im RJService.exe");
        system("taskkill /f /t /im RG-CloudManagerRemote.exe");
        system("taskkill /f /t /im CMApp.exe");
        system("taskkill /f /t /im CMService.exe");
        system("taskkill /f /t /im CMLauncher.exe");
        system("taskkill /f /t /im Launcher.exe");
        system("taskkill /f /t /im RG-CloudManagerRemote_Setup.exe");
	}
}

