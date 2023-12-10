#include"lib.h"
int main()
{
	ios::sync_with_stdio(0);
	HWND h;
	h=FindWindow("ConsoleWindowClass",NULL);
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
	setcolor(10);
    cout<<"			   		如要同时反击多个软件，请用英文半角逗号分隔"<<endl;
    cout<<"	                            	比如：k-rs,k-rj"<<endl;
    setcolor(13);
	cout<<"                                      建议使用管理员模式启动"<<endl;
	setcolor(7);
    cout<<"    input >>> ";
    string s;
    bool rj=0,yk=0,rs=0,jy=0;
    cin>>s;
    s+=',';
    int len=s.size(),last=0,leng=1;
    for(int i=1;i<len;i++)
    {
    	if(s[i]==',')
    	{
    		if(s.substr(last,leng)=="k-rs")	rs=1;
    		if(s.substr(last,leng)=="k-jy")jy=1;
    		if(s.substr(last,leng)=="k-rj")	rj=1;
    		if(s.substr(last,leng)=="k-yk")	yk=1;
    		last=i+1,leng=0;
    	}
    	else
    	leng++;
    	
    }
    system("cls");
    if(rs) 
    {
    	setcolor(4);
        cout<<"                                  红蜘蛛反击系统启动成功"<<endl;
    }
    if(jy)
    {
    	setcolor(11);
        cout<<"                                  极域反击系统启动成功"<<endl;
    }
    if(yk)
    {
    	setcolor(12);
        cout<<"                                  伽卡他卡反击系统启动成功"<<endl;
    }
    if(rj)
    {
    	setcolor(12);
        cout<<"                                  锐捷云教室反击系统启动成功"<<endl;
    }
    Sleep(1000);
    ShowWindow(h,SW_HIDE);
 	while(1)
	{
		k_rj(rj);
		k_yk(yk);
		k_jy(jy);
		k_rs(rs);
	}
    return 0;
}

