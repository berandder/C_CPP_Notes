#include <iostream>
using namespace std;
const int maxn=100001;
int main() {
	float temp,a[maxn];
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=n-1;i>=1;i--) {   //进行n-1轮冒泡排序 
		for(j=0;j<i;j++) {  //每轮进行i次比较 
			if(a[j]>a[j+1]) //相邻元素进行比较，如果大的在前面则交换 
				temp=a[j],a[j]=a[j+1],a[j+1]=temp;
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
/*插入排序法：
1，读入数据存放在a数组中；
2，从第2个数开始，取出当前作为待排序数，逐个与前面的数比较，若小于前面数，则前面数后移，当大于等于前面数时，插入当前空出的位置；
3，直到第n个数插入正确位置为止

查找：
while(true) {                //重复循环 
	cin>>num;                //输入要查找的数 
	find=0;
	for(int i=0;i<n;i++) {   //在数组中查找 
		if(a[i]==num){
			cout<<i<<" ";    //输出找到数的位置 
			find=1;
		}
	}
	if(find)
		cout<<"Fail!"<<endl; //查找不到 
}*/
