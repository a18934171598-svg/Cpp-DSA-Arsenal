//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n;
//	cin >> n;
//
//	vector<int> sq1(n + 1);
//	vector<int> sq2(n + 1);
//
//	for (int i = 1;i <= n;i++) {
//		cin >> sq1[i];
//	}
//	for (int i = 1;i <= n;i++) {
//		cin >> sq2[i];
//	}
//
//	vector<vector<int>>dp(n+1,vector<int>(n+1));
//
//	for (int i = 1;i <= n;i++) {
//		for (int j = 1;j <= n;j++) {
//			if (sq1[j] == sq2[i]) {
//				// 匹配
//				dp[i][j] = dp[i-1][j-1]+1;
//			}else 
//			dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//		}
//	}
//
//	cout << dp[n][n]<<' ';
//
//	// 回溯输出最长公共子序列 
//	vector<int>res;
//	int i = n, j = n; // j是横的
//	while (i > 0 && j > 0) {
//		if (sq1[j] == sq2[i]) {
//			res.push_back(sq1[j]);
//			i--;
//			j--;
//		}
//		// 其实相等可以跑出所有路径
//		else if(dp[i-1][j]>=dp[i][j-1]) {
//			// 选择往上跑
//			i--;
//		}
//		else {
//			j--; 
//		}
//	}
//	reverse(res.begin(),res.end());
//	cout << '\n' << "序列是:";
//	for (int& elm:res) {
//		cout << elm<<' ';
//	}
//
//	// 一维优化 选择更长的
//	//vector<int>dp(n + 1);
//	//vector<int>storage(n + 1);
//
//	//for (int i = 1;i <= n;i++) { // 较短的
//	//	for (int j = 1;j <= n;j++) {
//	//		if (sq1[j] == sq2[i]) {
//	//			dp[j] = storage[j-1]+1;
//	//		}
//	//		else {
//	//			dp[j] = max(dp[j],dp[j-1]);
//	//		}
//	//		storage[j] = dp[j];
//	//	}
//	//	
//	//}
//
//	//cout << dp[n];
//	// 一维可以回溯吗,回溯最长公共子序列
//
//	// 转化成LIS O(nlogn)
//	//vector<int>pos(n + 1);
//	//for (int i = 1;i <= n;i++) {
//	//	pos[sq1[i]] = i;
//	//}
//	//for (int i = 1;i <= n;i++) {
//	//	sq2[i] = pos[sq2[i]];
//	//}
//
//	//// O(nlogn)
//	//// 求sq2的LIS
//
//	//vector<int>tail;
//
//	//for (int i = 1;i <= n;i++) {
//	//	auto it = lower_bound(tail.begin(), tail.end(), sq2[i]);
//
//	//	if (it == tail.end()) {
//	//		tail.push_back(sq2[i]);
//	//	}
//	//	else {
//	//		*it = sq2[i];
//	//	}
//
//	//}
//
//	//cout << tail.size();
//}