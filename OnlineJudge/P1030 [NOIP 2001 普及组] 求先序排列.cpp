// 先中 和 后中 都能唯一确定二叉树 先后不能
/*
#include<iostream>
using namespace std;
struct TreeNode {
	char val;
	TreeNode* left;
	TreeNode* right;
	TreeNode():left(NULL), right(NULL){};
};
void order_process(char tail, string order_s, string post_s,TreeNode* root);
// 且二叉树的节点个数 ≤8
void post_process(string post_s,string order_s, TreeNode* root) { //空字符串
	// 已经是中序遍历
	// 取出最后一个
	char n = post_s[post_s.size() - 1];
	root->val = n;
	//cout << n;
	if (post_s.size()==1)
		return;
	order_process(n,order_s,post_s,root);
	
}
// 能不能把树画出来
// 也许会有数值相同的时候 这样似乎没办法了
void order_process(char tail,string order_s,string post_s,TreeNode* root) {

	int order_index = order_s.find(tail);
	
	// 左右
	if (order_index > 0) // 至少一个
	{
		// 找到相符的那一串
		string left = order_s.substr(0,order_index);
		// 匹配度
		int left_len = left.size();  // 最少是1
		
		// 打包left_len个
		root->left = new TreeNode();
		post_process(post_s.substr(0, left_len),left,root->left);
		if (order_index != order_s.size() - 1) {
			root->right = new TreeNode();
			post_process(post_s.substr(left_len, post_s.size() - left_len - 1), order_s.substr(left_len + 1), root->right);
		}

	}// 全部打包
	else {
		// 右边全打包
		// 至少有一个
		string right = order_s.substr(1);
		int right_len = right.size();
		root->right = new TreeNode();
		post_process(post_s.substr(0,post_s.size()-1), right,root->right);
	}

}

// 清理数据
void delete_tree(TreeNode*& root) {  // 后根遍历
	if (root == NULL)
		return;
	delete_tree(root->left);
	delete_tree(root->right);
	delete root;
	root = NULL;
}
void preOrder(TreeNode* root) {
	if (root != NULL) {
		cout << root->val;
		preOrder(root->left);
		preOrder(root->right);
	}
	
}
int main() {
	// 根据后序遍历找到根
	string in_s, post_s;
	cin >> in_s >> post_s;
	TreeNode* root = new TreeNode();
	post_process(post_s,in_s,root);
	preOrder(root);
	delete_tree(root);
}
*/