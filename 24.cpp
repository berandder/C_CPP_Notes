#include <iostream>
#include <cmath>
using namespace std;
const int MAXN=10000;
int main() {
/*	int n,x,y,i;
	cin>>n;
	for(x=3;x<=n/2;x+=2) {
		for(i=2;i<=sqrt(x);i++)
			if(x%1==0)
			break;
		if(i>sqrt(x))
			y=n-x;
		else
			break;
		for(i=2;i<=sqrt(y);i++)	
			if(y%i==0)
				break;
		if(i>sqrt(y))
			cout<<n<<"="<<x<<"+"<<y<<endl; 
	}
	
	int i;
	for(i=10;i>0;i--) {
		if(i==5)
			continue;
		cout<<i<<endl;
	}
	
	int i;
	for(i=10;i>0;i--) {
		if(i%2==0)
			continue;
		cout<<i<<endl;
	}
	
	int i;
	for(i=10;i>0;i--) {
		if(i==5)
			break;
		cout<<i<<endl;
	}
	
	int a[MAXN],i,n;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=n-1;i>=0;i--)
		cout<<a[i]<<" ";*/
		
	int a[20],i;
	a[0]=0,a[1]=1;
	for(i=2;i<=19;i++)
		a[i]=a[i-2]+a[i-1];
	for(i=19;i>=0;i--)
		cout<<a[i]<<" ";

	return 0;
}
/*
BREAK�� 
1����ʽ
	break;
2������
�ж���ѭ���壨��switch����case���飩����������ѭ����
break�������ն�ѭ������䣬ֻ������ѭ���壨switch����case���飩�֣����������ط������ 

CONTINUE�� 
1����ʽ
	continue;
2������
��ѭ��ִ�еĹ����У�������continue��䣬���򽫽�������ѭ�������ſ�ʼ��һ�ε�ѭ����

�Աȣ� 
continue��䲢������ѭ����ֻ�Ǵ�ѭ�����е�ǰλ����ת��ѭ���Ŀ�ʼ��������ִ��ѭ���壻
��break���ֱ�ӽ���ѭ����

һά���飺
ͬ���ͱ��������ļ��ϳ�Ϊ���顣
���壺 
��C++�����У�һά���鶨�巽�����£�
	������ ������[Ԫ�ظ���];
���У�Ԫ�ظ��������ǳ������߳������ʽ�� 
�����еı�����Ϊ����Ԫ�أ������е�ÿ��Ԫ�ض����±꣬����Ԫ��Ҳ��Ϊ�±����
����
��int num[10];��������һ������Ϊnum�����飬����10��Ԫ�أ�ÿ��Ԫ�ض���һ��int�ͱ������±����Ϊnum[0]��num[9]��num����ռ����һƬ�����ġ���СΪ10*sizeof(int)�ֽڵĿռ䡣 
�±�������κ�ֵΪ���͵ı��ʽ���ñ��ʽ����԰��������ͺ������á�����ʱ���±�ֵӦ�����鶨����±�ֵ��Χ�ڡ� 
const int MAXN[10000];
int a[MAXN];//����10000������Ԫ�� 
*/ 
