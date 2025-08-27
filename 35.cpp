#include <iostream>
using namespace std;
int main() {
	int i=100,x=0,y=0;
	while(i>0) {
		i--,x=i%8;
		if(x==1)
			y++;
	}
	cout<<y<<endl;
	return 0;
}
/*
优先级：
逻辑运算符--关系运算符--算术运算符--> 
低----------中----------高---------->
三目运算符的格式：条件?a:b，该运算符指的是当条件成立时输出a，否则输出b。
*/
