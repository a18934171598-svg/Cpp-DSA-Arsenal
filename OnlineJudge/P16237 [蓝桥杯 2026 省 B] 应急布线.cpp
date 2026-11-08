//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct PTNode
//{
//	int count = 1;
//	int parent;
//};
//
//struct PTree{
//	vector<PTNode>nodes;
//};
//
//int Find(PTree& tree,int x) {
//
//	int root = x;
//	while (tree.nodes[root].parent!=root) {
//		root = tree.nodes[root].parent;
//	}
//
//	// 路径压缩
//	if (root != tree.nodes[x].parent)
//		tree.nodes[x].parent = root;
//	return root;
//}
//
//void Union(PTree&tree,int x,int y){
//	int r1 = Find(tree,x);
//	int r2 = Find(tree,y);
//
//	if (r1 != r2) { 
//		tree.nodes[r1].count += tree.nodes[r2].count; 
//		tree.nodes[r2].count = 0; // 标记一下
//	}
//
//	tree.nodes[r2].parent = r1;
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n, m;
//	cin >> n >> m;
//
//	PTree tree;
//	tree.nodes.resize(n+1);
//	for (int i = 1;i <= n;i++) {
//		tree.nodes[i].parent = i;
//	}
//
//	for (int i = 1;i <= m;i++) {
//		int a, b;
//		cin >> a >> b;
//		Union(tree, a, b);
//	}
//
//	// 看看有几个连通块
//	int count = -1;
//	int oneCount =0;
//	for (int i = 1;i <= n;i++) {
//		if (tree.nodes[i].parent == i)count++;
//		if (tree.nodes[i].count == 1) oneCount++;
//	}
//
//	// 统计个数为1的连通块数量
//
//	if (count == 0) {
//		cout << 0 << ' ' << 0;
//	}
//	else if (count == 1) {
//		cout << 1 << " " << 1;
//	}
//	else {
//		
//		if (((n - ((count-oneCount) * 2))-oneCount) >= oneCount) cout << count << " " << 1;
//		else cout << count << ' ' << 2;
//	}
//
//}