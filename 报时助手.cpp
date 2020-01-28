#include<iostream>
using namespace std;
int main()
{
	int h,m;
	cin>>h>>m;
	//***************对于时h****************************************
	if(h==0)
		cout<<"zero"<<" ";
	else if(h==1)
		cout<<"one"<<" "; 
	else if(h==2)
		cout<<"two"<<" ";
	else if(h==3)
		cout<<"three"<<" ";
	else if(h==4)
		cout<<"four"<<" ";
	else if(h==5)
		cout<<"five"<<" ";
	else if(h==6)
		cout<<"six"<<" ";
	else if(h==7)
		cout<<"seven"<<" ";
	else if(h==8)
		cout<<"eight"<<" ";
	else if(h==9)
		cout<<"nine"<<" ";
	else if(h==10)
		cout<<"ten"<<" ";
	else if(h==11)
		cout<<"eleven"<<" ";
	else if(h==12)
		cout<<"twelve"<<" ";
	else if(h==13)
		cout<<"thirteen"<<" ";
	else if(h==14)
		cout<<"fourteen"<<" ";
	else if(h==15)
		cout<<"fifteen"<<" ";
	else if(h==16)
		cout<<"sixteen"<<" ";
	else if(h==17)
		cout<<"seventeen"<<" ";
	else if(h==18)
		cout<<"eighteen"<<" ";
	else if(h==19)
		cout<<"nineteen"<<" ";
	else if(h==20)
		cout<<"twenty"<<" ";
	else if(h==21)
		cout<<"twenty one"<<" ";
	else if(h==22)
		cout<<"twenty two"<<" ";
	else if(h==23)
		cout<<"twenty three"<<" ";
	//**************************************对于分m******************************
	if(m==0)
	{
		cout<<"o'clock";
		return 0;
	}
	int a=m/10,b=m%10;
	int flag=0;
	if(a==1)
	{
		flag=1;
		if(m==10)
			cout<<"ten"<<" ";
		else if(m==11)
			cout<<"eleven"<<" ";
		else if(m==12)
			cout<<"twelve"<<" ";
		else if(m==13)
			cout<<"thirteen"<<" ";
		else if(m==14)
			cout<<"fourteen"<<" ";
		else if(m==15)
			cout<<"fifteen"<<" ";
		else if(m==16)
			cout<<"sixteen"<<" ";
		else if(m==17)
			cout<<"seventeen"<<" ";
		else if(m==18)
			cout<<"eighteen"<<" ";
		else if(m==19)
			cout<<"nineteen"<<" ";
	}
	else if(a==2)
	{
		cout<<"twenty"<<" ";
	}
	else if(a==3)
	{
		cout<<"thirty"<<" ";
	}
	else if(a==4)
	{
		cout<<"forty"<<" ";
	}
	else if(a==5)
	{
		cout<<"fifty"<<" ";
	}
	if(flag==0)
	{
		if(b==1)
			cout<<"one"<<" "; 
		else if(b==2)
			cout<<"two"<<" ";
		else if(b==3)
			cout<<"three"<<" ";
		else if(b==4)
			cout<<"four"<<" ";
		else if(b==5)
			cout<<"five"<<" ";
		else if(b==6)
			cout<<"six"<<" ";
		else if(b==7)
			cout<<"seven"<<" ";
		else if(b==8)
			cout<<"eight"<<" ";
		else if(b==9)
			cout<<"nine"<<" ";
	} 
	return 0;
}
