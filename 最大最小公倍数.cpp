#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if(n%2!=0)//���nΪ���� 
	{
		cout<<n*(n-1)*(n-2);
	}
	else//nΪż��,n-2��n������ 
	{
		if(n%3!=0)//n����3�ı���,n��n-3���� 
		{
			cout<<n*(n-3)*(n-1);
		}
		else//n��3�ı�������ôn-1�Ȳ���3�ı���Ҳ����2�ı��� 
		{
			cout<<(n-1)*(n-2)*(n-3);
		}
	}
	return 0;
}
