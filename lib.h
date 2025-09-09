#include<windows.h>
#include<iostream>
#include<string>
#include<thread>
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
 
void k_rs(void)
{
	while(1)
	system("wmic process where name=\'REDAgent.exe\' delete");
} 

void k_jy(void)
{
	while(1)
	{
		system("wmic process where name=\'StudentMain.exe\' delete");
		system("wmic process where name=\'Smonitor.exe\' delete");
	}
	
}

void k_yk(void)
{
	while(1)
	system("wmic process where name=\'Student.exe\' delete");
}
void k_rj(void)
{
	while(1)
	{
		system("wmic process where name=\'RJAgent.exe\' delete");
        system("wmic process where name=\'RJService.exe");
        system("wmic process where name=\'RG-CloudManagerRemote.exe\' delete");
        system("wmic process where name=\'CMApp.exe\' delete");
        system("wmic process where name=\'CMService.exe\' delete");
        system("wmic process where name=\'CMLauncher.exe\' delete");
        system("wmic process where name=\'Launcher.exe\' delete");
        system("wmic process where name=\'RG-CloudManagerRemote_Setup.exe\' delete");
        system("wmic process where name=\'ESTRemote.exe\' delete");
        system("wmic process where name=\'ESTRemotePro.exe\' delete");
        system("wmic process where name=\'ESTService.exe\' delete");
    }
}

