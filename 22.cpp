#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
/*	int n,s=0;
	cin>>n;
	while(n) {
		s=s*10+n%10;
		n/=10;
	}
	cout<<s<<endl;
	
	int i,n;
	cin>>n;
	i=n-1;
	while(i>1&&n%i!=0)
		i--;
	cout<<i;
	
	int n,s=0;
	cin>>n;
	while(n>0) {
		s+=n%10;
		n/=10;
	}
	cout<<s<<endl;
	
	int m,n,ms,ns,i;
	cin>>m>>n;
	i=m-1;
	while(i>1&&n%i!=0)
		i--;
	ms=i;
	i=n-1;
	while(i>1&&n%i!=0)
		i--;
	ns=i;
	if(ms==1&&ns==1)
		cout<<"Yes!"<<endl;
	else
		cout<<"No!"<<endl;*/
	
	int x,y,n,num=0;
	srand(time(0));
	x=100+rand()%900,y=100+rand()%900;
	do {
		cout<<x<<"+"<<y<<"=?"<<endl;
		cin>>n;
		num++; 
	}
	while(n!=x+y);
	cout<<num<<endl;
	
	return 0;
}
/*
while(n) {
	s=s*10+n%10;
	n/=10;
}
求对应数字的倒序数 

int i,n;
cin>>n;
i=n-1;
while(i>1&&n%i!=0)
	i--;
cout<<i;
求数字的第二大因数 

利用辗转相除法求最大公约数
辗转相除法
用辗转相除法求正整数A，B的最大公约数运算过程：
一、用被除数A除以除数B，得到余数C；
二、如果余数C不为0，则用上一步的除数B替换被除数A，用上一步的余数C替换除数B，再次执行第一步；如果余数为0则执行下一步；
三、则此时的除数即是A、B的最大公约数。
例如A=60，B=25，运算结果为：
1，60/25=2……10；
2，25/10=2……5；
3，10/5=2……0。
第三步时，余数为0，运算结束，则此步的除数5即是60和25的最大公约数。
C++：
int m,n,temp;
cin>>m>>n;
if(m<n) {
	temp=m;
	m=n;
	n=temp;
}
while(n!=0) {
	temp=m%n;
	m=n;
	n=temp;
}
if(m==1)
	cout<<"Yes!"<<endl;
else
	cout<<"No!"<<endl;
	
do-while语句的格式与功能：
格式1：
do
	语句;
while(条件表达式);
格式2：
do {
	语句1;
	语句2;
	……
}
while(条件表达式);
执行过程：
-->循环体-->表达式-0->
      <---非0---
说明：do-while语句是在执行循环体之后检查条件表达式的值，所以至少要执行一次循环体。 
*/
