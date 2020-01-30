#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if(n%2!=0)//如果n为奇数 
	{
		cout<<n*(n-1)*(n-2);
	}
	else//n为偶数,n-2与n不互质 
	{
		if(n%3!=0)//n不是3的倍数,n与n-3互质 
		{
			cout<<n*(n-3)*(n-1);
		}
		else//n是3的倍数，那么n-1既不是3的倍数也不是2的倍数 
		{
			cout<<(n-1)*(n-2)*(n-3);
		}
	}
	return 0;
}
