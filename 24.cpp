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
BREAK： 
1，格式
	break;
2，功能
中断在循环体（或switch……case语句块），跳出本层循环。
break是用来终端循环的语句，只能用在循环体（switch……case语句块）种，用在其他地方会出错。 

CONTINUE： 
1，格式
	continue;
2，功能
在循环执行的过程中，如遇到continue语句，程序将结束本次循环，接着开始下一次的循环。

对比： 
continue语句并不结束循环，只是从循环体中当前位置跳转到循环的开始处，继续执行循环体；
而break语句直接结束循环。

一维数组：
同类型变量或对象的集合称为数组。
定义： 
在C++语言中，一维数组定义方法如下：
	类型名 数组名[元素个数];
其中，元素个数必须是常数或者常量表达式。 
数组中的变量称为数组元素，数组中的每个元素都有下标，数组元素也称为下标变量
例：
“int num[10];”定义了一个名字为num的数组，它有10个元素，每个元素都是一个int型变量，下标变量为num[0]到num[9]，num数组占用了一片连续的、大小为10*sizeof(int)字节的空间。 
下标可以是任何值为整型的表达式，该表达式里可以包含变量和函数调用。引用时，下标值应在数组定义的下标值范围内。 
const int MAXN[10000];
int a[MAXN];//定义10000个数组元素 
*/ 
