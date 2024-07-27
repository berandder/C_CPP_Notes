#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
int main() {
/*  int a=7,b=2;
	cout<<(a+0.0)/b<<" "<<0.0+a/b<<" "<<(0.0+a)/b-1<<endl;  */
	
	int y=5,x=5;
	y=--x;
	cout<<x<<" "<<y<<endl;
	
	srand(time(0));
	cout<<rand()%6+1<<endl;
	
	float v0=30*1000/60,a=0.2,t=3*60,v=v0+a*t;//t:时间
	cout<<v<<endl;
	
	return 0;
}
/*  friend是函数

    使用rand()函数返回从[0,MAX)之间的随机整数，
	RAND_MAX（常数）=32767，需要使用头文件：<cstdlib>
	
	使用srand(time(NULL))/srand(time(0))设置当前系统时间值
	为随机种子，需要用到头文件：<cstdlib>/<ctime>
	
	产生一定范围随机数的通用表示公式：
	1，要取得[a,b)的随机整数，使用rand()%(b-a)+a； 
	2，要取得[a,b]的随机整数，使用rand()%(b-a+1)+a 
	3，要取得(a,b]的随机整数，使用rand()%(b-a)+a+1  */ 
