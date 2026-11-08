//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int n = 3;   // 物品数
//    int m = 4;   // 背包容量
//
//    vector<int> w = { 1, 2, 3 };  // 重量
//    vector<int> v = { 2, 3, 4 };  // 价值
//
//    vector<int> dp(m + 1, 0);   // dp[0..m]
//
//    // 01背包模板 一维
//    // dp2[i-1][j]相当于dp[j] dp[i-1][j-w[i]]相当于dp[j-w[i]]
//    for (int i = 0; i < n; ++i) {
//        // 重点：必须倒着遍历！
//        for (int j = m; j >= w[i]; --j) {
//            // 因为不用更新,所以>=w[i]就可以了
//            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
//        }
//    }
//
//    cout << dp[m] << endl;  // 输出答案
//
//    // 二维
//    vector<vector<int>>dp2(n+1,vector<int>(m+1));
//    for (int i=1;i<=n;i++) {
//        for (int j = 1;j <= m;j++) { // 因为要更新,所以从1起
//            if (j < w[i]) {
//                dp2[i][j] = dp2[i - 1][j];
//            }
//            else {
//                dp2[i][j] = max(dp2[i-1][j],dp2[i-1][j-w[i]]+v[i]);
//            }
//        }
//    }
//
//    return 0;
//}