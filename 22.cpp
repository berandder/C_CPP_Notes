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
���Ӧ���ֵĵ����� 

int i,n;
cin>>n;
i=n-1;
while(i>1&&n%i!=0)
	i--;
cout<<i;
�����ֵĵڶ������� 

����շת����������Լ��
շת�����
��շת�������������A��B�����Լ��������̣�
һ���ñ�����A���Գ���B���õ�����C��
�����������C��Ϊ0��������һ���ĳ���B�滻������A������һ��������C�滻����B���ٴ�ִ�е�һ�����������Ϊ0��ִ����һ����
�������ʱ�ĳ�������A��B�����Լ����
����A=60��B=25��������Ϊ��
1��60/25=2����10��
2��25/10=2����5��
3��10/5=2����0��
������ʱ������Ϊ0�������������˲��ĳ���5����60��25�����Լ����
C++��
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
	
do-while���ĸ�ʽ�빦�ܣ�
��ʽ1��
do
	���;
while(�������ʽ);
��ʽ2��
do {
	���1;
	���2;
	����
}
while(�������ʽ);
ִ�й��̣�
-->ѭ����-->���ʽ-0->
      <---��0---
˵����do-while�������ִ��ѭ����֮�����������ʽ��ֵ����������Ҫִ��һ��ѭ���塣 
*/
