#pragma once
#include<windows.h>
#include<iostream>
#include<string>
#include<tlhelp32.h>
#include<Psapi.h>
#include<unistd.h>
using namespace std;
HANDLE getprocesshandle(LPCSTR lpName)
{
    HANDLE hProcessSnap=INVALID_HANDLE_VALUE;
    PROCESSENTRY32 pe32={sizeof(pe32)};
    hProcessSnap=CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);
    if(hProcessSnap==INVALID_HANDLE_VALUE)
        return NULL;
/*	for(bool ok=Process32First(hProcessSnap,&pe32);ok;ok=Process32First(hProcessSnap,&pe32))
	{
		if(!lstrcmpiA(pe32.szExeFile,lpName))
		{
			CloseHandle(hProcessSnap);
			return OpenProcess(PROCESS_ALL_ACCESS,FALSE,pe32.th32ProcessID);
		}
	}
*/
	do
	{
		if(!lstrcmpiA(pe32.szExeFile,lpName))
		{
			CloseHandle(hProcessSnap);
			return OpenProcess(PROCESS_ALL_ACCESS,FALSE,pe32.th32ProcessID);
		}
	}while(Process32Next(hProcessSnap,&pe32));
	return NULL;
}
void movexy(short x,short y)
{
    COORD position={x,y};
    HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut,position);
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
		proc=getprocesshandle("REDAgent.exe");
		if(proc==NULL)
			continue;
		TerminateProcess(proc,0);
		Sleep(50);
	}
} 

void k_jy(void)
{
	HANDLE proc;
	while(1)
	{
		proc=getprocesshandle("StudentMain.exe");
		if(proc==NULL)
			continue;
		TerminateProcess(proc,0);
		Sleep(50);
	}
}

void k_yk(void)
{
	int cnt=0;
	HANDLE procm,procs;
	while(1)
	{
		procm=getprocesshandle("Student.exe");
		procs=getprocesshandle("Smonitor.exe");
		if(procm==NULL)
		{
			cnt++;
			if(cnt>=100)
				break;
		}
		else
			TerminateProcess(procm,0);
		if(procs!=NULL)
			TerminateProcess(procs,0);
		Sleep(50);
	}
}
void k_rj(void)
{
	HANDLE cm[4];
	while(1)
	{
		cm[0]=getprocesshandle("CMApp.exe");
		cm[1]=getprocesshandle("CMService.exe");
        cm[2]=getprocesshandle("CMLauncher.exe");
		cm[3]=getprocesshandle("ESTRemote.exe");
		for(int i=0;i<4;i++)
			if(cm[i]!=NULL)
			{
				cout<<"Found!\n";
				if(!TerminateProcess(cm[i],0))
					cout<<"Failed!\n"<<GetLastError()<<endl;
			}
		Sleep(50);
    }
}