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
	setcolor(10);
    cout<<"			      			��Ҫͬʱ����������������Ӣ�İ�Ƕ��ŷָ�"<<endl;
    cout<<"											���磺k-rs,k-rj"<<endl;
    setcolor(13);
	cout<<"                                      ����ʹ�ù���Աģʽ����"<<endl;
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
        cout<<"                                  ��֩�뷴��ϵͳ�����ɹ�"<<endl;
    }
    if(jy)
    {
    	setcolor(11);
        cout<<"                                  ���򷴻�ϵͳ�����ɹ�"<<endl;
    }
    if(yk)
    {
    	setcolor(12);
        cout<<"                                  ٤����������ϵͳ�����ɹ�"<<endl;
    }
    if(rj)
    {
    	setcolor(12);
        cout<<"                                  ����ƽ��ҷ���ϵͳ�����ɹ�"<<endl;
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

