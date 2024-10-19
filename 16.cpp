#include <iostream>
#include <cstdio>
using namespace std;
int main() {
/*	float num1,num2;
	char op;
	cin>>num1>>num2>>op;
	switch(op) {
		case'+':
			cout<<num1<<op<<num2<<"="<<num1+num2<<endl;
			break;
		case'-':
			cout<<num1<<op<<num2<<"="<<num1-num2<<endl;
			break;
		case'*':
			cout<<num1<<op<<num2<<"="<<num1*num2<<endl;
			break;
		case'/':
			if(num2!=0)
				cout<<num1<<op<<num2<<"="<<num1/num2<<endl;
			else
				cout<<"Divided by zero!"<<endl;
			break;
		default:
			cout<<"Invalid operator!";
	}
	
	float x,y;
	scanf("%f%f",&x,&y);
	int n=100*x/y+0.5;
	switch(n/10) {
		case 0:case 1:
			printf("极其富裕\n");
			break;
		case 2:
			printf("富裕\n");
			break;
		case 3:
			printf("相对富裕\n");
			break;
		case 4:
			printf("小康\n");
			break;
		case 5:
			printf("温饱\n");
			break;
		default:
		printf("贫穷\n");
		break; 
	}*/
	
	int d;
	cin>>d;
	switch(d) {
		case 1:
			cout<<"Monday."<<endl;
			break;
		case 2:
			cout<<"Tuesday."<<endl;
			break;
		case 3:
			cout<<"Wednesday."<<endl;
			break;
		case 4:
			cout<<"Thursday."<<endl;
			break;
		case 5:
			cout<<"Friday."<<endl;
			break;
		case 6:
			cout<<"Saturday."<<endl;
			break;
		case 7:
			cout<<"Sunday."<<endl;
			break;
	}
	
	return 0;
}
/*
switch语句格式：
switch(表达式) {
	case常量表达式1:[语句组1][break;]
		……
	case常量表达式n:[语句组n][break;]
	[default:语句组n+1]
}
规则：
（1）合法的switch语句中的表达式，其取值只能是整型，字符型，布尔型或枚举型。
（2）常量表达式是由常量组成的表达式，值的类型与表达式的类型相同。
（3）任意两个case后的常量表达式值必须各不相同，否则将引起歧义。
（4）“语句组”可以是一个语句也可以是一组语句。
（5）基本格式中的[]表示可选项。
switch语句支持多个常量表达式共用同一语句组。
对小数后一位四舍五入取整：n=100*x/y+0.5 
*/
