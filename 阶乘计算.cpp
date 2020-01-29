#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1)
		cout<<"1";
	else
	{
	int a[99999];
	int head=0,tail=0,p=0;
	a[0]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=head;j<=tail;j++)
		{
			p=a[j]*i+p;
			a[j]=p%10;
			p=p/10;
			
		}
		while(p!=0)
		{
			tail++;
			a[tail]=p%10;
			p=p/10;
		}
	}
	for(int i=tail;i>=0;i--)
		cout<<a[i];
	}
	return 0;
}


