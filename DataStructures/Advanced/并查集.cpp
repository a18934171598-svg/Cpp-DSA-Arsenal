//#include<iostream>
//#include<vector>
//using namespace std;
//
//// 双亲表示法
//struct PTNode {
//	int parent;   // 父节点下标
//	int data;     // 这里我们用 data 存：根=集合大小，非根无意义
//};
//
//struct PTree {
//	vector<PTNode>nodes;
//	int n;        // 节点总数
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
//
//// 合并（O(1)）
//// 合并结点所属的集合
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
//void InitTree(PTree&tree) {
//	int n;
//	cout << "输入创建节点数: ";
//	cin >> n;
//
//	tree.nodes.resize(n + 1);
//
//	for (int i = 1;i <= n;i++) {
//		cout << "输入节点数据: ";
//		tree.nodes[i].parent = i;
//		cin >> tree.nodes[i].data;
//
//	}
//
//}
//
//
//
//int main() {
//	PTree tree;
//	InitTree(tree);  // 5个节点
//
//	Union(tree, 1, 2);
//	Union(tree, 3, 4);
//	Union(tree, 2, 3);
//
//	cout << Find(tree, 4) << endl;  // 输出根
//	cout << Find(tree, 1) << endl;  // 输出根
//	cout << Find(tree, 5) << endl;  // 输出根
//}