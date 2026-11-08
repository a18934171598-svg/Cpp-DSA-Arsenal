//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int>sq(n+1);
//	for (int i = 1;i <= n;i++)cin >> sq[i];
//	// 朴素dp
//	//vector<int>dp(n + 1, 1);
//
//	//for (int i = 1;i <= n;i++) {
//	//	for (int j = 1;j <= i - 1;j++) {
//	//		if (sq[j] <= sq[i]) {
//	//			dp[i] = max(dp[i], dp[j]+1);
//	//		}
//	//	}
//
//	//}
//	//
//	//// dp[i]代表什么呢 以他为结尾的最长上升子序列 最短是1
//	//int ans = 0;
//	//for (int i = 1;i <= n;i++) ans = max(ans,dp[i]);
//
//	//cout << ans;
//
//	// 贪心+二分优化
//	
//	vector<int>tail;
//
//	for (int i = 1;i <= n;i++) {
//		auto it = lower_bound(tail.begin(),tail.end(), sq[i]);
//
//		if (it == tail.end()) {
//			tail.push_back(sq[i]);
//		}
//		else {
//			*it = sq[i];
//		}
//
//	} // 怎么回溯呢 遍历一遍tail(可能有多个)
//  
//	// 贪心序列 记录每个元素对应的tail位置
//	cout << tail.size();
//
//}
