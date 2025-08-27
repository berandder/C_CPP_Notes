#include <iostream>
using namespace std;
int main() {
/*	int i;
	for(i=1;i<=5;i++)
		cout<<i;
	
	int i,sum=0;
	for(;i<=100;) {
		sum+=i;
		i++;
	}
	cout<<i<<" "<<sum<<endl;
	for(i=0;i<=100;i++) {
		sum+=i;
		i++;
	}
	cout<<i<<" "<<sum<<endl; 
	for(i=1;i<=100;i++) {
		sum+=i;
		i++;
	}
	cout<<i<<" "<<sum<<endl; 
	
	int i,sum=2;
	for(i=1;i<=49;i++) {
		cout<<sum<<endl;
		sum+=2;
	}
	
	int i,n;
	float x,max=0;
	cin>>n;
	for(i=1;i<=n;i++) {
		cin>>x;
		if(x>max)
			max=x;
	}
	cout<<max<<endl;*/
	
	int i,a=0,b=1,c;
	cout<<a<<" "<<b<<" ";
	for(i=3;i<=40;i++) {
		c=a+b;
		cout<<c<<" ";
		if(i%10==0) cout<<endl;
		a=b,b=c;
	}
	
	return 0; 
}
/*
for语句的格式与功能
格式1：
	for(循环变量初始化；循环条件；循环变量增量)
		语句；
格式2：
	for(循环变量初始化；循环条件；循环变量增量) {
		语句1；
		语句2；
		……
	}

for循环语句执行流程
								   {为0-->结束 
循环变量取初值-->循环条件是否为真-->非零-->循环体-->循环变量增量
						<----------------------------------

for语句中的初始化，条件和增量，可部分或全部省略，但两个分号不能省略
for语句中省略了循环变量的初始化i=0（或i=1）和增量部分i++；
例：for(;i<=100;) 
*/
