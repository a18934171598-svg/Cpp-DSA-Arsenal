//#include<iostream>
//#include<vector>
//using namespace std;
//typedef long long ll;
//
//const ll mod = 1e9 + 7;
//
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	ll n;
//	cin >> n;
//	vector<ll> vc(n);
//	vector<ll> result(n);
//
//	for (int i = 0;i < n;i++) cin >> vc[i];
//	
//	for (int i = 1;i < n;i++) {
//		vc[i] = vc[i - 1] ^ vc[i]; 
//		//vc[i] %= mod;
//	}
//
//	
//	result[n-1] = 2;
//	
//	for (int i = n - 1;i >=2 ;i--) {
//		result[i - 1] = result[i] * 3 % mod;
//	}
//
//	ll sum = 0;
//	for (int i = 0;i <n-1 ;i++) {
//		sum += (vc[i] * result[i + 1] % mod);
//		sum %= mod;
//	}
//	sum += vc[n-1];
//
//	cout << sum%mod;
//}