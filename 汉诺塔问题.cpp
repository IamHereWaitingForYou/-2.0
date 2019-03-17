#include<iostream>
#include<cstring>
using namespace std;
void move(int n,char x,char y,char z)
{
	if(n==1)
	cout<<x<<"-->"<<z<<endl;
	else 
	{
		move(n-1,x,z,y);
		cout<<x<<"-->"<<z<<endl;
		move(n-1,y,x,z);
	}
}
int main()
{
		int n;
		cout<<"请输入盘子的个数："<<endl;
		cin>>n;
		cout<<"移动步骤如下："<<endl;
		move(n,'X','Y','Z');
		return 0; 
} 
