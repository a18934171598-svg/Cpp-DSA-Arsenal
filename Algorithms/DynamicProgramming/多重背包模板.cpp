//#include<iostream>
//#include<vector>
//using namespace std;
//
//const int MOD = 1000007;
//
//int main() {
//
//	int n, m;  // m盆 
//	cin >> n >> m;
//
//	vector<int>flower(n + 1);
//
//	for (int i = 1;i <= n;i++) {
//		cin >> flower[i];
//	}
//
//	// 多重背包,分组背包 
//
//	//vector<vector<int>>dp(n + 1, vector<int>(m + 1));
//
//	//// dp[][] 表示i 
//
//	//dp[0][0] = 1;
//	//for (int i = 1;i <= n;i++)dp[i][0] = 1;
//	///*dp[0][j >0] = 0;*/
//
//	//for (int i = 1;i <= n;i++) {
//	//	for (int j = 1;j <= m;j++) {
//	//		for (int k = 0;k <= min(j, flower[i]);k++) {
//	//			dp[i][j] += dp[i - 1][j - k];
//	//			dp[i][j] %= MOD;
//	//		}
//	//	}
//
//	//}
//
//	//cout << dp[n][m];
//
//	// 一维优化
//
//	// dp[m] 代表m的最多方案
//
//	// 初始
//	vector<int>dp(m+1);
//	dp[0] = 1;
//
//	for (int i = 1;i <= n;i++) {
//		for (int j = m;j>=1;j--) {
//			// 选择几个i
//			for (int k = 1;k<=min(j,flower[i]);k++) {
//				dp[j] += dp[j-k];
//				dp[j] %= MOD;
//			}
//		}
//	}
//	cout << dp[m];
//}