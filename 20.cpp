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
for���ĸ�ʽ�빦��
��ʽ1��
	for(ѭ��������ʼ����ѭ��������ѭ����������)
		��䣻
��ʽ2��
	for(ѭ��������ʼ����ѭ��������ѭ����������) {
		���1��
		���2��
		����
	}

forѭ�����ִ������
								   {Ϊ0-->���� 
ѭ������ȡ��ֵ-->ѭ�������Ƿ�Ϊ��-->����-->ѭ����-->ѭ����������
						<----------------------------------

for����еĳ�ʼ�����������������ɲ��ֻ�ȫ��ʡ�ԣ��������ֺŲ���ʡ��
for�����ʡ����ѭ�������ĳ�ʼ��i=0����i=1������������i++��
����for(;i<=100;) 
*/
