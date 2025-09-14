#include"lib.h" 
int main()
{
	HANDLE anti=getprocesshandle("anti-red-spider.exe");
	TerminateProcess(anti,0);
	return 0;
}

