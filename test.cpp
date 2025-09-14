#include"lib.h"
int main()
{
	LPCSTR lpName="StudentMain.exe";
	HANDLE hProcessSnap;
    PROCESSENTRY32 pe32={sizeof(pe32)};
    hProcessSnap=CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);
    if(hProcessSnap==INVALID_HANDLE_VALUE)
	{
		cerr<<"INVALID HANDLE VALUE!";
		return 114514;
	}
/*	for(bool ok=Process32First(hProcessSnap,&pe32);ok;ok=Process32First(hProcessSnap,&pe32))
	{
		cout<<pe32.szExeFile<<endl<<pe32.th32ProcessID<<endl;
		if(!wcscmp(LPCWSTR(pe32.szExeFile),lpName))
		{
			CloseHandle(hProcessSnap);
			cout<<pe32.szExeFile<<endl<<pe32.th32ProcessID<<endl;
		//	return OpenProcess(PROCESS_ALL_ACCESS,FALSE,pe32.th32ProcessID);
		}
	}
*/
	do
    {
		cout<<pe32.szExeFile<<endl<<pe32.th32ProcessID<<endl<<lstrcmpiA(pe32.szExeFile,lpName)<<endl<<endl;
        if(!lstrcmpiA(pe32.szExeFile,lpName)) 
		{
			cout<<pe32.szExeFile<<endl<<pe32.th32ProcessID<<endl;
			cout<<"OK\n";
            //hProcess=OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwPid);
            break;
        }

    }while(Process32Next(hProcessSnap,&pe32));
	cout<<"COULDN T FIND PROCESS!";
	return 0;
}