//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//struct goods {
//	int value;
//	int time;
//};
//
//int main() {
//
//	int n; // 物品数
//	int m; // 背包容量   
//
//	cin >> m >> n;
//	vector<goods> vc_goods(n+1);
//	for (int i = 1;i <= n;i++) {
//		cin >> vc_goods[i].time>>vc_goods[i].value;
//	}
//	
//	vector<int>dp(m+1); // 0
//
//	for (int i = 1;i <= n;i++) {
//	// 正序	是无限 倒序是01
//		for (int j = m;j >= 1;j--) {
//			
//			if (j >= vc_goods[i].time) {
//				dp[j] = max(dp[j], dp[j - vc_goods[i].time] + vc_goods[i].value);
//			}
//		}
//		
//	}
//	cout << dp[m];
//	//cout << dp[n][m];
//}