#include <iostream>
using namespace std;
int main()
{
	int N,M;
	cin>>N>>M;
	int **a=new int*[N];
	for(int i=0;i<N;i++)
	{
		a[i]=new int[N];
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>a[i][j];
		}
	}
	int **b=new int*[N];
	for(int i=0;i<N;i++)
	{
		b[i]=new int[N];
	}
	int **c=new int*[N];
	for(int i=0;i<N;i++)
	{
		c[i]=new int[N];
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			b[i][j]=a[i][j];
		}
	}
	if(M==0)
	{
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				if(i==j)
					cout<<"1"<<" ";
				else
					cout<<"0"<<" ";
			}
			cout<<endl;
		}
		return 0;
	}
	for(int n=0;n<M-1;n++)
	{
		for(int q=0;q<N;q++)
		{
			for(int w=0;w<N;w++)
			{
				c[q][w]=b[q][w];
			}
		}
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				int s=0;
				for(int m=0;m<N;m++)
				{
					s=s+c[i][m]*a[m][j];
				}
				b[i][j]=s;
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
