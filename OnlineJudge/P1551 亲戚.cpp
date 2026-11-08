//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//
//struct PTNode {
//	int parent;
//};
//
//struct PTree {
//	vector<PTNode> nodes;
//};
//
//int Find(PTree&tree,int x) {
//	int root = x;
//
//	while (tree.nodes[root].parent!=root) {
//		root = tree.nodes[root].parent;
//	}
//
//	// 路径压缩
//	if (root != tree.nodes[x].parent) {
//		tree.nodes[x].parent = root;
//	}
//
//	return root;
//}
//
//void Union(PTree&tree,int x,int y) {
//	int root1 = Find(tree,x);
//	int root2 = Find(tree,y); 
//
//	// 确保双方最多是两层
//
//	tree.nodes[root2].parent = root1;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n, m, p;
//	cin >> n >> m >> p;
//	PTree Tree;
//	vector<bool> answer(p+1);
//	Tree.nodes.resize(n+1);
//
//	for (int i = 1;i <= n;i++) Tree.nodes[i].parent = i;
//
//	for (int i = 1;i <=m;i++) {
//		int a,b;
//		cin >> a >> b;
//		Union(Tree,a,b);
//	}
//	for (int i = 1;i <= p;i++) {
//		int a, b;
//		cin >> a >> b;
//		if (Find(Tree, a) == Find(Tree, b))
//			answer[i] = true;
//	}
//
//	for (int i = 1;i <= p;i++) {
//		(answer[i] == true) ? cout << "Yes\n" : cout << "No\n";
//	}
//
//}