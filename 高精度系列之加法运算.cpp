#include <iostream>
#include <cstring>
using namespace std;
 
struct HugeInt{
	int len;
	int num[100001];
}; 
 
HugeInt a, b, w;        //wΪ��� 
char c[100001], d[100001];
 
void Scan_HugeInt() {   //�������������� 
	cin >> c;
	cin >> d;
	a.len = strlen(c); //strlen�󴮳� 
	b.len = strlen(d);
	for(int i=0; i<a.len; i++) a.num[a.len - i] = c[i] - '0'; //����洢 
	for(int i=0; i<b.len; i++) b.num[b.len - i] = d[i] - '0';
}
 
void Plus() {
	w.len = max(a.len, b.len);           //numÿһλ��0������ȡmax��Ӱ��ӷ� 
	for(int i=1; i<=w.len; i++) {
		w.num[i] += a.num[i] + b.num[i]; 
		w.num[i+1] += w.num[i] / 10;    //�����λ
		w.num[i] %= 10;                 //����ǰλ ��֤<10 
	}
	if(w.num[w.len + 1] != 0) w.len ++;  //�ӷ�����п��ܻ���һλ 
}
 
int main() {
	Scan_HugeInt();
	Plus();
	for(int i=w.len; i>=1; i--) cout << w.num[i]; //����洢 ������� 
	cout << endl;
	return 0;
}

