//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode {
//	int index;
//	int data;
//	TreeNode* FirstChild;
//	TreeNode* Bro;
//	TreeNode() :Bro(NULL),FirstChild(NULL){};
//};
//
//void process(TreeNode*root, vector<vector<int>>&dp) {
//	if (root->FirstChild == NULL) {
//		dp[0][root->index] = 0;
//		dp[1][root->index] = root->data;
//	}
//	else {
//		// 遍历所有的孩子
//		TreeNode* p = root->FirstChild;
//		dp[1][root->index] += root->data;
//		while (p) {
//			dp[1][root->index] += dp[0][p->index];
//
//			dp[0][root->index] += max(dp[0][p->index], dp[1][p->index]);
//			p = p->Bro;
//		}
//	}
//}
//
//void dfs(TreeNode*root,vector<vector<int>>&dp) {
//	if (root != NULL) {
//
//		dfs(root->FirstChild,dp);
//		
//		// 取他,不取他
//		process(root, dp);
//
//		dfs(root->Bro,dp);
//	}
//}
//
//int main() {
//
//	int n;
//	cin >> n;
//
//	vector<TreeNode>tree(n+1);
//
//	for (int i = 1;i <= n;i++) {
//		cin >> tree[i].data;
//		tree[i].index = i;
//	}
//	// dp[0][i] 
//	vector<vector<int>>dp(2,vector<int>(n+1));
//
//	// 存储树 后根遍历 孩子兄弟法
//	vector<bool>visited(n+1);
//	vector<bool> root_where(n + 1);
//	for (int i=1;i <= n-1;i++) {
//		int l, k;
//		cin >> l >> k;
//		root_where[l] = true;
//		if (visited[k]) {
//			// 怎么串起来 其他兄弟皆是
//			// 头插法
//			tree[l].Bro = tree[k].FirstChild;
//			tree[k].FirstChild = &tree[l];
//		}
//		else {
//			visited[k] = true;
//			tree[k].FirstChild = &tree[l];
//		}
//	}
//	TreeNode* root=NULL;
//	// 除了是一个节点
//	
//	
//	for (int i = 1;i <= n;i++) {
//		if (root_where[i]==false) {
//			root = &tree[i];
//			break;
//		}
//	}
//
//	dfs(root,dp);
//	// 
//	cout << max(dp[0][root->index],dp[1][root->index]); // 根是没有兄弟的
//
//}