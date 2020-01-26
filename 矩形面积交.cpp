#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double ax1,ay1,ax2,ay2;
	double bx1,by1,bx2,by2;
	cin>>ax1>>ay1>>ax2>>ay2;
	cin>>bx1>>by1>>bx2>>by2;
	double mx1,my1,mx2,my2;
	mx1=max(min(ax1,ax2),min(bx1,bx2)); 
	my1=max(min(ay1,ay2),min(by1,by2));
	mx2=min(max(ax1,ax2),max(bx1,bx2));
	my2=min(max(ay1,ay2),max(by1,by2));
	if(mx1<mx2&&my1<my2)
		printf("%.2f",(mx2-mx1)*(my2-my1));
	else
		cout<<"0.00";
}
