#include <iostream>
using namespace std;
int main()
{
	int a[34][34];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			if(j==0||j==i)
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
