//#include<iostream>
//
//using namespace std;
//long long p;
//// ÒªÊ¹ÓÃÉ¶
//long long qpow(long long a,long long b) {
//	long long res = 1;
//	while (b>0) { //1101
//
//		if(b &1)
//		res = res* a;
//		res %= p;
//		a = a * a;
//		a %= p;
//		b >>= 1;
//	}
//
//	return res;
//}
//
//int main() {
//
//	long long a,b;
//	cin >>a>>b>> p;
//
//	cout<<a<<"^"<< b<<" mod "<<p << '=' << qpow(a, b)%p;
//}