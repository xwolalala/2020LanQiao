#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string str1,str2;
	cin>>str1;
	cin>>str2;
	if(str1.length()!=str2.length())
	{
		cout<<"1";
	}
	else
	{
		int flag=2;
		for(int i=0;i<str1.length();i++)
		{
			if(str1[i]!=str2[i]&&str1[i]+32!=str2[i]&&str1[i]-32!=str2[i])
			{
				cout<<"4";
				return 0;
			}
			else if(str1[i]!=str2[i]&&(str1[i]+32==str2[i]||str1[i]-32==str2[i]))
			{
				flag=3;
			}
		}
		cout<<flag;
	}
	return 0;
}
