//#include<iostream>
//#include<vector>
//#include<queue>
//#include<climits>
//using namespace std;
//
//struct arcnode{
//	int index;
//	int info;
//};
//
//struct Vnode{
//	vector<arcnode>first;
//};
//
//struct ALGraph{
//	vector<Vnode>nodes;
//};
//
//// 带权图
//void Dijkstra_min_distance(ALGraph&G,int s,vector<int>&dist) {
//	// 单源最短路径
//	// 贪心
//	// 堆优化 小根堆
//	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
//	pq.emplace(0,s);
//
//	dist[s] = 0;
//
//
//	
//
//	while (!pq.empty()) {
//		pair<int, int>cur = pq.top();
//		pq.pop();
//		//visited[cur.second] = true; // 取最小的
//		if (cur.first > dist[cur.second]) continue;
//		// 松弛更新
//		for (auto& elm : G.nodes[cur.second].first) {
//			if ( // 由于先选中的一定会是更短的,因此不会进入
//				dist[elm.index]>dist[cur.second]+elm.info) {
//				dist[elm.index] = dist[cur.second] + elm.info;
//				pq.emplace(dist[elm.index],elm.index);
//			}
//		}
//
//	}
//
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n, m, s;
//	cin >> n >> m >> s;
//	ALGraph G;
//	G.nodes.resize(n+1);
//
//	vector<int>dist(n+1,INT_MAX);
//
//
//	// 出度和权值
//
//	for (int i = 1;i <= m;i++) {
//		int v, u, w;
//		cin >> u >> v >> w;
//		arcnode* p = new arcnode;
//		p->index = v;
//		p->info = w;
//
//		G.nodes[u].first.emplace_back(*p);
//	}
//
//	Dijkstra_min_distance(G, s,dist);
//
//	for (int i = 1;i <= n;i++) {
//		cout<<dist[i]<<" ";
//	}
//
//}