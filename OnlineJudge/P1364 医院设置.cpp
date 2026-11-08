//#include<iostream>
//#include<queue>
//using namespace std;
//
//struct TreeNode {
//	int up_count;
//	int count;
//	int down_sum;
//	int up_sum;
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode* parent;
//}Tree[100];
//
//
//struct node {
//	int sum;
//	int count;
//	node() :sum(0), count(0) {};
//};
//// 只能层序,先根节点也可以 
//void up_distance(TreeNode* root)
//{
//	if (root != NULL) {
//		if (root!=&Tree[0]) {
//			TreeNode* par = root->parent;
//			TreeNode* bro = NULL;
//			// 判断有没有兄弟
//			if (par->left == root) { // 左边是自己
//				if (par->right != bro)
//					bro = par->right;
//			}//  右边是自己
//			else {
//				if (par->left != bro)
//					bro = par->left;
//			}
//
//			root->up_sum = par->up_count + par->val + par->up_sum;
//			root->up_count = par->up_count + par->val;
//			if (bro) {
//				root->up_sum = root->up_sum + bro->count * 2 +
//					bro->val * 2 + bro->down_sum;
//				root->up_count = root->up_count + bro->count
//					+ bro->val;
//			}
//		}
//		up_distance(root->left);
//		up_distance(root->right);
//	}
//}
//
//
////void up_distance(TreeNode* Tree,int n) {
////	for (int i = 1;i < n;i++) {
////		// 不是根节点
////		TreeNode* par = Tree[i].parent;
////		TreeNode* bro = NULL;
////		// 判断有没有兄弟
////		if (par->left == &Tree[i]) { // 左边是自己
////			if (par->right != bro)
////				bro = par->right;
////		}//  右边是自己
////		else {
////			if (par->left != bro)
////				bro = par->left;
////		}
////
////		Tree[i].up_sum = par->up_count + par->val + par->up_sum;
////		Tree[i].up_count = par->up_count + par->val;
////		if (bro) {
////			Tree[i].up_sum = Tree[i].up_sum + bro->count * 2 +
////				bro->val * 2 + bro->down_sum;
////			Tree[i].up_count = Tree[i].up_count + bro->count
////				+ bro->val;
////		}
////
////
////	}
////	
////	
////}
//
//// 子孙到他的距离和
//node distance_sum(TreeNode* root) {
//	if (root == NULL)
//	{
//		node res;
//		return res;
//	}
//	// 左子树与右子树的节点数
//	
//	node res,node_lef,node_rig;
//	node_lef = distance_sum(root->left);
//	node_rig = distance_sum(root->right);
//	if (root->left) {
//		res.sum += root->left->val;
//		res.count += root->left->val;  // 返回的
//	}
//	if (root->right) {
//		res.sum += root->right->val;
//		res.count += root->right->val;
//	}
//	res.sum = res.sum + node_lef.sum +node_lef.count+ node_rig.sum+node_rig.count;
//	res.count = res.count + node_lef.count + node_rig.count;
//	root->down_sum = res.sum; // 存储下来
//	root->count = res.count; // 存储下来
//	return res;
//}
//
//int main() {
//	int n;
//	cin >> n; // n个结点    
////  
////  w	 u	  v
//	for (int i = 0;i < n;i++) {
//		int val;
//		int left, right; // 左右编号
//		cin >> val >> left >> right;
//		Tree[i].val = val;
//		if (left) {
//			Tree[i].left = &Tree[left - 1];
//			Tree[left - 1].parent = &Tree[i];
//		}
//		if (right) {
//			Tree[i].right = &Tree[right - 1];
//			Tree[right - 1].parent = &Tree[i];
//		}
//	}
//
//	distance_sum(&Tree[0]);
//	
//	Tree[0].up_count = 0;
//	Tree[0].up_sum = 0;
//
//	up_distance(&Tree[0]);
//
//	/*for (int i = 0;i < n;i++) {
//		cout<<"编号: "<<i+1 << " 上面的" << Tree[i].up_sum <<
//			"  下面的" << Tree[i].down_sum<<"和"<< Tree[i].up_sum
//			+ Tree[i].down_sum<<endl;
//	}*/
//	// count 不对
//	int min = Tree[0].down_sum + Tree[0].up_sum;
//	for (int i = 1;i < n;i++) {
//		int digital = Tree[i].down_sum + Tree[i].up_sum;
//		if (min > digital)
//			min = digital;
//	}
//	cout << min;
//}