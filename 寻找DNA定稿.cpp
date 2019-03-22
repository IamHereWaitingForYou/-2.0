#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string a;
	cout<<"Enter a genome string:";
	//a="TTATGTTTTAAGGATGGGGCGTTAGTT";
	cin>>a;
	int c[100];
	int b[100];
	int k=0;
	int t=0;
	while(a.find("ATG")!=string::npos)
	{
	if(a.find("ATG")!=string::npos)
		{
		c[k]=a.find("ATG");
		a[c[k]]='1';
		a[c[k]+1]='1';
		a[c[k]+2]='1';
		k++;
		}
	}
	int q=k;
	while(q--)
	{
	if(a.find("TAG")!=string::npos)
	{
		b[t]=a.find("TAG");
		a[b[t]]='1';
		a[b[t]+1]='1';
		a[b[t]+2]='1';
		t++;
	}
	if(a.find("TAA")!=string::npos)
	{
		b[t]=a.find("TAA");
		a[b[t]]='1';
		a[b[t]+1]='1';
		a[b[t]+2]='1';
		t++;
	}
	if(a.find("TGA")!=string::npos)
	{
		b[t]=a.find("TGA");
		a[b[t]]='1';
		a[b[t]+1]='1';
		a[b[t]+2]='1';
		t++;
	}
	}
	sort(b,b+t);
	if(k!=0&&t!=0)
	{
		for(int i=0;i<t;i++)
		{
			cout<<a.substr(c[i]+3,b[i]-c[i]-3)<<endl;
		}
		
	}
	else
	cout<<"no gene is found"<<endl;
	return 0;
	
}
