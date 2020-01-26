#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str1;
	string str2;
	for(int i=0;i<n;i++)
	{
		cin>>str1;
		str2="";
		for(int j=0;j<str1.length();j++)
		{
			switch(str1[j])
			{
				case '0':str2+="0000";
						 break;
				case '1':str2+="0001";
						 break;
				case '2':str2+="0010";
						 break;
				case '3':str2+="0011";
						 break;
				case '4':str2+="0100";
						 break;
				case '5':str2+="0101";
						 break;
				case '6':str2+="0110";
						 break;
				case '7':str2+="0111";
						 break;
				case '8':str2+="1000";
						 break;
				case '9':str2+="1001";
						 break;
				case 'A':str2+="1010";
						 break;
				case 'B':str2+="1011";
						 break;
				case 'C':str2+="1100";
						 break;
				case 'D':str2+="1101";
						 break;
				case 'E':str2+="1110";
						 break;
				case 'F':str2+="1111";
						 break;
				default: break;
			}
		}
		if(str2.length()%3==1)
			str2="00"+str2;
		else if(str2.length()%3==2)
			str2="0"+str2;
		else
			str2=str2;
		int flag=0;
		for(int j=0;j<str2.length()-2;j+=3)
		{
			int q=(str2[j]-'0')*4+(str2[j+1]-'0')*2+(str2[j+2]-'0')*1;
			if(q!=0)
			{
				flag=1;
			}
			if(flag!=0)
			{
				cout<<q;
			}
		}
		cout<<endl;
	}
	
}
