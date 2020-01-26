#include <iostream>
using namespace std;
void A (int i)
{
	if(i>0)
	{
		A(i-1);
		char a='A'+i-1;
		cout<<a;
		A(i-1);
	}
}
int main()
{
	int n;
	cin>>n;
	A(n);
	return 0;
}
