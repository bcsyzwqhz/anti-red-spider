#include"lib.h"
int main()
{
	ios::sync_with_stdio(0);
	HWND h;
	h=FindWindow("ConsoleWindowClass",NULL);
    movexy(37, 7);
    cout<<"�����ӽ���ϵͳ"<<endl;
    cout<<endl;
    cout<<"                                     Ŀǰ���Է���:"<<endl;
    setcolor(4);
    cout<<"                      ��֩���ý��������� - ���� k-rs���ɷ���"<<endl;
	setcolor(11);
    cout<<"                              ������ӽ��� - ���� k-jy���ɷ���"<<endl;
    setcolor(12);
    cout<<"                          ٤���������ӽ��� - ���� k-yk���ɷ���"<<endl;
	setcolor(7);
    cout<<"                                ����ƽ��� - ���� k-rj���ɷ���"<<endl;
    setcolor(6);
    cout<<"                                  �����ɹ��󣬴��ڻ��Զ���ʧ��"<<endl;
    cout<<"                                        ��Ҫ�ظ��򿪣�"<<endl;
	setcolor(10);
    cout<<"			  ע�⣺��ϵͳ��֧��Windows 10������ϵͳ��"<<endl;
	cout<<"				Windows 11���ڲ�����ʧ��" <<endl;
	cout<<"                                      ����ʹ�ù���Աģʽ����"<<endl;
	setcolor(7);
    cout<<"    input >>> ";
    string s;
    cin>>s;
    if(s=="k-rs")
	{
        system("cls");
        setcolor(4);
        cout<<"                                  ��֩�뷴��ϵͳ�����ɹ�"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        while(1)
            system("taskkill /f /t /im REDAgent.exe");
    }
    if(s=="k-jy")
	{
        system("cls");
        setcolor(11);
        cout<<"                                  ���򷴻�ϵͳ�����ɹ�"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        while(1)
        system("taskkill /f /t /im StudentMain.exe");
        
    }
    if(s=="k-yk")
	{
        system("cls");
        setcolor(12);
        cout<<"                                  ٤����������ϵͳ�����ɹ�"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        while(1)
            system("taskkill /f /t /im Student.exe");
    } 
    if(s=="k-rj")
	{
		system("cls");
        setcolor(12);
        cout<<"                                  ����ƽ��ҷ���ϵͳ�����ɹ�"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        while(1)
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
    return 0;
}

