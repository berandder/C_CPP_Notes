#include <iostream>
using namespace std;
const int maxn=100001;
int main() {
	float temp,a[maxn];
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=n-1;i>=1;i--) {   //����n-1��ð������ 
		for(j=0;j<i;j++) {  //ÿ�ֽ���i�αȽ� 
			if(a[j]>a[j+1]) //����Ԫ�ؽ��бȽϣ���������ǰ���򽻻� 
				temp=a[j],a[j]=a[j+1],a[j+1]=temp;
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
/*�������򷨣�
1���������ݴ����a�����У�
2���ӵ�2������ʼ��ȡ����ǰ��Ϊ���������������ǰ������Ƚϣ���С��ǰ��������ǰ�������ƣ������ڵ���ǰ����ʱ�����뵱ǰ�ճ���λ�ã�
3��ֱ����n����������ȷλ��Ϊֹ

���ң�
while(true) {                //�ظ�ѭ�� 
	cin>>num;                //����Ҫ���ҵ��� 
	find=0;
	for(int i=0;i<n;i++) {   //�������в��� 
		if(a[i]==num){
			cout<<i<<" ";    //����ҵ�����λ�� 
			find=1;
		}
	}
	if(find)
		cout<<"Fail!"<<endl; //���Ҳ��� 
}*/
