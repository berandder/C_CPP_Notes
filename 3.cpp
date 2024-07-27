#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
/*	float a=5.5,b=6.7,c=9.3,answer=(-b+4*a*c)/(2*a);
	cout<<answer<<endl;
	
	a=4000,b=5290,c;
	c=sqrt(b/a);
	cout<<"小计2015年工资是："<<c*b<<endl;            */
	
	int t=2*60;
	float v0=40*1000/60/60.0,a=0.15,vt=v0+a*t,s=v0*t+a*t*t/2;
	cout<<"速度："<<vt<<"  "<<"路程："<<s<<endl;
	
	const float pai=3.14159265;
	float radius=7,area=pai*radius*radius;
	cout<<area<<endl;
	
	return 0;
}
/*  对于常数可以定义一个常量来储存， 
	格式：1，<类型说明符> const <常量名> 
		  例：int const x=0;
		  2，const <类型说明符> <常量名>
		  例：const int x=0;
	
	练习：2，y=m*x+b
			 m=(a+b+c)/e*f
			 a=sqrt((x-3*y)*z)
			 a=(2x-y)/(x+y*y)
			 m=(x-y*z)/(2/c)              */
