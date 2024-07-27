#include <iostream>
using namespace std;
int main() {
/*  int a=65;//定义整型变量a，将整数65存放到a中
	cout<<a<<endl;
	a=100;
	cout<<a<<endl;
	float b=65.5;
	cout<<b<<endl;                               */
	
	char c='A';
	cout<<c<<endl;
	
/*  float x=7.5,y=10.6;//定义浮点型变量并给x赋值 
	cout<<"Area of a rectangle:"<<x*y<<endl;      */
	
	float pai=3.14159265,radius=7,area=radius*radius*pai;
	cout<<"Circle area:"<<area<<endl;
	
	int a,b;
	a=b=3,a+=b;
	cout<<a<<endl;
	cout<<b<<endl;
	
	float x=10.5,y=30.6,temp=0;
	cout<<x<<" "<<y<<endl;
	temp=x,x=y,y=temp;
	cout<<x<<" "<<y<<endl;
	
	int n1,n2=5;
	n2++;
	cout<<n2<<endl;
	++n2;
	cout<<n2<<endl;
	n1=n2++;//先将n2的值赋给n1，再n2+1 
	cout<<n1<<" "<<n2<<endl;
	n1=++n2;//先n2+1，再将n2的值赋给n1
	cout<<n1<<" "<<n2<<endl;
	
	return 0;
}
/*  整形空间占用4个字节，范围：-2^31~2^31-1
	变量的命名：1，变量名只能出现字母、数字、下划线
				2，第一个字符不能是数字
				3，不能是C++的关键字
				4，区分大小写
	float为单精度浮点型数据类型，空间占用4个字节，范围：-3.4E38~3.4E38
	char数据类型为字符型，占用一个字节，存放的数据是ASCII码值-128~127范围内对应的字符
	C++中用双引号标注字符串，用单引号标注单个字符
	赋值：1，简单赋值（=）
		  2，复合算术赋值（+=，-=，*=，/=，%=）
		  3，复合位运算赋值（&=，|=，^=，>>=，<<=）
		  【共十一种】
	交换变量方法：1，temp=x,x=y,y=temp
				  2，x+=y,y=x-y,x-=y
	变量的自增、自减：1，变量名++/--
	                  2，++/--变量名                                                   */
