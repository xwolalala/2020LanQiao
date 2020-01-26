#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int i,int j)
{
	return i<j;
}
int main()
{
	int n;
	cin>>n;
	int *a=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
