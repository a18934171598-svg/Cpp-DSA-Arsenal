//#include<iostream>
//#include<climits>
//using namespace std;
//typedef long long ll;
//int m = 2146516019;
//
//ll qpow(ll a, ll b) {
//	ll res = 1;
//
//	while (b > 0) {
//		if (b & 1) res *= a;
//		res %= m;
//		a *= a;
//		a %= m;
//		b >>= 1;
//	}
//	return res;
//
//}
//
//int main(){
//	int p = 2146516019 - 2;
//	ll res = 0;
//	for (int i = 1;i <= 233333333;i++) {
//
//		res^=qpow(i,p);
//
//	}
//
//	cout << res%m;
//
//
//}