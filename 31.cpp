#include <iostream>
using namespace std;
int main() {
	int a,b,c,a1,a2,b1,b2,c1,c2;
	cin>>a>>b>>c;
	for(int i=0;i<=a;i++) {
		a1=1+i,a2=a-a1;
		if(a1%2!=1&&a2%2!=1)
			cout<<1<<" "<<endl;
		else
			cout<<0<<" "<<endl;
	}
	for(int i=0;i<=b;i++) {
		b1=1+i,b2=b-b1;
		if(b1%2!=1&&b2%2!=1)
			cout<<1<<" "<<endl;
		else
			cout<<0<<" "<<endl;
	}
	for(int i=0;i<=c;i++) {
		c1=1+i,c2=c-c1;
		if(c1%2!=1&&c2%2!=1)
			cout<<1<<" "<<endl;
		else
			cout<<0<<" "<<endl;
	}
	return 0;
}
