//#include<iostream>
//using namespace std;
//
//struct TreeNode {
//	char val;
//	TreeNode* right;
//	TreeNode* left;
//}forest[26];
//
//void PreOrder(TreeNode* root) {
//	if (root != NULL) {
//		cout << root->val;
//		PreOrder(root->left);
//		PreOrder(root->right);
//	}
//}
//
//int main() {
//	{short n;
//	cin >> n;
//	string s[26];
//	
//		for (int i = 0;i < n;i++) {
//			cin >> s[i];
//			forest[i].val = s[i][0];
//			forest[i].left = NULL;
//			forest[i].right = NULL;
//		}
//		for (int i = 0;i < n;i++) {
//			// 找出左孩子的下标
//
//			// 查找 暴力
//			if (s[i][1] != '*') {
//				for (int j = 0;j < n;j++) {
//					if (s[i][1] == s[j][0]) {
//						forest[i].left = &forest[j];
//						break;
//					}
//						
//				}
//				
//
//			}
//			if (s[i][2] != '*') {
//				for (int j = 0;j < n;j++) {
//					if (s[i][2] == s[j][0])
//					{
//						forest[i].right = &forest[j];
//						break;
//					}
//				}
//				
//
//			}
//
//		}
//	}
//	PreOrder(&forest[0]);
//}