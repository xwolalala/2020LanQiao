#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string str_ori;
	cin>>str_ori;
	int flagyi=0;
	int flagwan=0;
	if(str_ori.length()<10)
	{
		for(int i=10-str_ori.length();i>0;i--)
		{
			str_ori='0'+str_ori;
		}
	}
	if(str_ori[0]!='0')
	{
		if(str_ori[0]=='1')
			cout<<"shi"<<" ";
		else if(str_ori[0]=='2')
			cout<<"er"<<" "<<"shi"<<" ";
		else if(str_ori[0]=='3')
			cout<<"san"<<" "<<"shi"<<" ";
		else if(str_ori[0]=='4')
			cout<<"si"<<" "<<"shi"<<" ";
		else if(str_ori[0]=='5')
			cout<<"wu"<<" "<<"shi"<<" ";
		else if(str_ori[0]=='6')
			cout<<"liu"<<" "<<"shi"<<" ";
		else if(str_ori[0]=='7')
			cout<<"qi"<<" "<<"shi"<<" ";
		else if(str_ori[0]=='8')
			cout<<"ba"<<" "<<"shi"<<" ";
		else if(str_ori[0]=='9')
			cout<<"jiu"<<" "<<"shi"<<" ";
	}
	if(str_ori[1]!='0')
	{
		if(str_ori[1]=='1')
			cout<<"yi"<<" ";
		else if(str_ori[1]=='2')
			cout<<"er"<<" ";
		else if(str_ori[1]=='3')
			cout<<"san"<<" ";
		else if(str_ori[1]=='4')
			cout<<"si"<<" ";
		else if(str_ori[1]=='5')
			cout<<"wu"<<" ";
		else if(str_ori[1]=='6')
			cout<<"liu"<<" ";
		else if(str_ori[1]=='7')
			cout<<"qi"<<" ";
		else if(str_ori[1]=='8')
			cout<<"ba"<<" ";
		else if(str_ori[1]=='9')
			cout<<"jiu"<<" ";
	}
	if(str_ori[0]!='0'||str_ori[1]!='0')
	{
		flagyi=1;
		cout<<"yi"<<" ";
	}//*************************************亿位处理完毕***************************** 
	if(str_ori[2]=='0'&&flagyi==1&&(str_ori[3]!='0'||str_ori[4]!='0'||str_ori[5]!='0'))
	{
		cout<<"ling"<<" ";
	}
	else if(str_ori[2]!='0')
	{
		if(str_ori[2]=='1')
		{
			cout<<"yi"<<" "<<"qian"<<" ";
		}
		else if(str_ori[2]=='2')
		{
			cout<<"er"<<" "<<"qian"<<" ";
		}
		else if(str_ori[2]=='3')
		{
			cout<<"san"<<" "<<"qian"<<" ";
		}
		else if(str_ori[2]=='4')
		{
			cout<<"si"<<" "<<"qian"<<" ";
		}
		else if(str_ori[2]=='5')
		{
			cout<<"wu"<<" "<<"qian"<<" ";
		}
		else if(str_ori[2]=='6')
		{
			cout<<"liu"<<" "<<"qian"<<" ";
		}
		else if(str_ori[2]=='7')
		{
			cout<<"qi"<<" "<<"qian"<<" ";
		}
		else if(str_ori[2]=='8')
		{
			cout<<"ba"<<" "<<"qian"<<" ";
		}
		else if(str_ori[2]=='9')
		{
			cout<<"jiu"<<" "<<"qian"<<" ";
		}
	}
	if(str_ori[2]!='0'&&str_ori[3]=='0'&&(str_ori[4]!='0'||str_ori[5]!='0'))
	{
		cout<<"ling"<<" ";
	}
	else if(str_ori[3]!='0')
	{
		if(str_ori[3]=='1')
			cout<<"yi"<<" "<<"bai"<<" ";
		else if(str_ori[3]=='2')
			cout<<"er"<<" "<<"bai"<<" ";
		else if(str_ori[3]=='3')
			cout<<"san"<<" "<<"bai"<<" ";
		else if(str_ori[3]=='4')
			cout<<"si"<<" "<<"bai"<<" ";
		else if(str_ori[3]=='5')
			cout<<"wu"<<" "<<"bai"<<" ";
		else if(str_ori[3]=='6')
			cout<<"liu"<<" "<<"bai"<<" ";
		else if(str_ori[3]=='7')
			cout<<"qi"<<" "<<"bai"<<" ";
		else if(str_ori[3]=='8')
			cout<<"ba"<<" "<<"bai"<<" ";
		else if(str_ori[3]=='9')
			cout<<"jiu"<<" "<<"bai"<<" ";
	}
	if(str_ori[4]=='0'&&str_ori[3]!='0'&&str_ori[2]!='0'&&str_ori[1]!='0')
	{
		cout<<"ling"<<" ";
	}
	else if(str_ori[4]!='0')
	{
		if(str_ori[4]=='1')
		{
			if(str_ori[2]=='0'&&str_ori[3]=='0')
				cout<<"shi"<<" ";
			else
				cout<<"yi"<<" "<<"shi"<<" ";
		}
		else if(str_ori[4]=='2')
			cout<<"er"<<" "<<"shi"<<" ";
		else if(str_ori[4]=='3')
			cout<<"san"<<" "<<"shi"<<" ";
		else if(str_ori[4]=='4')
			cout<<"si"<<" "<<"shi"<<" ";
		else if(str_ori[4]=='5')
			cout<<"wu"<<" "<<"shi"<<" ";
		else if(str_ori[4]=='6')
			cout<<"liu"<<" "<<"shi"<<" ";
		else if(str_ori[4]=='7')
			cout<<"qi"<<" "<<"shi"<<" ";
		else if(str_ori[4]=='8')
			cout<<"ba"<<" "<<"shi"<<" ";
		else if(str_ori[4]=='9')
			cout<<"jiu"<<" "<<"shi"<<" ";
	}
	if(str_ori[5]!='0')
	{
		if(str_ori[5]=='1')
			cout<<"yi"<<" ";
		else if(str_ori[5]=='2')
			cout<<"er"<<" ";
		else if(str_ori[5]=='3')
			cout<<"san"<<" ";
		else if(str_ori[5]=='4')
			cout<<"si"<<" ";
		else if(str_ori[5]=='5')
			cout<<"wu"<<" ";
		else if(str_ori[5]=='6')
			cout<<"liu"<<" ";
		else if(str_ori[5]=='7')
			cout<<"qi"<<" ";
		else if(str_ori[5]=='8')
			cout<<"ba"<<" ";
		else if(str_ori[5]=='9')
			cout<<"jiu"<<" ";
	}
	if(str_ori[2]!='0'||str_ori[3]!='0'||str_ori[4]!='0'||str_ori[5]!='0')
	{
		flagwan=1;
		cout<<"wan"<<" ";
	}//***********************************万位处理完毕*******************************
	if(str_ori[6]=='0'&&(flagyi==1||flagwan==1)&&(str_ori[7]!='0'||str_ori[8]!='0'||str_ori[9]!='0'))
	{
		cout<<"ling"<<" ";
	}
	else if(str_ori[6]!='0')
	{
		if(str_ori[6]=='1')
		{
			cout<<"yi"<<" "<<"qian"<<" ";
		}
		else if(str_ori[6]=='2')
		{
			cout<<"er"<<" "<<"qian"<<" ";
		}
		else if(str_ori[6]=='3')
		{
			cout<<"san"<<" "<<"qian"<<" ";
		}
		else if(str_ori[6]=='4')
		{
			cout<<"si"<<" "<<"qian"<<" ";
		}
		else if(str_ori[6]=='5')
		{
			cout<<"wu"<<" "<<"qian"<<" ";
		}
		else if(str_ori[6]=='6')
		{
			cout<<"liu"<<" "<<"qian"<<" ";
		}
		else if(str_ori[6]=='7')
		{
			cout<<"qi"<<" "<<"qian"<<" ";
		}
		else if(str_ori[6]=='8')
		{
			cout<<"ba"<<" "<<"qian"<<" ";
		}
		else if(str_ori[6]=='9')
		{
			cout<<"jiu"<<" "<<"qian"<<" ";
		}
	}
	if(str_ori[6]!='0'&&str_ori[7]=='0'&&(str_ori[8]!='0'||str_ori[9]!='0'))
	{
		cout<<"ling"<<" ";
	}
	else if(str_ori[7]!='0')
	{
		if(str_ori[7]=='1')
			cout<<"yi"<<" "<<"bai"<<" ";
		else if(str_ori[7]=='2')
			cout<<"er"<<" "<<"bai"<<" ";
		else if(str_ori[7]=='3')
			cout<<"san"<<" "<<"bai"<<" ";
		else if(str_ori[7]=='4')
			cout<<"si"<<" "<<"bai"<<" ";
		else if(str_ori[7]=='5')
			cout<<"wu"<<" "<<"bai"<<" ";
		else if(str_ori[7]=='6')
			cout<<"liu"<<" "<<"bai"<<" ";
		else if(str_ori[7]=='7')
			cout<<"qi"<<" "<<"bai"<<" ";
		else if(str_ori[7]=='8')
			cout<<"ba"<<" "<<"bai"<<" ";
		else if(str_ori[7]=='9')
			cout<<"jiu"<<" "<<"bai"<<" ";
	}
	if(str_ori[8]=='0'&&str_ori[7]!='0'&&str_ori[6]!='0'&&str_ori[9]!='0')
	{
		cout<<"ling"<<" ";
	}
	else if(str_ori[8]!='0')
	{
		if(str_ori[8]=='1')
		{
			if(str_ori[6]=='0'&&str_ori[7]=='0')
				cout<<"shi"<<" ";
			else
				cout<<"yi"<<" "<<"shi"<<" ";
		}
		else if(str_ori[8]=='2')
			cout<<"er"<<" "<<"shi"<<" ";
		else if(str_ori[8]=='3')
			cout<<"san"<<" "<<"shi"<<" ";
		else if(str_ori[8]=='4')
			cout<<"si"<<" "<<"shi"<<" ";
		else if(str_ori[8]=='5')
			cout<<"wu"<<" "<<"shi"<<" ";
		else if(str_ori[8]=='6')
			cout<<"liu"<<" "<<"shi"<<" ";
		else if(str_ori[8]=='7')
			cout<<"qi"<<" "<<"shi"<<" ";
		else if(str_ori[8]=='8')
			cout<<"ba"<<" "<<"shi"<<" ";
		else if(str_ori[8]=='9')
			cout<<"jiu"<<" "<<"shi"<<" ";
	}
	if(str_ori[9]!='0')
	{
		if(str_ori[9]=='1')
			cout<<"yi"<<" ";
		else if(str_ori[9]=='2')
			cout<<"er"<<" ";
		else if(str_ori[9]=='3')
			cout<<"san"<<" ";
		else if(str_ori[9]=='4')
			cout<<"si"<<" ";
		else if(str_ori[9]=='5')
			cout<<"wu"<<" ";
		else if(str_ori[9]=='6')
			cout<<"liu"<<" ";
		else if(str_ori[9]=='7')
			cout<<"qi"<<" ";
		else if(str_ori[9]=='8')
			cout<<"ba"<<" ";
		else if(str_ori[9]=='9')
			cout<<"jiu"<<" ";
	}
	return 0;
}
