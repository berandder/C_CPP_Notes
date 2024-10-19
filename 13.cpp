#include <iostream> 
using namespace std;
int main()  {
/*  int n;
	cout<<"n="<<endl;
	cin>>n;
	if(n<0)
	cout<<"注意负数！"<<endl;
	else
	cout<<n<<endl;
	
	int n;
	cout<<"n="<<endl;
	cin>>n;
	if(n%2==0)
	cout<<n<<"是偶数。"<<endl;
	else
	cout<<n<<"是奇数。"<<endl;
	
	int n;
	cout<<"n="<<endl;
	cin>>n;
	if(n<=80)
	cout<<"欢迎你加入音乐社"<<endl;
	else
	cout<<"非常欢迎你加入音乐社"<<endl;
	
	int n;
	float a,b;
	cout<<"n="<<endl;
	cin>>n;
	a=n*3*0.88,b=(n-n/8)*3;
    if(a<b)
    cout<<"大洋商城"<<endl;
    else
    cout<<"百汇商厦"<<endl;  */
    
    int n,l,t,p;
    cout<<"n="<<endl;
    cin>>n;
    if(n<100000) {
    cout<<"梨树："<<n/500<<"棵"<<endl;
    }
    else {
    l=n*0.3/500,t=n*0.5/600,p=n*0.2/800;
    cout<<"梨树："<<l<<"棵"<<endl<<"桃树："<<t<<"棵"<<endl<<"苹果树："<<p<<"棵"<<endl;
	}	
	return 0;
}

/*  if（表达式）语句
	功能：当条件成立即表达式为真时，执行“语句”，否则执行if语句下方的语句。
	
	if（表达式）
		语句1;
	else
		语句2;
	功能：当条件成立即表达式值为真时，执行“语句1”，否则执行“语句2”。
	
	关系运算符表达式：
	不等于：!=
	优先级别： 
	> < >= <= 高
	== !=     低
	
	用数值1代表“真”，用数值0代表“假”。
	
	a>b            0
	a+b>b+c        0
	(a==3)>=(b==5) 1
	'a'<'b'        1
	(a>b)>(b<c)    0
	*/
