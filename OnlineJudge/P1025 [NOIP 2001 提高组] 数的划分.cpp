//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//
//	int n, k;
//
//	cin >> n >> k;
//
//	vector<vector<int>>dp(n+1,vector<int>(k+1));
//
//	// 代表前i个分成k部分的方案数 dp[i][k] /
//	
//	dp[0][1] = 1;
//
//	for (int i=1;i<=n;i++) {
//		for (int j = 1;j <= min(k,i);j++) {
//			dp[i][j] = dp[i-1][j-1] + dp[i-j][j];
//		}
//	}
//	cout << dp[n][k];
//}