#include"lib.h"
int main()
{
    HWND h;
	h=FindWindow(("ConsoleWindowClass"),NULL);
	if(!EnableDebugPrivilege())
#ifdef DEBUG
		cout<<GetLastError()<<endl;
#endif
    movexy(37,7);
    cout<<"反电子教室系统"<<endl;
    cout<<endl;
    cout<<"                                     目前可以反击："<<endl;
    setcolor(4);
    cout<<"                      红蜘蛛多媒体网络教室 - 输入 rs 即可反击。"<<endl;
	setcolor(11);
    cout<<"                              极域电子教室 - 输入 jy 即可反击。"<<endl;
	setcolor(12);
    cout<<"                          伽卡他卡电子教室 - 输入 gk 即可反击。"<<endl;
	setcolor(7);
    cout<<"                                锐捷云教室 - 输入 rj 即可反击。"<<endl;
	setcolor(6);
    cout<<"                                  启动成功后，窗口会自动消失，"<<endl;
    cout<<"                                        不要重复打开！"<<endl;
	setcolor(10);
	cout<<"				注：Windows 11窗口不会消失！" <<endl;
	cout<<"                                      建议使用管理员模式启动。"<<endl;
	setcolor(7);
    cout<<"    input >>> ";
    string s;
    cin>>s;
    if(s=="rs")
	{
        system("cls");
		setcolor(4);
        cout<<"                                  红蜘蛛反击系统启动成功"<<endl;
#ifndef DEBUG
        Sleep(1000);
        ShowWindow(h,0);
#endif
        k_rs();
    }
    if(s=="jy")
	{
        system("cls");
		setcolor(11);
        cout<<"                                  极域反击系统启动成功"<<endl;
#ifndef DEBUG
        Sleep(1000);
        ShowWindow(h,0);
#endif
        k_jy();
        
    }
    if(s=="gk")
	{
        system("cls");
		setcolor(12);
        cout<<"                                  伽卡他卡反击系统启动成功"<<endl;
#ifndef DEBUG
        Sleep(1000);
        ShowWindow(h,0);
#endif
        k_yk();
    } 
    if(s=="rj")
	{
		system("cls");
		setcolor(12);
        cout<<"                                  锐捷云教室反击系统启动成功"<<endl;
#ifndef DEBUG
        Sleep(1000);
        ShowWindow(h,0);
#endif
        k_rj();
	} 
    return 0;
}