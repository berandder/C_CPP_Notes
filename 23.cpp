#include <iostream>
#include <cmath>
using namespace std;
int main() {
/*	double pi,n=1; 
	int m=1;
	pi=pi/4;
	while((1.0/n)>(1/1000000.0)) {
		if(m%2!=0)
			pi+=1/n;
		else
			pi-=1/n;
		m++,n+=2;
	cout<<pi*4<<endl;
	
	double m=1,n,s=0;
	while((200/pow(2,m))>=0.5) {
		n=200/pow(2,m-1)+200/pow(2,m),s+=n,m++;
	}
	cout<<s<<endl;
	
	int n,i,m;
	cin>>n;
	for(i=1;i<=n;i++) {
		for(m=1;m<=i;m++)
			cout<<"*";
		cout<<endl;
	}*/
	
	int x,y,z;
	for(x=0;x<=20;x++) {
		for(y=0;y<=100/3;y++) {
			for(z=0;z<=300;z++) {
				if(z*1/3+y*3+x*5==100&&x+y+z==100)
					cout<<"鸡翁："<<x<<"  鸡母："<<y<<"  鸡雏："<<z<<endl;
			}
		}
	}
	
	return 0;
}
/*
在多重循环中，内层循环必须在内层结束，不能出现内外循环交叉的情况。
*/ 
