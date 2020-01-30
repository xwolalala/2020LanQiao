#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
	return a>b;
}
int main()
{
	int n;
	cin>>n;
	int* a=(int*)malloc(n*sizeof(int));
	int* b=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	while(m--)
	{
		for(int i=0;i<n;i++)
		{
			b[i]=a[i];
		}
		int l,r,K;
		cin>>l>>r>>K;
		sort(b+l-1,b+r,compare);
		/*for(int i=l-1;i<=r-1;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;*/
		cout<<b[l+K-2]<<endl;
	}
	return 0;
}
