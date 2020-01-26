#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int b,k;
	for(int i=m;i<=n;i++)
	{
		cout<<i<<"=";
		b=i;
		k=2;
		while(k<=sqrt(i))
		{
			if(b%k==0)
			{
				b=b/k;
				if(b!=1)
				{
					cout<<k<<"*";
					continue;
				}
				else
					cout<<k;
			}
			k++;
		}
		if(b>1)
			cout<<b;
		cout<<endl;
	}
	return 0;
}
