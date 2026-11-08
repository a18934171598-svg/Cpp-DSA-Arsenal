//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//struct VNode {
//	int index;
//	vector<int>out_index;
//};
//
//struct ALGraph {
//	vector<VNode>nodes;
//};
//
//struct node {
//	int x, y;
//	bool operator<(const node& other)const {
//		if (x != other.x) return x > other.x;
//		return y > other.y;
//	}
//};
//
//void bfs(ALGraph&G) {
//	// ´Ó1 ¿ªÊ¼
//	vector<int> dist(G.nodes.size());
//	priority_queue < node ,vector<node>> p_q;
//	// O(v(v+E))
//	for (int i = 1;i < G.nodes.size();i++) {
//		vector<bool> visited(G.nodes.size());
//		queue<int>q;
//		q.push(i);
//		int dis = -1;
//		visited[i] = true;
//		while (!q.empty()) {
//			int round = q.size();
//			dis++;
//			for (int j = 0;j < round;j++) {
//				int cur = q.front();
//				q.pop();
//				// O(E)
//				for (int k = 0;k < G.nodes[cur].out_index.size();k++) {
//					if (visited[G.nodes[cur].out_index[k]] == false) {
//						visited[G.nodes[cur].out_index[k]] = true;
//						q.push(G.nodes[cur].out_index[k]);
//					}
//				}
//			}
//		}
//		node n;
//		n.x = dis;
//		n.y = i;
//		p_q.push(n);
//	}
//	
//	
//	cout << p_q.top().y;
//
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	ALGraph G;
//	G.nodes.resize(n+1);
//
//	for (int i = 1;i <= m;i++) {
//		int a, b;
//		cin >> a >> b;
//
//		G.nodes[a].out_index.push_back(b);
//		G.nodes[b].out_index.push_back(a);
//	}
//
//	bfs(G);
//}