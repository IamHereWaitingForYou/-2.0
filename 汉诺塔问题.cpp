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
		cout<<"���������ӵĸ�����"<<endl;
		cin>>n;
		cout<<"�ƶ��������£�"<<endl;
		move(n,'X','Y','Z');
		return 0; 
} 
