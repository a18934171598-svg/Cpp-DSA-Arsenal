//#include<iostream>
//#include<queue>
//#include<random>
//using namespace std;
//
//typedef int ElemType;
//struct TreeNode {
//	ElemType data;
//	TreeNode* lchild;
//	TreeNode* rchild;
//	TreeNode(ElemType s, TreeNode* t1, TreeNode* t2)
//		:data(s), lchild(NULL), rchild(NULL) {
//	};
//	TreeNode():data(0),lchild(NULL),rchild(NULL) {};
//};
//
//// 二叉排序树的插入 插入略比链表麻烦,但查找方便
//int insert_bt(TreeNode* t, ElemType key) {   // 不会更换树根
//	// 插入的时候没有结点
//	TreeNode* t_pre = NULL;
//	bool l_r = false; // false是左 true是右
//
//	if (t == NULL) {  // 根节点
//		t = new TreeNode(key, NULL, NULL);
//		return 1;
//	}
//	while (t != NULL) {
//		t_pre = t;
//		if (key < t->data) // 左边跑
//		{
//			l_r = false;  // 记录左右方向
//			t = t->lchild;
//		}
//
//		else if (key > t->data) {
//			l_r = true;
//			t = t->rchild;
//		}
//
//		else {
//			return 0;
//		}
//
//	}
//	t = new TreeNode(key, NULL, NULL);
//	if (l_r) {
//		t_pre->rchild = t;
//	}
//	else {
//		t_pre->lchild = t;
//	}
//	return 1;
//}
//
//int getTreeDepth(TreeNode* root) {
//	if (root == NULL) return 0;
//	return max(getTreeDepth(root->lchild), getTreeDepth(root->rchild)) + 1;
//}
//
//
//int rdn(int digits, bool include_zero = true) {
//	if (digits < 1) {
//		cerr << "错误：位数必须≥1" << endl;
//		return -1;
//	}
//
//	// 计算范围
//	int min_val, max_val;
//	if (digits == 1) {
//		min_val = include_zero ? 0 : 1;
//		max_val = 9;
//	}
//	else {
//		min_val = pow(10, digits - 1);
//		max_val = pow(10, digits) - 1;
//	}
//
//	// 步骤1：创建随机数引擎（仅初始化1次，避免重复）
//	static random_device rd;  // 硬件随机数种子
//	static mt19937 gen(rd()); // 梅森旋转算法，随机数引擎
//	// 步骤2：创建均匀分布
//	uniform_int_distribution<int> dist(min_val, max_val);
//
//	// 生成随机数
//	return dist(gen);
//}
//
////void TranslevePrint(TreeNode* t) {
////	struct node {
////		TreeNode* vec[9];
////		int layer[100];
////		int locate[100];
////		int front, rear;
////	}q;
////	int i, j = 1,k = 0, nLocate;
////	q.front = 0;q.rear = 0;
////	printf(" ");
////	q.vec[q.rear] = t;
////	q.layer[q.rear] = 1;
////	q.locate[q.rear] = 40;
////	q.rear = q.rear + 1;
////	while (q.front < q.rear) {
////		t = q.vec[q.front];
////		i = q.layer[q.front];
////		nLocate = q.locate[q.front];
////		if (j < i) {
////			printf("\n\n");
////			j += 1; k = 0;
////		}
////		while (k < (nLocate - 1)) {
////			printf(" ");k++;
////		}
////		printf("%d", t->data);
////		q.front += 1;
////		if (t->lchild != NULL) {
////			q.vec[q.rear] = t->lchild;
////			q.layer[q.rear] = i + 1;
////			q.locate[q.rear] = (int)(nLocate-pow(2,4-i-1));
////			q.rear++;
////		}
////		if (t->lchild != NULL) {
////			q.vec[q.rear] = t->rchild;
////			q.layer[q.rear] = i + 1;
////			q.locate[q.rear] = (int)(nLocate + pow(2, 4 - i - 1));
////			q.rear++;
////		}
////
////	}
////}
//
//int main() {
//
//	//srand((unsigned)time(NULL));
//
//	//	TreeNode t_root(5, NULL, NULL);
//	//TreeNode t1(7, NULL, NULL);  // 不等效于new
//	//TreeNode t2(2, NULL, NULL);
//	//TreeNode t3(6, NULL, NULL);
//	//TreeNode t4(3, NULL, NULL);
//	//TreeNode t5(8, NULL, NULL);
//	//TreeNode t6(4, NULL, NULL);
//
//	//TreeNode t_arr[6] = { t1,t2,t3,t4,t5,t6 };
//
//
//
//	//for (int i = 0;i < 6;i++) {
//	//	insert_bt(&t_root, t_arr[i].data);
//	//}
//
//
//	//TreeNode* t_r_p = &t_root;
//	//TreeNode*& t_r = t_r_p;
//	int n;
//	cin >> n;
//	TreeNode Tree[100];
//	for (int i = 0;i < n;i++) {
//		int val;
//		int left, right; // 左右编号
//		cin >> val >> left >> right;
//		Tree[i].data = val;
//		if (left) {
//			Tree[i].lchild = &Tree[left - 1];
//		}
//		if (right) {
//			Tree[i].rchild = &Tree[right - 1];
//		}
//	}
//
//	cout << "层序遍历" << endl;  // 可视化遍历
//	queue<TreeNode*> q;
//	//q.push(t_r);
//	q.push(&Tree[0]);
//	int init = 1, count = 1;
//	// 根据个数判断最多几层 
//	//int height = getTreeDepth(&t_root);
//	int height = getTreeDepth(&Tree[0]);
//	
//	//最多 2^h-1  奇数
//	int total = 1;
//	while (height--) { // 2的几次方
//		total <<= 1;
//	}
//	total--;
//	int totalNum = 1;
//
//	while (!q.empty()) {
//		TreeNode* t_n = q.front();
//
//		if (t_n == NULL)
//			cout << "NU ";
//		else
//			cout << t_n->data << "\t";
//		q.pop();
//
//		if (init == 1) {
//			cout << endl;
//			int memory = count;
//			while (memory--) { // 2的几次方
//				init <<= 1;
//			}
//			count++;
//			init++;
//		}
//		init--;
//
//		if (totalNum == total)
//			continue;
//
//		if (t_n != NULL) {
//			q.push(t_n->lchild);
//			q.push(t_n->rchild);
//		}
//		else {
//			q.push(NULL);
//			q.push(NULL);
//		}
//		totalNum += 2;
//
//
//	}
//	//TranslevePrint(t_r);
//
//}
