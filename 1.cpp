#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;//命名空间：std=>standard
int main() {
	cout<<"I love programming"<<endl;//如果未使用命名空间，则需要指明函数的出处
	cout<<9/8<<" "<<4*(6+3)%5<<" "<<(4*6+3)%5<<" "<<endl;
	cout<<"9500秒="<<9500/3600<<"时"<<9500%3600/60<<"分"<<9500%3600%60<<"秒"<<endl;
	cout<<"5个工人6天能铺"<<90/3/4*5*6<<"平方米地砖"<<endl;
	cout<<15*3/2<<endl;
	cout<<fixed<<setprecision(10)<<10/6<<endl;
	
	cout<<"买16支铅笔要"<<fixed<<setprecision(2)<<0.6/5*16<<"元"<<endl;
	cout<<"现在可以做"<<fixed<<setprecision(2)<<3.2*791/2.8<<"套"<<endl;
	cout<<"正方形瓷砖边长"<<fixed<<setprecision(2)<<sqrt(10*8-16)<<"厘米"<<endl;
	return 0;
}
/*  C++程序由头文件、命名空间和主函数组成
	+
	-
	*
	/ 两个整数相除的结果是整数，省略小数部分
	% 模运算的结果符号取决于被除数的符号
	cout是C++的输出语句，C++的输出和输入是用“流”的方式实现的
	整数之间的运算结果是整数，实数之间的运算结果是实数
	若存在实数，运算结果按实数运算，至少有一个数表示为实数 
	fixed<<setprecision()：让后面输出的数值保留（）位小数，需要用到头文件iomanip
	sqrt():开根号，需要用到头文件cmath
*/ 
