#include"lib.h" 
int main()
{
	system("wmic process where name=\'anti-red-spider.exe\' delete");
	return 0;
}

