#include <iostream>
#include <cmath>
using namespace std;
int main() {
/*	int n,x,y,t,rest;
	cin>>n>>x>>y;
	t=ceil((double)y/x) ;
	if(t<n) rest=n-t;
	else rest=0;
	cout<<rest<<endl; */
	
	double dis,t1,t2;
	cin>>dis;
	t1=dis/3+23+27,t2=dis/1.2;
	if(t1>t2) cout<<"Walk"<<endl;
	else if(t1==t2) cout<<"The same"<<endl;
	else cout<<"Bike"<<endl;
	
	return 0;
}
