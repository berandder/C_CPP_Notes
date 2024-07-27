#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
/*	int a;
	srand(time(0));
	a=rand()%6+1;
	cout<<a<<endl;
	
	double a,b,c,n,s;
	cin>>a>>b>>c>>n;
	s=pow(a,n)+pow(b,n)+pow(c,n);
	cout<<fixed<<setprecision(15)<<"s="<<s<<endl;
	
	//等差数列求和公式：Sn=n(a1+an)/2
	double a,b,n;
	cin>>a>>b>>n;
	cout<<n*(a+b)/2<<endl;                         */
	
	double a,n,m;
	cin>>n>>m>>a;
	cout<<"最多能填入"<<(n/a)*(m/a)<<"个正方形"<<endl;
	
	return 0;
}
