//#include<iostream>
//#include<vector>
//#include<climits>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//struct MGraph {
//	vector<vector<int>>arc;
//};
//
////void Prim(MGraph& G, int n,int a) {
////
////	vector<int>dist(n+1,INT_MAX);
////	vector<bool>visited(n+1,false);
////	dist[1] = 0;
////
////	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>p_q;
////	p_q.emplace(0,1);
////	int sum = 0;
////	while (!p_q.empty()) {
////		pair<int, int> cur = p_q.top();
////		p_q.pop();
////
////		if (visited[cur.second] == true)continue;
////
////		sum += cur.first;
////
////		visited[cur.second] = true;
////
////		for (int i = 1;i <= n;i++) {
////			if (visited[i] == false) {
////				dist[i] = min(dist[i],G.arc[cur.second][i]);
////				p_q.emplace(dist[i],i );
////			}
////		}
////
////	}
////	cout << sum+a;
////
////}
//
//
//
//
//void Kruskal(MGraph&G,int n,int a) {
//
//	// 收集边 并查集
//
//	struct edge {
//		int a, b;
//		int weight;
//		bool operator<(const edge& other) const{
//			return this->weight < other.weight;
//		}
//		edge(int a,int b,int weight) :a(a),b(b),weight(weight){};
//	};
//
//	vector<edge>edges;
//
//	for (int i = 1;i <= n;i++) {
//		for (int j = 1;j < i;j++) {
//			edges.emplace_back(i,j,G.arc[i][j]);
//		}
//	}
//
//	sort(edges.begin(), edges.end());
//
//	struct PTNode
//	{	
//		int par;
//	};
//
//	struct PTree {
//		vector<PTNode>nodes;
//	};
//
//	PTree Tree;
//	Tree.nodes.resize(1);
//
//	for (int i =1;i <= n;i++) {
//		PTNode n;
//		n.par = i;
//		Tree.nodes.emplace_back(n);
//	}
//
//	auto Find = [&Tree](int x)->int
//	{	
//		int root = x;
//		while (Tree.nodes[root].par != root) {
//			root = Tree.nodes[root].par;
//		}
//		// 路径压缩
//		Tree.nodes[x].par = root;
//
//		return root;
//
//	};
//
//	auto Union = [&Find, &Tree](int x, int y) {
//		int r1 = Find(x);
//		int r2 = Find(y);
//
//		Tree.nodes[r2].par = r1;
//		};
//	int sum = 0;
//
//
//	for (int i = 0;i < edges.size();i++) {
//		if (Find(edges[i].a) != Find(edges[i].b)) {
//			sum += edges[i].weight;
//			Union(edges[i].a, edges[i].b);
//		}
//	}
//
//	cout << sum + a;
//}
//
//int main() {
//
//	int a, b;
//	cin >> a >> b;
//
//	MGraph G;
//	G.arc.resize(b+1,vector<int>(b+1,0));
//	
//	for (int i = 1;i <= b;i++) {
//		int info;
//		for (int j = 1;j <= b;j++) {
//
//			cin >> info;
//			if (info < a&&info!=0)
//				G.arc[i][j] = info;
//			else G.arc[i][j] = a;
//		}
//		G.arc[i][i] = 0;
//	}
//
//	Kruskal(G, b,a);
//
//
//}