//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//typedef long long ll;
//
//struct node {
//	ll lose, win, use;
//};
//
//int main() {
//	ll n, x;
//	cin >> n >> x;
//
//	vector<node> vc(n+1);
//
//	for (int i=1;i<=n;i++){
//		cin >> vc[i].lose >> vc[i].win >> vc[i].use;
//	}
//
//	//vector<vector<ll>> bag(n+1);
//
//	//for (int i = 0;i <= n;i++) {
//	//	bag[i].resize(x+1);
//	//}
//
//	//// 遍历每一个对手 01 背包  有了i-1二维dp不用顾忌
//	//// 方便理解不是覆盖式
//	//for (int i = 1;i <= n;i++) {
//	//	// 遍历每一份容量
//	//	for (int j =0;j <=x;j++) {
//	//		if (j < vc[i].use) {
//	//			bag[i][j] = bag[i-1][j] + vc[i].lose;
//	//		}
//	//		else {
//	//			bag[i][j] = max(bag[i-1][j] + vc[i].lose,
//	//			bag[i-1][j - vc[i].use] + vc[i].win);
//	//		}
//	//	}
//
//	//}
//
//	//cout << 5 * bag[n][x];
//
//
//	// 方式2  没有了i-1要顾及了 01 背包
//	// 
//	vector<ll>dp(x+1);
//	for (int i = 1;i <= n;i++) {
//		for (int j = x;j >= 0;j--) {
//			if (j < vc[i].use) {
//				dp[j] = dp[j] + vc[i].lose;
//			}
//			else {  // 防止越界于0
//				dp[j] = max(dp[j] + vc[i].lose, dp[j - vc[i].use] +
//					vc[i].win);
//			}
//		}
//
//	}
//
//	cout << 5*dp[x];
//}
