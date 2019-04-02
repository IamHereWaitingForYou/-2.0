#include<iostream>
#include<stdio.h>
using namespace std;
struct CAD
{
	int b;
	int e;
};
int main()
{
	CAD ins,a[200];
	int n;
while(scanf("%d",&n)&&n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i].b;
		cin>>a[i].e;
	}
	for(int i=0;i<n;i++)

	for(int j=i;j<n;j++)
	{
		if(a[i].e>a[j].e)
		{
			ins=a[i];
			a[i]=a[j];
			a[j]=ins;
		}
	}
	int end,count=1;
	end=a[0].e;
	for(int i=1;i<n;i++)
	{
		if(a[i].b>=end)	
		{
		count++;
		end=a[i].e;
		}
	}
	cout<<count<<endl;
}
	return 0;
}
