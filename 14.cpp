#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int cmark,mmark;
	cin>>cmark>>mmark;
	if(cmark>=75&&mmark>=85) cout<<"有资格"<<endl;
	else cout<<"无资格"<<endl;
	
	int year;
	cin>>year;
	if((year%4==0||year%400==0)&&year%100!=0) cout<<year<<"年是闰年"<<endl;
	else cout<<year<<"年不是闰年"<<endl;
	
	int a,b,c,p,s;
	cin>>a>>b>>c;
	if(a+b>c&&b+c>a&&a+c>b) {
		p=(a+b+c)/2,s=sqrt(p*(p-a)*(p-b)*(p-c)); 
		cout<<"能构成三角形，面积是："<<s<<endl;
	}
	else cout<<"不能构成三角形"<<endl; 
	
	int num=2;
	cout<<((num%2==0)?"num is even":"num is odd")<<endl; 
	
	return 0;
}
/*  逻辑与：&&，逻辑或：||，逻辑非：！
    优先级别：
	！  高
	&&
	||  低
	逻辑非：经过逻辑非运算，其结果与原来相反。 
	A	！A 
	0	1
	1 	0
	逻辑与：若参加运算的某个条件不成立，其结果为不成立，只有当参加运算的条件都成立，其结果才成立。 
	A	B	A&&B
	0	0	0
	0 	1	0
	1	0	0
	1	1	1
	逻辑与：若参加运算的某个条件成立，其结果为成立，只有当参加运算的条件都不成立，其结果才不成立。 
	A	B	A&&B
	0	0	1
	0 	1	1
	1	0	1
	1	1	0
	
	判断一个数n是否可以同时被2与3整除	if (n%2==0&&n%3==0) 或 if(n%6==0)
	判断一个数x是否在区间[1，5]之内		if (x>=1&&x<=5) 或 if(!(x<1||x>5)) 
	判断一个数x是否等于0				正向判断：if(x==0)
										反向判断：if(x!=0) 或 if(!x)
										
	逻辑变量用类型标识符bool来定义，因此它的值只有true或false两种。
	例：bool found=true,flag=false;
	
	条件表达式
	格式：
		<表达式1>?<表达式2>:<表达式3>
	条件表达式要求有三个操作对象，“？”和“：”一起出现在条件表达式中，称三目（元）运算符，它是C++中唯一一个三目运算符。 
	*/
	
