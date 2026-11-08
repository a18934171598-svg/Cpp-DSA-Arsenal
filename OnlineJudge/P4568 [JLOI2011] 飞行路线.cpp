//#include<iostream>
//#include<tuple>
//#include<vector>
//#include<queue>
//#include<climits>
//using namespace std;
//
//typedef long long ll;
//
//
//
//void dijkstra(int st,vector<vector<int>>&dist,int k,int n,vector<vector<pair<int,int>>>&G) {
//
//    
//    priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<tuple<ll, int, int>>> q;
//    
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
//        if (d > dist[s][u]) continue;
//
//        for (auto& elm : G[u]) {
//            int v = elm.first;
//            int w = elm.second;
//
//
//            if (dist[s][v] > dist[s][u] + w) {
//                dist[s][v] = dist[s][u] + w;
//                q.emplace(make_tuple(dist[s][v], v, s));
//            }
//            // s<k ,使用特权
//            if (s < k && dist[s + 1][v]>d) {
//                dist[s + 1][v] = d;
//                q.emplace(make_tuple(dist[s + 1][v], v, s + 1));
//            }
//
//        }
//
//
//    }
//}
//
//
//int main() {  
//    
//    int n,m, k;  // 无向边准备两个m的空间
//
//    cin >> n >> m >> k;
//
//    int s, t;
//    cin >> s >> t;
//
//    // 链式前向星
//    vector<vector<pair<int, int>>> G(n);
//
//    vector<vector<int>>dist(k + 1, vector<int>(n,INT_MAX));
//
//    for (int i = 1;i <= m;i++) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        G[a].emplace_back(b,c);
//        G[b].emplace_back(a,c);
//
//    }
//
//    dijkstra(s,dist,k,n,G);
//
//    // k+1层
//    int min = INT_MAX;
//    for (int i = 0;i <= k;i++) if (min > dist[i][t]) min = dist[i][t];
//
//    cout << min;
//
//}