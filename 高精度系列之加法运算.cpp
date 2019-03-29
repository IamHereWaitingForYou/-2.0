#include <iostream>
#include <cstring>
using namespace std;
 
struct HugeInt{
	int len;
	int num[100001];
}; 
 
HugeInt a, b, w;        //w为结果 
char c[100001], d[100001];
 
void Scan_HugeInt() {   //读入两个大整数 
	cin >> c;
	cin >> d;
	a.len = strlen(c); //strlen求串长 
	b.len = strlen(d);
	for(int i=0; i<a.len; i++) a.num[a.len - i] = c[i] - '0'; //逆序存储 
	for(int i=0; i<b.len; i++) b.num[b.len - i] = d[i] - '0';
}
 
void Plus() {
	w.len = max(a.len, b.len);           //num每一位是0，长度取max不影响加法 
	for(int i=1; i<=w.len; i++) {
		w.num[i] += a.num[i] + b.num[i]; 
		w.num[i+1] += w.num[i] / 10;    //处理进位
		w.num[i] %= 10;                 //处理当前位 保证<10 
	}
	if(w.num[w.len + 1] != 0) w.len ++;  //加法最多有可能会多出一位 
}
 
int main() {
	Scan_HugeInt();
	Plus();
	for(int i=w.len; i>=1; i--) cout << w.num[i]; //倒序存储 倒序输出 
	cout << endl;
	return 0;
}

