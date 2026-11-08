//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int n, m;  // n组，背包容量m
//    cin >> n >> m;
//
//    vector<int> dp(m + 1, 0);
//
//    for (int i = 1; i <= n; i++) {  // 枚举每一组
//        int k;  // 这一组有k个物品
//        cin >> k;
//
//        vector<int> temp = dp;  // 关键：复制一份，保证每组只选一个
//
//        for (int j = 0; j < k; j++) {  // 枚举组内每个物品
//            int w, v;
//            cin >> w >> v;
//
//            // 01背包逆序
//            for (int c = m; c >= w; c--) {
//                temp[c] = max(temp[c], dp[c - w] + v);
//            }
//        }
//
//        dp = temp;  // 更新答案
//    }
//
//    cout << dp[m] << endl;
//    return 0;
//}