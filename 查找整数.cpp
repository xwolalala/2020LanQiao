#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *a=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x;
	cin>>x;
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			cout<<i+1;
			break;
		}
	}
	if(i==n)
		cout<<-1;
	return 0;
}
