#include <iostream>
using namespace std;
int main() {
	int n;
	while(cin>>n) {
		int a[100];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int ms=a[0],cs=a[0];
		for(int i=1;i<n;i++) {
			if(cs+a[i]>a[i])
				cs+=a[i];
			else
				cs=a[i];
			if(cs>ms)
				ms=cs;
		}
		cout<<ms<<endl;
	}
	return 0;
}
