//#include<iostream>
//#include<queue>
//#include<random>
//using namespace std;
//// 左 中 右 
//// 查找值为key的值
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
//
//typedef int ElemType;
//struct TreeNode {
//	ElemType data;
//	TreeNode* lchild;
//	TreeNode* rchild;
//	TreeNode(ElemType s, TreeNode* t1, TreeNode* t2)
//		:data(s), lchild(t1), rchild(t1) {
//	}
//};
//
//// 二叉排序树的查找  非递归实现 空间复杂度低
//TreeNode* balance_search_tree(TreeNode* t, ElemType key) {
//	while (t!=NULL&&key!=t->data) // 相等或空结点
//	{
//		if (key < t->data) 
//			t = t->lchild;
//		else t=t->rchild;
//	}
//	return t;  // 返回NULL是没找到 找到返回结点
//}
//// 二叉排序树的插入 插入略比链表麻烦,但查找方便
//int insert_bt(TreeNode*& root, ElemType key) {   // 不会更换树根
//	// 插入的时候没有结点
//	TreeNode* t = root;
//	TreeNode* t_pre = NULL;
//	bool l_r = false; // false是左 true是右
//	
//	if (root == NULL) {  // 根节点
//		root = new TreeNode(key, NULL, NULL);
//		return 1;  
//	}
//	while (t!=NULL) {
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
//			return 0; }
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
//TreeNode* FirstNode(TreeNode*& P) {   // LastNode是对的,这个还没改,但是一边够用了
//	if (P == NULL)
//		return NULL;
//	TreeNode* pre = NULL;
//	//循环找到最左下结点
//	while (P->lchild != NULL) {
//		P = P->lchild;
//	}
//	if(pre!=NULL)
//		pre->lchild = P->rchild;     //叶子结点或只有右子树
//	return P;
//
//}
//
////找到以P为根的子树中,最后被中序遍历的结点
//TreeNode* LastNode(TreeNode*& t) {  
//	TreeNode* P = t->lchild;
//	if (P == NULL)
//		return NULL;  // 是空节点
//
//	TreeNode* pre=NULL;
//	//循环找到最右下结点
//	while (P->rchild != NULL) {
//		pre = P;
//		P = P->rchild;
//	}              //叶子结点或只有左子树
//	if (pre != NULL)
//		pre->rchild = P->lchild;
//	else t->lchild = P->lchild;  // 自己就是最右下
//	return P;
//}
//
//// 二叉排序树的删除 
//int delete_Node(TreeNode*& root, ElemType key) {   // 谁有会拿一个结点呢,都是拿数值的
//	// 拿到树根
//	// 删除的是根节点怎么办
//	// 根节点是叶子结点怎么办
//	// 两边都有都可以取代 若是单边呢
//	TreeNode* t = root;
//	
//	//root = /*
//	TreeNode* pre = NULL;
//	while (t != NULL && key != t->data) // 相等或空结点
//	{
//		pre = t;
//		if (key < t->data)
//			t = t->lchild;
//		else t = t->rchild;
//	}
//	if (t == NULL) // 说明找不到
//		return -1;
//
//	// 找到了 t是找到的结点 pre是父节点
//	// 叶子节点 左右单串
//	if (t->rchild==NULL) {  // 左单边 叶子节点
//		// 根节点的情况
//		if (t == root) {
//			root = t->lchild;   // 更换根节点
//			delete t;
//			return 1;
//		}
//		if (pre->data < key)       //删除的是parent的右孩子
//			pre->rchild = t->lchild;
//		else                      //删除的是parent的左孩子
//			pre->lchild = t->lchild;
//	}
//	else if (t->lchild == NULL) {  //右串
//		// 根节点的情况
//		if (t == root) {
//			root = t->rchild;   // 
//			delete t;
//			return 1;
//		}
//		if (pre->data < key)       //删除的是pre的右孩子
//			pre->rchild = t->rchild;
//		else                      //删除的是pre的左孩子
//			pre->lchild = t->rchild;
//	}
//	
//
//	
//	// t的左右都有 t的值就是key
//	else {
//
//
//		TreeNode* p;
//		p = LastNode(t);  // 调整好了
//		// 根节点的情况
//		if (root == t) {
//			root = p;  
//		}
//
//		
//		else if (pre->data > key) { // 删除的是pre的左孩子
//			pre->lchild = p;
//		}
//		else {
//			pre->rchild = p;
//		}
//
//		p->lchild = t->lchild; // 不能是自己
//		p->rchild = t->rchild;
//	}
//	delete t;
//	//t = NULL;  // 防止只有一个时根节点删除后root为野指针, 不会的前面逻辑处理过了root=NULL
//	return 1;
//}
//
//
//// 后序遍历
//void PostOrder(TreeNode*& t) {
//	if (t != NULL) {
//		PostOrder(t->lchild);
//		PostOrder(t->rchild);
//		cout << t->data << endl;
//	}
//}
//
//int getTreeDepth(TreeNode* root) {
//	if (root == NULL) return 0;
//	return max(getTreeDepth(root->lchild), getTreeDepth(root->rchild)) + 1;
//}
//void TranslevePrint(TreeNode* t) {
//	struct node {
//		TreeNode* vec[9];
//	};
//}
//
//// 层次遍历封装
//void PrintInfo(TreeNode*& t) {
//	cout << "层序遍历" << endl;  // 可视化遍历
//	if (t == NULL) {
//		cout << NULL;
//		return;
//	}
//	queue<TreeNode*> q;
//	q.push(t);
//	int init = 1, count = 1;
//	// 根据个数判断最多几层 
//	int height = getTreeDepth(t);
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
//	}
//}
//// 验证删除插入查找的正确性
//void verification(TreeNode*& t) {
//	int del_num = 0;
//	int input = 0;
//	PrintInfo(t);
//	while (true) {
//		cout << "1.查找" << endl;
//		cout << "2.打印" << endl;
//		cout << "3.删除" << endl;
//		cout << "4.插入" << endl;
//		cout << "输入要的编号: (1-4)";
//		cin >> input;
//		
//		switch (input) {
//		case 1:
//			cout << "输入要查找的数值: " << endl;
//			cin >> input;
//			if (balance_search_tree(t, input) == NULL)
//				cout << "不存在;\n";
//			else {
//				cout << "找到\n";
//			}
//			break;
//		case 2:
//			PrintInfo(t);
//			break;
//		case 3:
//			cout << "输入要删除的个数:";
//			cin >> input;
//			while (input--) {
//				cin >> del_num;
//				delete_Node(t, del_num);
//			}
//			break;
//		case 4:
//			cout << "输入要插入的个数:";
//			cin >> input;
//			while (input--) {
//				cin >> del_num;
//				insert_bt(t, del_num);
//			}
//			break;
//		}
//	}
//}
//int main() {
//	// 生成随机数 
//	////需要先调用srand() 设置种子
//	srand((unsigned)time(NULL));
//	/*int i = 5;
//	while (i--) {
//		cout << "随机数 : " << rand() << '\n';
//	}*/
//	
//
//	//TreeNode t_root(5, NULL, NULL); //静态的地址
//	//TreeNode t1(7, NULL, NULL);  // 不等效于new
//	//TreeNode t2(2, NULL, NULL);
//	//TreeNode t3(6, NULL, NULL);
//	//TreeNode t4(3, NULL, NULL);
//	//TreeNode t5(8, NULL, NULL);
//	//TreeNode t6(4, NULL, NULL);
//
//
//	//TreeNode t_arr[6] = {t1,t2,t3,t4,t5,t6};
//	int arr[7] = { 5,7,2,6,3,8,4 };
//	TreeNode* root = NULL;
//	//TreeNode*& t_r = t_arr;
//
//	for (int i = 0;i < 7;i++) {
//		insert_bt(root, arr[i]);
//	}
//	
//
//	//PostOrder(&t_root);
//
//	//// 层次遍历
//	//// 准备一个队列 访问完当前结点,插入后两个
//	PrintInfo(t_r);
//	
//	verification(t_r);
//
//}
//
//
///*
//效率分析看深度
//平衡最坏O(log2(n))  根据floor(log2(n))+1
//不管最坏O(n)
//
//*/