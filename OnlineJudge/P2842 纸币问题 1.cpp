//#include<iostream>
//#include<vector>
//using namespace std;
//
//typedef long long ll;
//
//int main() {
//	ll n, w;  
//	cin >> n >> w;  // n表示物种数 w表示背包量
//
//	vector<int> vc_money(n);
//
//	vector<int> dp(w+1,1e9);
//	dp[0] = 0;  // 0元需要0张
//
//	for (int& elm : vc_money) {
//		cin >> elm;
//	}
//
//	for (int i = 0;i < n;i++) {
//		for (int j = vc_money[i];j <= w;j++) {
//			//if(dp[j]==0)  // 想让第一个接触的底层为该有的值
//			//dp[j] = j/vc_money[i];  // 不正确不一定及时会拖累
//			//else 
//			dp[j] = min(dp[j], dp[j - vc_money[i]] + 1);
//		}
//	}
//
//
//	cout << dp[w];
//}