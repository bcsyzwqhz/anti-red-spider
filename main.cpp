#include"lib.h"
int main()
{
    HWND h;
	h=FindWindow(("ConsoleWindowClass"),NULL);
    movexy(37, 7);
    cout<<"反电子教室系统"<<endl;
    cout<<endl;
    cout<<"                                     目前可以反击:"<<endl;
    setcolor(4);
    cout<<"                      红蜘蛛多媒体网络教室 - 输入 k-rs即可反击"<<endl;
	setcolor(11);
    cout<<"                              极域电子教室 - 输入 k-jy即可反击"<<endl;
	setcolor(12);
    cout<<"                          伽卡他卡电子教室 - 输入 k-yk即可反击"<<endl;
	setcolor(7);
    cout<<"                                锐捷云教室 - 输入 k-rj即可反击"<<endl;
	setcolor(6);
    cout<<"                                  启动成功后，窗口会自动消失，"<<endl;
    cout<<"                                        不要重复打开！"<<endl;
	setcolor(10);
    cout<<"			  注意：本系统仅支持Windows 10及以下系统，"<<endl;
	cout<<"				Windows 11窗口不会消失！" <<endl;
	cout<<"                                      建议使用管理员模式启动"<<endl;
	setcolor(7);
    cout<<"    input >>> ";
    string s;
    cin>>s;
    if(s=="k-rs")
	{
        system("cls");
		setcolor(4);
        cout<<"                                  红蜘蛛反击系统启动成功"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        k_rs();
    }
    if(s=="k-jy")
	{
        system("cls");
		setcolor(11);
        cout<<"                                  极域反击系统启动成功"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        k_jy();
        
    }
    if(s=="k-yk")
	{
        system("cls");
		setcolor(12);
        cout<<"                                  伽卡他卡反击系统启动成功"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        k_yk();
    } 
    if(s=="k-rj")
	{
		system("cls");
		setcolor(12);
        cout<<"                                  锐捷云教室反击系统启动成功"<<endl;
        Sleep(1000);
        ShowWindow(h,0);
        k_rj();
	} 
    return 0;
}