#include "pch.h"
#include <iostream>
#include<string>
#include"Ckey.h"
using namespace std;
int main()
{
	Ckey ky;
	cout <<"默认密码检测："<< ky.Check()<<endl;
	string c;
	cout << "请输入要检测的密码";
	cin >> c;
	ky.reSet(c);
	cout << "重置后密码检测：" << ky.Check() << endl;
	Ckey ky1;
	cout << "请输入第二个密码：" << endl;
	cin >> c;
	ky1.reSet(c);
	cout << "密码2检测：" << ky1.Check() << endl;
	return 0;
}