#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
/*	int i,n=0;
	for(i=1;i<=100;i=i*3)
		if(i%3==0)
			n++;
	cout<<n<<endl;
	
	int i,j;
	for(i=20,j=0;i<=50;i++,j=j+5)
		if(i==j)
			cout<<i<<endl;
			
	int n;
	for(n=1;n<=5;n++)
		switch(n%5) {
			case 0:
				cout<<n<<"@"<<endl;
				break;
			case 1:
				cout<<n<<"#"<<endl;
				break;
			default:
				cout<<n<<endl;
			case 2:
				cout<<n<<"$"<<endl;
		}
		
	int n,i=1;
	for(n=2;n<=100;n++)
		if(n%2==0)
			i=i+n;
		else
			i=i-n;
	cout<<i<<endl;
	
	int i,j,s=0;
	for(i=1;i<=10;i++)
		for(j=1;j<=i;j++)
			s=s+j;
	cout<<s<<endl;
	
	int i,j=0;
	for(i=1;i<=100;i++)
		if(i%2==0)
			j=j-1/i;
		else
			j=j+1/i;
	cout<<j<<endl;
	
	int i,n;
	float h,s=0;
	cout<<"输入学生人数："<<endl;
	cin>>n;
	for(i=1;i<=n;i++) {
		cin>>h;
		s=s+h;
	}
	cout<<fixed<<setprecision(2)<<s/n<<endl;
	
	int i,n,j,min=1001,max=0;
	cin>>i;
	for(n=1;n<=i;n++) {
		cin>>j;
		if(j>max)
			max=j;
		if(j<min)
			min=j;
	}
	cout<<max-min<<endl;*/
	
	double s=0;
	int i;
	for(i=0;i<=63;i++) {
		s=s+pow(2,i);
	}
	cout<<s/(1.42*pow(10,8))<<endl;
	printf("%.2f",s/(1.42*pow(10,8)));
	
	return 0;
}
