//#include <iostream>
//#include<queue>
//
//#include<tuple>
//
//using namespace std;
//typedef long long ll;
//const int N = 10005, K = 15;
//const ll INF = 1e18;
//
//// 链式前向星
//vector<pair<int, int>> G[N]; // 每个元素是pair 
//// dist[用了s次][点u]
//ll dist[K][N]; 
//int n, m, k;
//
//void dijkstra(int st) {
//    // 初始化无穷大 k+1层 
//    for (int s = 0; s <= k; s++)
//        for (int i = 1; i <= n; i++)
//            dist[s][i] = INT_MAX;
//
//    // 小根堆：{距离, 点, 已用次数}
//    priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<>> q;
//    // dist[s][u] s是什么 u是什么
//    // s是使用特权次数,u是走到哪里了
//    // dist[][] 含义: 已经使用的s个到v的最短路径
//    dist[0][st] = 0;
//    q.emplace(0, st, 0);
//
//    while (!q.empty()) {
//        tuple<ll, int, int> t = q.top();
//        int d = get<0>(t);
//        int u = get<1>(t);
//        int s = get<2>(t);
//
//        q.pop();
//        //= true;
//        if (d > dist[s][u]) continue;
//
//        // 松弛更新选中的周围的
//        for (auto& elm : G[u]) {
//            int v = elm.first;
//            int w = elm.second;
//            // 同层转移
//            if (dist[s][v] > dist[s][u] + w) {
//                dist[s][v] = dist[s][u] + w;
//                q.emplace(make_tuple(dist[s][v],v,s));
//            }
//            // s<k ,使用特权
//            if (s < k && dist[s + 1][v]>d) {
//                dist[s + 1][v] = d;
//                q.emplace(make_tuple(dist[s+1][v],v,s+1));
//            }
//
//        }
//
//
//    }
//}
//
//int main() {
//    cin >> n >> m >> k;
//    for (int i = 0; i < m; i++) {
//        int u, v, w;
//        cin >> u >> v >> w;
//        G[u].emplace_back(v, w);
//        G[v].emplace_back(u, w);
//    }
//    int s, t; cin >> s >> t;
//    dijkstra(s);
//
//    // 答案：0~k次中到终点t的最小值
//    ll ans = INF;
//    for (int i = 0; i <= k; i++) ans = min(ans, dist[i][t]);
//    cout << ans << endl;
//    return 0;
//}