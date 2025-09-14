#pragma once
#include<windows.h>
#include<iostream>
#include<string>
#include<tlhelp32.h>
#include<Psapi.h>
#include<unistd.h>
using namespace std;
bool EnableDebugPrivilege()  
{  
    HANDLE hToken;  
    LUID sedebugnameValue;  
    TOKEN_PRIVILEGES tkp;  
    if(!OpenProcessToken(GetCurrentProcess(),TOKEN_ADJUST_PRIVILEGES|TOKEN_QUERY,&hToken))
        return FALSE;  
    if(!LookupPrivilegeValue(NULL, SE_DEBUG_NAME,&sedebugnameValue)) 
    {  
        CloseHandle(hToken);  
        return false;  
    }  
    tkp.PrivilegeCount=1;  
    tkp.Privileges[0].Luid=sedebugnameValue;  
    tkp.Privileges[0].Attributes=SE_PRIVILEGE_ENABLED;  
    if(!AdjustTokenPrivileges(hToken,FALSE,&tkp,sizeof(tkp),NULL,NULL))
    {  
        CloseHandle(hToken);  
        return false;  
    }  
    return true;  
}
HANDLE getprocesshandle(LPCSTR lpName)
{
    HANDLE hProcessSnap=INVALID_HANDLE_VALUE;
    PROCESSENTRY32 pe32={sizeof(pe32)};
    hProcessSnap=CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);
    if(hProcessSnap==INVALID_HANDLE_VALUE)
        return NULL;
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
	int cnt=0;
	HANDLE cm[4];
	while(1)
	{
		cm[0]=getprocesshandle("CMApp.exe");
		cm[1]=getprocesshandle("CMService.exe");
        cm[2]=getprocesshandle("CMLauncher.exe");
		cm[3]=getprocesshandle("ESTRemote.exe");
		for(int i=0;i<4;i++)
			if(cm[i]!=NULL)
				TerminateProcess(cm[i],0);
			else
				cnt++;
		if(cnt>=200)
			break;
		Sleep(50);
    }
}