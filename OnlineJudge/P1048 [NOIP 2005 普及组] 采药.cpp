//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//struct goods {
//	int val;
//	int time;
//};
//
//int main() {
//	int m,t;
//	cin >> t >> m;
//
//	// 每一件物品,每一个容量
//
//	vector<goods> vc_goods(m);
//	
//	for (int i = 0;i < m;i++) {
//		cin >> vc_goods[i].time>>vc_goods[i].val;
//	}
//
//	vector<int>dp(t+1);
//	
//
//
//	// 遍历每一件物品
//	for (int i = 0;i < m;i++) {  // 逐个商品
//		// 每一个容量
//
//		for (int j = t;j>=vc_goods[i].time;j--) {
//			dp[j] = max(dp[j], dp[j - vc_goods[i].time] + vc_goods[i].val);
//		}
//
//	}
//
//	cout << dp[t];
//}