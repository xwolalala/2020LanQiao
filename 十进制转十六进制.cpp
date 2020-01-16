#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack <char> stk;
	int a;
	char c;
	cin>>a;
	while(a/16>0)
	{
		int i=a%16;
		if(i<10)
		{
			c='0'+i;
			stk.push(c);
		}
		else if(i>=10)
		{
			c='A'+i-10;
			stk.push(c);
		}
		a=a/16;
	}
	if(a<10)
	{
		c='0'+a;
		stk.push(c);
	}
	else if(a>=10)
	{
		c='A'+a-10;
		stk.push(c);
	}
	for(int j=stk.size();j--;j>0)
	{
		cout<<stk.top();
		stk.pop();
	}
	return 0;
}
