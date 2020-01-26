#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int a[200][200];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int sum=m*n;
	int i=-1,j=0;
	while(sum)
	{
		//об
		while(a[i+1][j]!=-1&&i+1<m)
		{
			i++;
			cout<<a[i][j]<<" ";
			a[i][j]=-1;
		}
		//ср
		while(a[i][j+1]!=-1&&j+1<n)
		{
			j++;
			cout<<a[i][j]<<" ";	
			a[i][j]=-1;
		} 
		//ио
		while(a[i-1][j]!=-1&&i-1>=0)
		{
			i--;
			cout<<a[i][j]<<" ";
			a[i][j]=-1;
		}
		//вС
		while(a[i][j-1]!=-1&&j-1>=0)
		{
			j--;
			cout<<a[i][j]<<" ";	
			a[i][j]=-1;
		} 
	}
}
