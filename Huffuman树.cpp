#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	int n;
	int s=0;
	cin>>n;
	int *a=(int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	while(n>2) {
		int min1=9999999,min2=9999999;
		int flag1,flag2;
		for(int i=0; i<n; i++) {
			if(a[i]<min1) {
				min1=a[i];
				flag1=i;
			}
		}
		if(flag1!=n-1) {
			int temp=a[flag1];
			a[flag1]=a[n-1];
			a[n-1]=a[flag1];
		}
		n--;
		for(int i=0; i<n; i++) {
			if(a[i]<min2) {
				min2=a[i];
				flag2=i;
			}
		}
		if(flag2!=n-1) {
			int temp=a[flag2];
			a[flag2]=a[n-1];
			a[n-1]=a[flag2];
		}
		a[n-1]=min1+min2;
		s=s+min1+min2;
		//cout<<"s="<<min1<<"+"<<min2<<"="<<min1+min2<<endl;
	}
	s=s+a[0]+a[1];
	//cout<<"s="<<a[0]<<"+"<<a[1]<<"="<<a[0]+a[1]<<endl;
	cout<<s;
	return 0;
}
