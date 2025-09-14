#include"lib.h"
int main()
{
	HANDLE hProcessSnap;
    PROCESSENTRY32 pe32={sizeof(pe32)};
    hProcessSnap=CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);
    if(hProcessSnap==INVALID_HANDLE_VALUE)
	{
		cout<<"Process Not Found!";
	}
        
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