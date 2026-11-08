//#include<iostream>
//#include<vector>
//#include<climits>
//#include<queue>
//using namespace std;
//
//struct arcnode {
//	int to;
//};
//
//struct Vnode{
//	vector<arcnode> first;
//	int max_index;
//	Vnode() :max_index(INT_MIN), first(NULL) {};
//};
//
//struct ALGraph {
//	vector<Vnode> nodes;
//};
//
//
//
//
//void dfs(ALGraph&G,vector<bool>&visited,int v,int max_in) {
//	if (G.nodes[v].max_index == INT_MIN)
//		G.nodes[v].max_index = max_in;
//
//	visited[v] = true;
//
//	for (auto& elm : G.nodes[v].first) {
//		if (visited[elm.to] == false) {
//			dfs(G, visited, elm.to, max_in);
//		}
//	}
//}
//
//void bfs(ALGraph& G,vector<bool>&visited, int max_in, int v) {
//
//	queue<int>q;
//	q.push(v);
//
//	while (!q.empty()) {
//		int cur = q.front();
//		G.nodes[cur].max_index = max_in;
//		visited[cur] = true;
//		q.pop();
//
//		for (auto&elm:G.nodes[cur].first) {
//			if (visited[elm.to] == false) {
//				q.push(elm.to);
//			}
//		}
//
//	}
//
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	int n, m;
//	cin >> n >> m;
//	ALGraph G;
//	G.nodes.resize(n+1);
//	// G.nodes[0]弃用
//
//	for (int i = 1;i <= m;i++) {
//		int u, v;
//		cin >> u >>v;  // 建立反向邻接表
//		arcnode* p = new arcnode;
//		p->to = u;
//
//		G.nodes[v].first.emplace_back(*p);
//		
//		
//	}
//	vector<bool>visited(n + 1, false);
//	
//	for (int i = n;i >= 1;i--) {
//		if (visited[i] == false) {
//			bfs(G,visited,i,i);
//		}
//	}
//
//
//	for (int i = 1;i <= n;i++) {
//		cout << G.nodes[i].max_index << " ";
//	}
//}
//
