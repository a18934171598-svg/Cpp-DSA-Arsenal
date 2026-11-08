//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//struct arcnode {
//	int mark;  // 防止重复打印边
//	int i, j;
//	arcnode* ilink, *jlink;
//};
//
//
//// 双亲表示法
//struct PTNode {
//	int parent;   // 父节点下标
//    // 这里我们用 data 存：根=集合大小，非根无意义
//};
//
//struct PTree {
//	vector<PTNode>nodes;
//	int n;        // 节点总数
//};
//
//struct VNode{
//	arcnode* first;
//	VNode() :first(NULL){};
//}; // 邻接多重表
//
//struct AlGraph{
//	vector<VNode>nodes;
//};
//
//
//int Find(PTree&tree,int x) {
//	// 根节点的parent = 自己
//	int root = x;
//	while (tree.nodes[root].parent != root) {
//		root = tree.nodes[root].parent;
//	}
//
//	// 路径压缩
//	if (root != tree.nodes[x].parent)
//		tree.nodes[x].parent  = root;
//
//	return root;
//}
//
//void Union(PTree&tree,int x,int y) {
//	int r1 = Find(tree, x);
//	int r2 = Find(tree, y);
//	// 提前压缩,确保层数不超过2
//
//	if (r1 == r2) return;
//
//	tree.nodes[r2].parent = r1;
//
//}
//
//// 有几个连通分量 调用了几次BfsTraverse
//int main() {
//	//ios::sync_with_stdio
//
//	vector<int>answer;
//	while(1){
//		int n, m;
//		cin >> n;
//		if (n == 0) break;
//		cin >> m;
//		
//		PTree Tree;
//		Tree.nodes.resize(n+1);
//		for (int i = 1;i <= n;i++) {
//			Tree.nodes[i].parent = i; 
//		}
//
//		for (int i = 1;i <= m;i++) {
//			int a, b;
//			cin >> a >> b;
//			Union(Tree, a,b);
//		}
//
//		// 查查有几个祖先是自己
//		int count = -1;
//		for (int i = 1;i <= n;i++) {
//			if (Tree.nodes[i].parent == i) count++;
//		}
//		answer.push_back(count);
//	}
//	
//	for (int elm : answer) {
//		cout << elm<<'\n';
//	}
//
//}