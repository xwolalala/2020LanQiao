//先解决普通的N皇后问题 
/*
#include <iostream>
#include <math.h>
using namespace std;
#define Max 20
int pos[Max+1];
int n,sum=0;
bool check(int mu)
{
	for(int i=1;i<mu;i++)
	{
		if(pos[i]==pos[mu]||abs(i-mu)==abs(pos[i]-pos[mu]))
			return false;
	}
	return true;
}
void dfs(int mu)
{
	if(mu==n+1)
		sum++;
	for(int i=1;i<=n;i++)
	{
		pos[mu]=i;
		if(check(mu))
			dfs(mu+1);
	}
}
int main()
{
	cout<<"请输入皇后的数量："<<endl;
	cin>>n;
	dfs(1);
	cout<<"满足条件的次数为："<<sum; 
	return 0;	
} */
//然后解决2n皇后问题
#include <iostream>
#include <math.h>
using namespace std;
int map[9][9];
int posw[10]={0};
int posb[10]={0};
int n,sum=0;
bool check_white(int mu)
{
	for(int i=1;i<mu;i++)
	{
		if(posw[i]==posw[mu]||abs(posw[i]-posw[mu])==abs(i-mu))
		{
			return false;
		}
	}
	return true;
}
bool check_black(int mu)
{
	for(int i=1;i<mu;i++)
	{
		if(posb[i]==posb[mu]||abs(posb[i]-posb[mu])==abs(i-mu))
		{
			return false;
		}
	}
	return true;
}
void dfs_black(int mu)
{
	if(mu==n+1)
	{
		sum++;
	}
	for(int i=1;i<=n;i++)
	{
		if(map[mu][i]==1&&posw[mu]!=i)
		{
			posb[mu]=i;
			if(check_black(mu))
			{
				dfs_black(mu+1);
			}
		}
	}
}
void dfs_white(int mu)
{
	if(mu==n+1)
	{
		dfs_black(1);
	}
	for(int i=1;i<=n;i++)
	{
		if(map[mu][i]==1)
		{
			posw[mu]=i;
			if(check_white(mu))
			{
				dfs_white(mu+1);
			}
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>map[i][j];
		}
	}
	dfs_white(1);
	cout<<sum;
	return 0;
}
