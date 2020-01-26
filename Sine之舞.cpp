#include <iostream>
using namespace std;
void An(int i,int n)
{
	if(i<=n)
	{
		cout<<"sin("<<i;
		if(i+1<=n)
		{
			if(i%2!=0)
				cout<<"-";
			else
				cout<<"+";
		}
		An(i+1,n);
		cout<<")";
	}
}
void Sn(int x,int i)
{
	if(x>0)
	{
		if(x>1)
			cout<<"(";
		Sn(x-1,i+1);
		if(x>1)
			cout<<")";
		An(1,x);
		cout<<"+"<<i;
	}
}
int main()
{
	int n;
	cin>>n;
	Sn(n,1);
	return 0;
}
