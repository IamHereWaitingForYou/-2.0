#include "pch.h"
#include "Ckey.h"
#include<iostream>
using namespace std;
Ckey::Ckey()
{
	a = "12345679qwe";
}
bool Ckey::Fir()
{
	int count1 = 0;
	for (string::iterator it = a.begin(); it != a.end(); it++)
	{
		count1++;
	}
	if (count1 >= 8)
		return true;
	else return false;
}

bool Ckey::Sec()
{
	
	int count2 = 0,count3=0;
	for (string::iterator it = a.begin(); it != a.end(); it++)
	{
		if (*it < '0' || (*it > '9'&&*it < 'A') || (*it > 'Z'&&*it < 'a') || (*it > 'z'))
			count2++;
		if ((*it >= 'A'&&*it <= 'Z') || (*it >= 'a'&&*it <= 'z'))
			count3++;
	}
	if (count2==0&&count3>0)
		return true;
	else
		return false;
}
bool Ckey::Thr()
{
	int count3 = 0;
	for (string::iterator it = a.begin(); it != a.end(); it++)
	{
		if (*it >= '0'&&*it <= '9')
		{
			count3++;
		}
	}
	if (count3 >= 2)
		return true;
	else
		return false;
}

string Ckey::Check()
{
	if (Fir()==true&&Sec()==true&&Thr()==true)
		return "valid password";
	else
		return "invalid password";
}
void Ckey::reSet(string b)
{
	a = b;
}
Ckey::~Ckey()
{
}
