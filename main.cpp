#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void movexy(short x, short y){
    COORD position={x, y};
    HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, position);
}
int main(){
	HWND h;
	h=FindWindow("ConsoleWindowClass",NULL);
    movexy(37, 7);
    cout<<"�����ӽ���ϵͳ"<<endl;
    cout<<endl;
    cout<<"                                     Ŀǰ���Է���:"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
    cout<<"                      ��֩���ý��������� - ���� k-rs���ɷ���"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout<<"                              ������ӽ��� - ���� k-jy���ɷ���"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<"                          ٤���������ӽ��� - ���� k-yk���ɷ���"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"                                  �����ɹ��󣬴��ڻ��Զ���ʧ��"<<endl;
    cout<<"                                        ��Ҫ�ظ��򿪣�"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<"			  ע�⣺��ϵͳ��֧��Windows 10������ϵͳ��"<<endl;
	cout<<"				Windows 11���ڲ�����ʧ��" <<endl;
	cout<<"                                      ����ʹ�ù���Աģʽ����"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<"    input >>> ";
    string s;
    cin>>s;
    if(s=="k-rs"){
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
        cout<<"                                  ��֩�뷴��ϵͳ�����ɹ�"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        while(1)
            system("taskkill /f /t /im REDAgent.exe");
    }
    if(s=="k-jy"){
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        cout<<"                                  ���򷴻�ϵͳ�����ɹ�"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        while(1)
        system("taskkill /f /t /im StudentMain.exe");
        
    }
    if(s=="k-yk"){
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        cout<<"                                  ٤����������ϵͳ�����ɹ�"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        while(1)
            system("taskkill /f /t /im Student.exe");
    } 
    return 0;
}

