//#include<iostream>
//#include<vector>
//#include<queue>
//#include<climits>
//using namespace std;
//
//struct Edge {    
//    int to,w;
//    Edge(int a,int b):to(a),w(b){};
//};
//
//bool SPFA(int start, int n, vector<vector<Edge>>& adj,vector<int>& dist) {
//    queue<int>q;
//    vector<int>ctn(n, 0); // 每个点入队次数 超过n-1及时退出
//    vector<bool>inq(n, false); // 每个点是否已入队
//    
//    dist.resize(n, INT_MAX);
//
//    dist[start] = 0;
//
//    q.push(start);
//    inq[start] = true;
//    ctn[start] = 1; // 入队一次,主结点也可能是负权环的一部分
//
//    // 与Bellman保持同一个动作
//    // 刚需版的Bellman
//    // 重复入队的情况入一次就好了,之前入过就不再进入
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//        
//        inq[cur] = false;
//
//        // 遍历出边
//
//        for (auto& e : adj[cur]) {
//            // 入队是否
//            // 不需要判断是否 INT_MAX,因为已经是更新过的了
//            if (dist[e.to] > dist[cur] + e.w) {
//                // 更新的才要加入
//                dist[e.to] = dist[cur] + e.w;
//               
//                if (inq[e.to] == false) {
//                    inq[e.to] = true;
//                    q.push(e.to);
//                    // 记录入队次数
//                    // 入队一次代表有一条边在它后面 最多n-1条边
//                    // 是负权环的话优化不断 循环往复
//                    ctn[e.to]++;
//                    if (ctn[e.to] == n-1) return false;
//                }
//
//            }
//        }
//    }
//    return true;
//}
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//
//    int T,n,m;
//    cin >> T;
//    vector<bool>answer(T,false);
//
//    for (int i = 1;i <= T;i++) {
//        vector<vector<Edge>> adj;  // 边集
//        cin >> n >> m;
//        adj.resize(n+1);
//
//        bool isOne = false,isNegative=false;
//        if (n == 1) isOne = true;
//
//
//        for (int j = 1;j <= m;j++) {
//            int v, w, u;
//            cin >> u >> v>> w;
//
//            if (isOne&&w < 0) {
//                isNegative= true;
//            }
//
//            adj[u].emplace_back(v,w);
//
//            if (w >= 0)
//                adj[v].emplace_back(u,w);
//        }
//
//        vector<int>dist;
//        if (isOne) {
//            if (isNegative) { answer[i - 1] = false;continue; }
//            else { answer[i - 1] = true;continue; }
//        }
//        
//
//
//        answer[i-1] = SPFA(1, n+1, adj, dist);
//    }
//
//    for (bool elm : answer) {
//        if (elm) cout << "NO\n";
//        else cout << "YES\n";
//    }
//
//
//}