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
	int max=-10000,min=10000,s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
		s+=a[i];
	}
	cout<<max<<endl<<min<<endl<<s;
	return 0;
}
