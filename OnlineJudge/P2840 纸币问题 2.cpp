//#include<iostream>   
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//const int mod = 1e9 + 7;
//
//int main() {
//	long long n, m;
//	cin >> n >> m;
//
//	vector<long long> vc(n);
//	
//	for (long long& elm : vc) {
//		cin >> elm;
//	}
//	//sort(vc.begin(), vc.end(), greater<long long>());
//
//	vector<long long> dp(m+1,0);
//	// ±æ…Ì «0
//	dp[0] = 1;
//
//	for (long long j = 1;j <= m;j++) {
//		for (long long i = 0;i < n;i++) {
//			if (j - vc[i] >= 0)
//			{
//				dp[j] += dp[j - vc[i]];
//				dp[j] %= mod;
//			}
//			
//		}
//	}
//	dp[m] = dp[m] % (1000000000+7);
//	cout << dp[m];
//}