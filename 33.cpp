#include <iostream>
using namespace std;
char s[500],t[500];
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>s[i]>>t[i];
	return 0;
}
/*
length()函数用于计算字符串的字节长度
它返回的是字符串占用的字节数
对于单字节字符，每个字符占用一个字节
对于多字节字符，每个字符可能占用多个字节 
*/ 
