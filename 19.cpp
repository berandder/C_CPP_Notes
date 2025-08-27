#include <iostream>
#include <cmath>
using namespace std;
int main() {
/*	double x;
	cin>>x;
	if(x<=0.5)
		cout<<"3·ÖÖÓ"<<endl;
	if(x>0.5)
		cout<<ceil((x-0.5)/0.2)+3<<"·ÖÖÓ"<<endl;*/
	
	double x;
	cin>>x;
	if(0<=x&&x<5) {
		cout<<x+2.5<<endl;
	}
	if(5<=x&&x<10) {
		cout<<2-1.5*(x-3)*(x-3)<<endl;
	}
	if(10<=x&&x<20) {
		cout<<x/2-1.5<<endl;
	}
	
	return 0;
}
