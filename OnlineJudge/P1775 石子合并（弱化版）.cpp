//#include<iostream>
//#include<vector>
//#include<climits>
//using namespace std;
//
//int main() {
//
//	int n;
//	cin >> n ;
//
//	vector<int> stones(n+1);
//	for (int i = 1;i <= n;i++) {
//		cin >> stones[i];
//	}
//
//	vector<vector<int>>dp(n+1,vector<int>(n+1));
//
//	vector<int> prefixSum(n + 1, 0);
//	for (int i = 1;i <= n;i++) {
//
//		prefixSum[i] = prefixSum[i - 1] + stones[i];
//	}
//	// 公式 pre[b]-pre[a-1] = [a,b]
//	
//	// dp[i][j] 从第i堆到第j堆合并为一堆的最小代价
//
//
//	for (int len = 2;len <= n;len++) {
//		for (int i = 1;i + len - 1 <= n;i++) {
//			// 所有的区间
//			int j = i + len - 1;
//			// 分割点位
//			dp[i][j] = INT_MAX;
//			for (int k = i;k <j;k++) {
//				dp[i][j] = min(dp[i][j],dp[i][k]+dp[k+1][j]);
//			}
//			dp[i][j] += prefixSum[j] - prefixSum[i - 1];
//		}
//
//	}
//	cout << dp[1][n];
//}