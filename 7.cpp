#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
/*	int h=35,f=94,r=(f-2*h)/2,c=35-r;
	cout<<"鸡有"<<c<<"只，兔子有"<<r<<"只"<<endl;
	
	int a,b,c,d,e,f,tp;
	cin>>a>>b>>c>>d;
	tp=(c*60+d)-(a*60+b),e=tp/60,f=tp%60;
	cout<<"公交车从首站到末站共用了"<<e<<"时"<<f<<"分"<<endl;  */
	
	srand(time(0));
	int a,b,c;
	a=rand()%1000+1;
	b=rand()%1000+1;
	c=rand()%1000+1;
	cout<<a<<"+"<<b<<"-"<<c<<"="<<a+b-c<<endl;
}
/*  使用rand()函数返回从[0,MAX)之间的随机整数，
	RAND_MAX（常数）=32767，需要使用头文件：<cstdlib>
	
	使用srand(time(NULL))/srand(time(0))设置当前系统时间值
	为随机种子，需要用到头文件：<cstdlib>/<ctime>
	
	产生一定范围随机数的通用表示公式：
	1，要取得[a,b)的随机整数，使用rand()%(b-a)+a； 
	2，要取得[a,b]的随机整数，使用rand()%(b-a+1)+a 
	3，要取得(a,b]的随机整数，使用rand()%(b-a)+a+1  */ 
