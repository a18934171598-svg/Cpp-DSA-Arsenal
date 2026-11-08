//#include<iostream>
//#include<queue>
//
//
//using namespace std;
//
//struct Edge{
//	int to;
//	int w;
//	Edge(int t,int wt) :to(t), w(wt) {};
//};
//
//// 边集
////bool SPFA(int n, int start, vector<vector<Edge>>& adj, vector<int>& dist)
///*
//{
//    vector<int> cnt(n, 0);
//    vector<bool> inq(n, false);
//    dist.assign(n, INT_MAX);
//
//    queue<int> q;
//    dist[start] = 0;
//    q.push(start);
//    inq[start] = true;
//    cnt[start] = 1;
//
//    while (!q.empty())
//    {
//        int u = q.front();
//        q.pop();
//        inq[u] = false;
//
//        for (Edge& e : adj[u])
//        {
//            int v = e.to;
//            int w = e.w;
//            if (dist[u] != INF && dist[v] > dist[u] + w)
//            {
//                dist[v] = dist[u] + w;
//                if (!inq[v])
//                {
//                    q.push(v);
//                    inq[v] = true;
//                    cnt[v]++;
//                    // 入队次数>=顶点数，存在负权环
//                    if (cnt[v] >= n)
//                        return false;
//                }
//            }
//        }
//    }
//    return true;
//}
//*/
//bool SPFA(int start,int n,vector<vector<Edge>>&adj,vector<int>&path,vector<int>&dist) {
//    queue<int>q;
//    vector<int>ctn(n,0); // 每个点入队次数 超过n-1及时退出
//    vector<bool>inq(n, false); // 每个点是否已入队
//    path.resize(n, -1);
//    dist.resize(n,INT_MAX);
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
//        // 消除记录
//        inq[cur] = false;
//
//        // 遍历出边
//        
//        for (auto& e: adj[cur]) {
//            // 入队是否
//            // 不需要判断是否 INT_MAX,因为已经是更新过的了
//            if (dist[e.to] > dist[cur] + e.w) {
//                // 更新的才要加入
//                dist[e.to] = dist[cur] + e.w;
//                path[e.to] = cur;  // 由这条边改善的
//                if (inq[e.to] == false) {
//                  inq[e.to] = true;
//                  q.push(e.to);
//                  // 记录入队次数
//                  // 入队一次代表有一条边在它后面 最多n-1条边
//                  // 是负权环的话优化不断 循环往复
//                  ctn[e.to]++; 
//                  if (ctn[e.to] == n) return false;
//                }
//                
//            }
//        }
//    }
//
//    // 打印路径    
//    for (int i = 0;i < n;i++) {
//        cout << start << "~" << i<<": ";
//        int k = i;
//        cout << i;
//        while (path[k] != -1) {
//            k = path[k];
//            cout << "<-"<<k;
//        }
//        cout << "  最短路径(无重复点): " << dist[i];  // 到这肯定是正常的无负权环
//        cout << '\n';
//    }
//
//    return true;
//}
//
//
//
//int main() {
//
//    vector<vector<Edge>> adj;
//    adj.resize(5);
//
//    // 出边
//	adj[0].emplace_back(1,10); // 传构造参数 比push_back拷贝快一点
//    adj[0].emplace_back(4,5);
//    adj[1].emplace_back(2,1);
//    adj[1].emplace_back(4,2);
//    adj[4].emplace_back(1,3);
//    adj[4].emplace_back(2,9);
//    adj[4].emplace_back(3,2);
//    adj[3].emplace_back(0,7);
//    adj[3].emplace_back(2,6);
//    adj[2].emplace_back(3,4);
//
//    vector<int>path;
//    vector<int>dist;
//
//    SPFA(0,5,adj,path,dist);
//
//
//}