//#include<vector>
//#include<iostream>
//#include<climits>
//using namespace std;
//
//int main() {
//	int n,w;
//	cin >> n >> w;
//	vector<int> money(n+1);
//	for (int i = 1;i <= n;i++) {
//		cin >> money[i]; // 面额
//	}
//
//	//vector<vector<long long>>dp2(n+1,vector<long long>(w+1));
//
//	//for (int i = 1;i <= w;i++) {
//	//	dp2[0][i] = INT_MAX;
//	//	// dp[i][0]默认是0
//	//}
//
//	//for (int i = 1;i <= n;i++) {
//
//	//	for (int j = 1;j <= w;j++) {
//	//		if (j < money[i]) {
//	//			dp2[i][j] = dp2[i - 1][j];
//	//		}
//	//		else {
//	//			dp2[i][j] = min(dp2[i-1][j],dp2[i][j-money[i]]+1);
//	//		}
//	//	}
//	//}
//
//	/*cout << dp2[n][w];*/
//
//	// 优化
//	vector<long long> dp(w+1,INT_MAX);
//	dp[0] = 0;
//
//	for (int i = 1;i <= n;i++) {
//		for (int j = money[i];j <= w;j++) {
//			dp[j] = min(dp[j], dp[j - money[i]] + 1);
//		}
//
//	}
//	cout << dp[w];
//}