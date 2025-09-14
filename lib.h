#pragma once
#include<windows.h>
#include<iostream>
#include<string>
#include<tlhelp32.h>
#include<Psapi.h>
#include<unistd.h>
using namespace std;
HANDLE getprocesshandle(LPCWSTR lpName)
{
    HANDLE hProcessSnap;
    PROCESSENTRY32 pe32={sizeof(pe32)};
    hProcessSnap=CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);
    if(hProcessSnap==INVALID_HANDLE_VALUE)
        return NULL;
	for(bool ok=Process32First(hProcessSnap,&pe32);ok;ok=Process32First(hProcessSnap,&pe32))
	{
		if(!wcscmp(LPCWSTR(pe32.szExeFile),lpName))
		{
			CloseHandle(hProcessSnap);
			return OpenProcess(PROCESS_ALL_ACCESS,FALSE,pe32.th32ProcessID);
		}
	}
	return NULL;
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
	HANDLE proc;
	while(1)
	{
		proc=getprocesshandle(L"REDAgent.exe");
		if(proc==NULL)
			continue;
		TerminateProcess(proc,0);
	}
} 

void k_jy(void)
{
	
	HANDLE proc;
	while(1)
	{
		proc=getprocesshandle(L"Student.exe");
		if(proc==NULL)
			continue;
		TerminateProcess(proc,0);
	}
}

void k_yk(void)
{
	HANDLE procm,procs;
	while(1)
	{
		procm=getprocesshandle(L"StudentMain.exe");
		procs=getprocesshandle(L"Smonitor.exe");
		if(procm!=NULL)
			TerminateProcess(procm,0);
		if(procs!=NULL)
			TerminateProcess(procs,0);
	}
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