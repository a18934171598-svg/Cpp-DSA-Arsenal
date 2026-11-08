//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
//
////struct CTBox {
////	vector<int> children;
////};
////
////
////struct CTree {
////	int n, r;  // 树是一个r 暂时用不到
////	vector<CTBox> box;
////	// 面向对象
////	CTree(int a, int r) :n(a), r(r) {
////		box.resize(n + 1);
////	};
////};
//
//struct arcnode {
//	int i, j;
//	arcnode* ilink, * jlink;
//};
//
//struct VNode{
//	arcnode* first;
//};
//
//struct AMLGraph {
//	vector<VNode>nodes;
//};
//
//
//int NextNeighbor(AMLGraph& G, int x, int y) {
//	arcnode* p = G.nodes[x].first;
//	while (p&& p->i != y && p->j != y) {
//		p = (p->i == x) ? p->ilink : p->jlink;
//	}
//	// 找到y
//	// 下一个是NULL?
//	p = (p->i ==x) ? p->ilink:p->jlink ;
//	if (!p) return -1;
//	
//	return (p->i == x) ? p->j : p->i;
//}
//
//int FirstNeighbor(AMLGraph&G,int x) {
//	arcnode* p = G.nodes[x].first;
//	return (p->i == x) ? p->j : p->i;
//}
//
//int house_count = 0;
//void dfs(AMLGraph&G,int v,vector<bool>&visited,int d) {
//	if (d == 0) return;
//
//
//	visited[v] = true; 
//	house_count++;
//
//	for (int w = FirstNeighbor(G, v);w != -1;w = NextNeighbor(G,v,w )) {
//
//		if (visited[w]==false) {
//			dfs(G,w,visited,d-1);
//		}
//	}
//}
//
//
//
//// 保证连通的
//// 不删除的满的 适合深度dfs
//int bfs(AMLGraph& G,vector<bool>&visited,int d) {
//	int house = 0;
//	queue<int>q;
//	int count = 1;
//	q.push(1);
//	int round = 0;
//
//	visited[1] = true;
//
//	while (!q.empty()) {  // 判断层数
//		int current = q.front();
//		q.pop();
//
//		for (int w = FirstNeighbor(G, current);w != -1;w =
//			NextNeighbor(G,current,w)) {
//			if (visited[w] == false) {
//				visited[w] = true;
//				q.push(w); round++;
//			}
//		}
//		count--;
//		if (count == 0) {
//			d--;
//			house += round;
//			if (d == 0) return house;
//			count = round;
//			round = 0;
//		}
//	}
//}
//
//void CreateGraph(AMLGraph&G,int n) {
//	G.nodes.resize(n+1);
//	// 多重表
//	for (int k = 1;k < n;k++) { // n-1条边
//		int i, j;
//		cin >> i >> j;
//		arcnode* acn = new arcnode;
//		acn->i = i;
//		acn->j = j;
//
//		acn->ilink = G.nodes[i].first;
//		acn->jlink = G.nodes[j].first;
//		G.nodes[i].first = acn;
//		G.nodes[j].first = acn;
//	}
//}
//// 祖先   LCA ancestor 最近公共祖先 lowest common ancestor
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	AMLGraph G;
//
//	int n, d;
//	cin >> n >> d;
//
//	CreateGraph(G,n);
//
//	vector<bool>visited(n+1);
//
//	/*cout<< bfs(G, visited, d);*/
//
//	dfs(G,1,visited,d+1);
//
//	cout << house_count - 1;
//}