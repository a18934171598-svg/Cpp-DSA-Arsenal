//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//
//    int n = 3;   // 物品数
//    int m = 4;   // 背包容量
//
//    vector<int> w = { 1, 2, 3 };  // 重量
//    vector<int> v = { 2, 3, 4 };  // 价值
//
//    vector<int> dp(m + 1, 0);   // dp[0..m]
//
//    vector<vector<int>>dp2(n+1,vector<int>(m+1));
//
//    for (int i = 1;i <= n;i++) {
//        for (int j = 1;j <= m;j++) {
//            // 需要更新
//            if (j < w[i]) {
//                dp2[i][j] = dp2[i-1][j];
//            }
//            else {
//                // 0空间自然是0价值,
//                dp2[i][j] = max(dp2[i - 1][j], dp2[i][j - w[i]] + v[i]);
//            }
//        }
//
//    }
//
//    // 一维dp
//    for (int i = 1;i <= n;i++) {
//        for (int j = w[i];j <= m;j++) { // 从何开始,不用更新
//            dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
//        }
//
//    }
//
//}