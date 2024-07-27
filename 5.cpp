#include <iostream>
#include <cmath>
using namespace std;
int main() {
/*	char a;
	cin>>a;
	char b=97+122-a;
	cout<<b<<endl;
	
	int a,b,c,d;
	cin>>a;
	b=a/100,c=a/10%10,d=a%10;//b个位，c十位，d百位 
	cout<<d<<c<<b<<endl;
	
	char c1,c2;
	int a;
	float b;
	cout<<"输入："<<endl;
	cin>>c1>>c2>>a>>b;
	cout<<"输出："<<endl<<c1<<endl<<c2<<endl<<a<<endl<<b<<endl;
	
	float s,v,o_s,c;
	char name;
	cin>>name;
	cin>>s>>v>>o_s>>c;
	cout<<name<<endl<<"Time:"<<s/v<<" H"<<endl<<"Totalcost:"<<s/o_s*c<<" CNY"<<endl;  */
	
	float sheshi,huashi;
	cin>>huashi;
	cout<<huashi<<"华氏度="<<(huashi-32)/1.8<<"摄氏度"<<endl;
	
	//三角形三条边求面积公式：S=根号p*(p-a)*(p-b)*(p-c);p=(a+b+c)/2
	float s,p,a,b,c;
	cout<<"请分别输入三角形三条边的长度："; 
	cin>>a>>b>>c;
	p=(a+b+c)/2,s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"三角形的面积是："<<s<<endl;
	
	int x;
	cout<<"请输入一个三位数：";
	cin>>x;
	cout<<(x*=1001)/7/11/13<<endl; 
	
	return 0;
}
/*  cin是C++的输入语句，与cout语句一样，C++的输入是用流的方式（stream）的方式实现的
    计算机（指定的变量）<-（>>提取）<-（输入流）<-"Hello!"<-键盘
    格式：cin>>（变量名1）>>（变量名2）>>（变量名3）>>……>>（变量名n）;
    例： cin>>a>>b>>c>>d;
         ==
    	 cin>>a;
    	 cin>>b;
      	 cin>>c;
      	 cin>>d;
	1，cin语句把空格和回车换行符作为分隔符，不输入给变量
	   如果想要将空格字符或回车换行符（或其他任何键盘上的字符）输入给字符变量
	   可以用getchar函数
	2，cin语句忽略多余的输入数据
	
	*7*11*13=*1001                                                                    */
