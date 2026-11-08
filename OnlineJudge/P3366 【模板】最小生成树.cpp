//#include<iostream>
//#include<vector>
//#include<climits>
//#include<queue>
//using namespace std;
//
//
//
//struct MGraph
//{
//	vector<vector<int>> arc;
//
//};
//
//void Prim(MGraph&G,int n,int m) {
//
//	//周围最小的一个
//
//
//	// 选择最小的 小根堆
//	priority_queue<pair<int,int>,vector<pair<int, int>>,greater<pair<int, int>>> pq;
//	vector<bool>visited(n + 1,false);
//
//
//	int sum = 0;
//	int cnt = 0;
//	vector<int>dist(n + 1, INT_MAX);
//	pq.emplace(0, 1);
//
//	while (!pq.empty()) {
//		pair<int, int> cur= pq.top();
//		pq.pop();
//		if (visited[cur.second] == true)continue;
//
//		visited[cur.second] = true;
//		cnt++;
//
//		sum += cur.first;
//		// 更新周围的
//		for (int i = 1;i <= n;i++) {
//			if (visited[i] == false&&G.arc[i][cur.second]!=0) {
//				dist[i] = min(dist[i],G.arc[cur.second][i]);
//				pq.push({dist[i],i});
//			}
//		}
//
//	}
//	if (cnt != n) cout << "orz";
//	else cout << sum;
//}
//
//
//int main() {
//	int n, m;
//
//	cin >> n>>m;
//
//	// 优化prim
//	MGraph G;
//	G.arc.resize(n + 1, vector<int>(n+1,0));
//
//	for (int i = 1;i <= m;i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (G.arc[a][b]==0||c < G.arc[a][b]) {  // 重复边
//			G.arc[a][b] = c;
//			G.arc[b][a] = c;
//		}
//		
//	}
//
//	Prim(G,n,m);
//
//}