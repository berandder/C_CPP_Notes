#include <iostream>
using namespace std;
int main() {
	int a,b,c,d,e,p;
	for(int a=0;a<=9;++a) {
		for(int b=0;b<=9;++b) {
			for(int c=0;c<=9;++c) {
				for(int d=0;d<=9;++d) {
					for(int e=0;e<=9;++e) {
						if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e) {
							p=(100*a+10*b+c)*(10*d+a);
							if(p/1000==b&&(p%1000)/100==c&&(p%100)/10==d&&p%10==e)
								cout<<100*a+10*b+c<<"*"<<10*d+a<<"="<<p<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}
