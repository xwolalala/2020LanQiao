#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string str1;
	string str2;
	int c[100];
	cin>>str1;
	cin>>str2;
	while(str1.length()<100)
	{
		str1='0'+str1;
	}
	while(str2.length()<100)
	{
		str2='0'+str2;
	}
	int d=0,s=0;
	int i=100;
	for(int i=99;i>=0;i--)
	{
		s=str1[i]-'0'+str2[i]-'0'+d;
		c[i]=s%10;
		d=s/10;
	//	cout<<s%10<<"+"<<d<<"="<<c[i]<<endl;
	}
	int flag=0;
	for(int i=0;i<100;i++)
	{
		if(c[i]!=0)
			flag=1;
		if(flag==1)
			cout<<c[i];
	}
	return 0;
}
