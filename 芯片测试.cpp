#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[20][20];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int j=0;j<n;j++)
	{
		int flag0=0,flag1=1;
		for(int i=0;i<n;i++)
		{
			if(a[i][j]==0)
			{
				flag0++;
			}
			else if(a[i][j]==1)
			{
				flag1++;
			}
		}
		flag1--;
		if(flag0<flag1)
			cout<<j+1<<" ";
	}
	return 0;
}
