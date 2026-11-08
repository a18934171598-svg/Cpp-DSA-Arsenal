//#include<iostream>
//#include<vector>
//#include<climits>
//using namespace std;
//
//int main() {
//
//	int n,v;
//	cin >> v >> n;
//
//	vector<int>arr(n);
//	for (int i = 0;i < n;i++) {
//		cin >> arr[i]; // n件物品各自的空间
//	}
//
//	vector<int>dp(v+1,v); 
//	// dp问题 代表什么 代表 最小的剩余量,初始值都是满的
//
//	for (int i = 0;i < n;i++) {
//		for (int j = v;j >= 1;j--) {
//			if (j >= arr[i]) {
//				dp[j] = min(dp[j],dp[j-arr[i]]-arr[i]);
//
//			}
//
//		}
//
//	}
//	cout << dp[v];
//}