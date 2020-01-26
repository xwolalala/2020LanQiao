#include <iostream>
using namespace std;
int main()
{
	int vt,vg,t,s,l;
	cin>>vt>>vg>>t>>s>>l;
	int st=0,sg=0;
	int time=0;
	while(1)
	{
		time++;
		st+=vt;
		sg+=vg;
		if(st>=l&&sg<l)
		{
			cout<<"R"<<endl;
			cout<<time;
			return 0;
		}
		else if(sg>=l&&st<l)
		{
			cout<<"T"<<endl;
			cout<<time;
			return 0;
		}
		else if(sg>=l&&st>=l)
		{
			cout<<"D"<<endl;
			cout<<time;
			return 0;
		}
		if(st-sg>=t)
		{
			for(int i=s;i>0;i--)
			{
				sg+=vg;
				time+=1;
				if(st>=l&&sg<l)
				{
					cout<<"R"<<endl;
					cout<<time;
					return 0;
				}
				else if(sg>=l&&st<l)
				{
					cout<<"T"<<endl;
					cout<<time;
					return 0;
				}
				else if(sg>=l&&st>=l)
				{
					cout<<"D"<<endl;
					cout<<time;
					return 0;
				}
			}
		}
	}
	return 0;
}
