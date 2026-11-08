//#include<iostream>
//#define MAXSIZE 1000000
//using namespace std;
//
//struct TreeNode {
//	TreeNode* right;
//	TreeNode* left;
//}forest[MAXSIZE];
//
//int getDepth(TreeNode* root) {
//	if (root == NULL) return 0;
//	return max(getDepth(root->left),getDepth(root->right)) + 1;
//}
//
//int main() {
//	// 根据序号组建立二叉树
//	int n,num;
//	cin >> n;
//	num = n;
//	while (n--) {
//		int l, r;
//		cin >> l >> r;
//		if(l)forest[num - n].left = &forest[l];
//		else forest[num - n].left = NULL;
//
//		if(r)
//		forest[num - n].right = &forest[r];
//		else forest[num - n].right = NULL;
//	}
//
//	cout<<getDepth(&forest[1]);
//
//}