//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//const int N = 100005;
//vector<int> g[N];
//// dp[u][0]不选u  dp[u][1]选u
//long long dp[N][2];
//int val[N];  // 每个点权值
//
//// 树形DP后序遍历
//void dfs(int u, int fa) {
//    // 初始化
//    dp[u][1] = val[u];
//    dp[u][0] = 0;
//
//    for (int v : g[u]) {
//        if (v == fa) continue;
//        dfs(v, u);
//        // 转移
//        dp[u][1] += dp[v][0];
//        dp[u][0] += max(dp[v][0], dp[v][1]);
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) cin >> val[i];
//    for (int i = 1; i < n; ++i) {
//        int u, v;
//        cin >> u >> v;
//        g[u].push_back(v);
//        g[v].push_back(u);
//    }
//    dfs(1, -1);  // 根节点1，无父节点
//    cout << max(dp[1][0], dp[1][1]) << endl;
//    return 0;
//}