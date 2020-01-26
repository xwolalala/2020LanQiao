#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	int swapsum=0;
	int flag=0;
	int temp;
	for(int i=0;i<n/2;i++)
	{
		int f=0;
		for(int j=n-i-1;j>i;j--)
		{
			if(str[i]==str[j])
			{
				f=1;
				for(int q=j;q<n-i-1;q++)
				{
					int temp=str[q];
					str[q]=str[q+1];
					str[q+1]=temp;
					swapsum++;
				}
				break;
			}
		}
		if(f==0)
		{
			if(n%2!=1)
			{
				cout<<"Impossible";
				return 0;
			}
			else if(n%2==1)
			{
				temp=str[i];
				str[i]=str[i+1];
				str[i+1]=temp;
				swapsum++;
				i--;
			}	
		}
	}
	cout<<swapsum;
	return 0;
}
