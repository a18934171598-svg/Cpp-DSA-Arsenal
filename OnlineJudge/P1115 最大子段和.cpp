//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> vc(n);
//	vector<int> dp(n);   
//	
//	// 以i为结尾的连续段的最大值
//
//	for (int& elm : vc) {
//		cin >> elm;
//	}
//	dp[0] = vc[0];
//	int ans = vc[0];
//
//	for (int i = 1;i < n;i++) {
//		dp[i] = max(vc[i], dp[i - 1] + vc[i]);
//		ans = max(ans, dp[i]);
//	}
//
//	//sort(dp.begin(), dp.end(), greater<int>());
//
//	cout << ans;
//}
//
//
