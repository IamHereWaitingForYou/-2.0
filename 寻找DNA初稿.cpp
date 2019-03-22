#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int c[100];
	int b[100];
	int k=0;
	if(a.find("ATG")!=string::npos)
		{
		c[k]=a.find("ATG");
		k++;
		}
	int t=0;
	if(a.find("TAG")!=string::npos)
	{
		b[t]=a.find("TAG");
		t++;
	}
	if(a.find("TAA")!=string::npos)
	{
		b[t]=a.find("TAA");
		t++;
	}
	if(a.find("TGA")!=string::npos)
	{
		b[t]=a.find("TGA");
		t++;
	}
	if(k!=0&&t!=0)
	{
		for(int i=0;i<1;i++)
		{
			cout<<a.substr(c[0]+3,b[0]-c[0]);
		}
	}
	else
	cout<<"No find!"<<endl;
	return 0;
	
	return 0;
}
