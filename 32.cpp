#include <iostream>
using namespace std;
int main() {
	int n,numbers[1000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>numbers[i];
	int slc=0;
	for(int i=0;i<n;i++) {
		int num=numbers[i],ldc=0;
		bool alllucky=true;
		while(num>0) {
			int digit=num%10;
			if(digit==4||digit==7)
				ldc++;
			else
				alllucky=false;
			num/=10;
		}
		if(alllucky||ldc==4||ldc==7)
			slc++;
	}
	cout<<slc<<endl;
	return 0;
}
