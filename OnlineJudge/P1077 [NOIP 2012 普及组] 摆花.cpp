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
//	vector<int>flower(n+1);
//
//	for (int i = 1;i <= n;i++) {
//		cin >> flower[i];
//	}
//
//	// 多重背包 
//	
//	//vector<vector<int>>dp(n+1,vector<int>(m+1));
//
//	//// dp[][] 表示i 
//
//	//dp[0][0] = 1;
//	//for (int i = 1;i <= n;i++)dp[i][0]=1;
//	///*dp[0][j >0] = 0;*/
//
//	//for (int i = 1;i <= n;i++) {
//	//	for (int j = 1;j <= m;j++) {
//	//		// 继承
//	//		dp[i][j] = dp[i-1][j];
//
//	//		for (int k = 1;k<=flower[i];k++) {
//	//			if (j >= k) {
//	//				dp[i][j] += dp[i-1][j-k];
//	//				dp[i][j] %= MOD;
//	//			}
//	//		}
//	//	}
//
//	//}
//
//	//cout << dp[n][m];
//
//	//vector<int> dp(m + 1);
//	//dp[0] = 1;
//	//for (int i = 1;i <= n;i++) {
//	//	for (int j = m;j >= 1;j--) {
//	//		// 自动继承
//	//		for (int k = 1;k <= min(j, flower[i]);k++) {
//	//			dp[j] += dp[j-k];
//	//			dp[j] %= MOD;
//	//		}
//	//	}
//	//}
//
//	//cout << dp[m];
//
//	// 二进制优化打包+标准01背包代码
//	// n种花
//	/*struct new_flower {
//		int weight;
//		new_flower(int a) :weight(a){};
//	};
//	vector<new_flower>zero_one_items;
//	for (int i = 1;i <= n;i++) {
//		int remaining_count = flower[i];
//		for (int k = 1;k <= remaining_count;k *= 2) {
//			zero_one_items.emplace_back(k);
//			remaining_count -= k;
//		}
//		if (remaining_count > 0) {
//			zero_one_items.emplace_back(remaining_count);
//		}
//	}
//
//	vector<int>dp(m+1);
//	for (int i = 0;i < zero_one_items.size();i++) {
//
//		for (int j = m;j >= zero_one_items[i].weight;j--) {
//			dp[j] =(dp[j]+dp[j- zero_one_items[i].weight])%MOD;
//		}
//
//	}
//	cout << dp[m];*/
//}