#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *a=(int*)malloc((n+2)*sizeof(int));
	a[0]=1;
	a[1]=1;
	int i;
	for(i=2;i<n;i++)
	{
		a[i]=(a[i-1]+a[i-2])%10007;
	}
	cout<<a[n-1];
	return 0;
}
