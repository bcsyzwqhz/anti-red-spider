#include<windows.h>
#include<iostream>
#include<string>
#include<TlHelp32.h>
#include<Psapi.h>
using namespace std;
HANDLE getprocesshandle(LPCWSTR lpName)
{
	DWORD dwPid=0;
    HANDLE hProcess=NULL,hProcessSnap;
    PROCESSENTRY32 pe32;
    hProcessSnap=CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);
    if(hProcessSnap==INVALID_HANDLE_VALUE)
         return NULL;
    pe32.dwSize=sizeof(PROCESSENTRY32);
    if(!Process32First(hProcessSnap,&pe32))
    {
        CloseHandle(hProcessSnap);
        return NULL;
    }
    do
    {
        if(!wcscmp(pe32.szExeFile,lpName)) 
		{
            dwPid=pe32.th32ProcessID;
            hProcess=OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwPid);
            break;
        }

    }while(Process32Next(hProcessSnap,&pe32));
    CloseHandle(hProcessSnap);
    return hProcess;
}
void movexy(short x,short y)
{
    COORD position={x,y};
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

