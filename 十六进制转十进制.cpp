#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int l=a.length();
//	cout<<"a.length:"<<l<<endl;
	long long s=0;
	int x;
	int j=l;
	for(int i=0;i<j;i++)
	{
		if('0'<=a[i]&&a[i]<='9')
		{
			x=a[i]-'0';
		}
		else if('A'<=a[i]&&a[i]<='Z')
		{
			x=a[i]-'A'+10;
		}
		s+=x*pow(16,l-1);
//		cout<<"x:"<<x<<"  pow(16,l-1):"<<pow(16,l-1);
//		cout<<"    s:"<<s<<endl;
		l--;
	}
	cout<<s;
	return 0;
}
