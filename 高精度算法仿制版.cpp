#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct Sore
{
	int len;
	int num[100000];
} ;
Sore a,b,w;
string c,d;
void Scan_Sore()
{
	cin>>c;
	cin>>d;
	a.len=c.length();
	b.len=d.length();
	for(int i=0;i<a.len;i++)a.num[a.len-i]=c[i]-'0';
	for(int i=0;i<b.len;i++)b.num[b.len-i]=d[i]-'0';
	//ÄæÐò´æ´¢ 
}
void Plusmether()
{
	w.len=max(a.len,b.len);
	for(int i=1;i<=w.len;i++)
	{
		w.num[i]+=a.num[i]+b.num[i];
		w.num[i+1]=w.num[i]/10;
		w.num[i]%=10;
	}
	if(w.num[w.len+1]!=0)w.len++;
} 
int main()
{
Scan_Sore();
Plusmether();
for(int i=w.len;i>0;i--)
cout<<w.num[i]<<" ";
		return 0;
}
