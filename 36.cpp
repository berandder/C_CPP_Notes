#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n; 
	if((n%3==0)&&(n%7==0))
		cout<<"yes" ;
	else
		cout<<"no";
	return 0;
}