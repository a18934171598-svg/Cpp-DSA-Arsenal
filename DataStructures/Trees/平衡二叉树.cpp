#include"avlVisable.h"

// 平衡因子 绝对值之差 高度差 不超过1 插入更加严格

class MyException :public exception {
private: int error_code;
	   string error_msg;
public:
	// 构造函数
	MyException(int code, const string& msg) :error_code(code), error_msg(msg) {};

	const char* what() const noexcept override {
		static string full_msg;
		full_msg = "[" + to_string(error_code) + "]" + error_msg;
		return full_msg.c_str();   // string转c_string
	}
	int getErrorcode() const {  // 后面的const什么意思
		return error_code;
	}
};





 // 函数声明
class Solution {
public:
	
	int getTreeDepth(AVLNode* root) {
		if (root == NULL) return 0;
		return max(getTreeDepth(root->lchild), getTreeDepth(root->rchild)) + 1;
	}
	// 中序遍历 
	bool isBalanced(AVLNode* root) {
		return InOrder(root);

	}

	bool InOrder(AVLNode* t) {
		if (t != NULL) {  // 中序遍历的骨架

			// 左
			if (!InOrder(t->lchild)) return false;

			int lef = getTreeDepth(t->lchild);
			int rig = getTreeDepth(t->rchild);
			if (lef - rig <= -2 || rig - lef <= -2) {  // 不是刚好不平衡
				return false;
			}
			 //大小排序
			int lef_data, rig_data;
			if (t->lchild) { // 左边有
			    if (t->lchild->data >= t->data)return false;
			}
			if (t->rchild) {
			    if (t->rchild->data <= t->data)return false;
			}

			if (!InOrder(t->rchild)) return false;
		}
		return true;
	}

	
};
    
string adjust_number(int number) {
	string s = to_string(number);
	if (s.size() > 3)
		return "   ";
	if (s.size() == 3)
		return s;
	if (s.size() == 2)
	{
		s = s + " ";
		return s;
	}
	s = " " + s + " ";
	return s;
}
void set_empty(int init_x, int init_y, int x, vector<vector<char>>& vc_print) { // 似乎不需要加&
	for (int i = init_y;i < x + init_y;i++) {  // 正方形
		for (int j = init_x;j < init_x + x;j++) {
			vc_print[i][j] = ' ';
		}
	}
}
int getLevel(int n) {
	if (n <= 0) return 0;
	int level = 0;
	while (n > 0) {
		n >>= 1;  // 除以2
		level++;
	}
	return level;
}
int getpos(int n, int h) {
	int times = h - 1;
	int init = 1;
	while (times--) {
		init <<= 1;
	}
	return n - init + 1;
}

int getPower(int h) {
	int init = 1;
	while (h--) {
		init <<= 1;
	}
	return init;
}


//int getLevel(int n) {
//	if (n <= 0) return 0;
//	return 32 - __builtin_clz(n); // GCC/Clang 内置函数
//}

int getDepth(AVLNode* root) {
	if (root == NULL) return 0;
	return max(getDepth(root->lchild), getDepth(root->rchild)) + 1;
}

void PrinTree(AVLNode* root) {
	// 1.获得层数
	int layers = getDepth(root);



	if (layers == 1) {  // 0个和1个
		cout << root->data;
		return;
	}
	if (layers == 0) return;
	int layers_index = layers;
	int null_num = 0;
	int col = 1;
	layers -= 2;
	// 看删除不删除呢
	while (layers--) {
		col <<= 1;   // 2^(m-2)
	}
	int count = col;   //col组
	col = col * 6 - 1;   // 2^(m-2)*6+1	
	int line = (col - 2 - 1) / 2 + 2;  // 打印二位高度
	vector<null_pos> vc_null;
	// 创建数组

	vector<vector<x_y>> vc_index(layers_index);
	for (int i = 0;i < layers_index;i++) {
		int length = 1;
		int power = i;
		while (power--) {
			length <<= 1;
		}
		vc_index[i].resize(length);  // 2^i
	}

	// 根据树给到二维数组 层序遍历
	//  编号是number
	int number = 0, power_num = getPower(layers_index - 1);
	queue<AVLNode*> q;
	q.push(root);

	while (!q.empty()) {
		AVLNode* t_n = q.front();
		number += 1;
		q.pop();

		// 由number求出横纵坐标
		if (t_n != NULL) {
			int h = getLevel(number);
			vc_index[h - 1][getpos(number, h) - 1].data = t_n->data;
		}
		else {
			int h = getLevel(number) - 1;
			int p = getpos(number, h + 1) - 1;
			vc_index[h][p].data = INT_MIN;
			null_pos node;
			node.x = p;
			node.y = h;
			vc_null.push_back(node);
			null_num++;
		}
		// 2^(layer_index-1)

		if (number >= power_num)
			continue;


		if (t_n != NULL) {
			q.push(t_n->lchild);
			q.push(t_n->rchild);
		}
		else {
			q.push(NULL);
			q.push(NULL);
		}


	}


	// 空值怎么办 NULL_NODE

	vector<vector<char>>vc_print(line);
	//   line竖着  col横着  打印专用数组
	for (int i = 0;i < line;i++) {
		vc_print[i].resize(col);
		for (int j = 0;j < col;j++) {
			vc_print[i][j] = ' ';
		}
	}

	for (int i = 0, j = 0;
		j < vc_index[layers_index - 1].size();
		j++, i++)
	{	// line 竖着 col 横着
		// 自己
		vc_index[layers_index - 1][j].line = line - 1;
		vc_index[layers_index - 1][j].col = i * 6;

		// 转成字符串居中 to_string
		//vc_print[line - 1][i * 6] = 'o';
		string s = adjust_number(vc_index[layers_index - 1][j].data);
		// 取中间 奇数正好 偶数偏右

		// 不是第一个
		if (j != 0) {
			vc_print[line - 1][i * 6 - 1] = s[0];
			vc_print[line - 1][i * 6] = s[1];
			vc_print[line - 1][i * 6 + 1] = s[2];
		}// 第一个
		else {
			vc_print[line - 1][0] = s[0];
			vc_print[line - 1][1] = s[1];
			vc_print[line - 1][2] = s[2];
		}

		vc_print[line - 1 - 1][i * 6 + 1] = '/';
		vc_index[layers_index - 2][i].line = line - 3; // 中点坐标赋予
		vc_index[layers_index - 2][i].col = i * 6 + 2; // 中点坐标赋予

		j++;  // 右边一个
		vc_index[layers_index - 1][j].line = line - 1;
		vc_index[layers_index - 1][j].col = i * 6 + 4; // 根据3(最小)向上扩张
		//vc_print[line - 1][i * 6 + 4] = 'o';

		s = adjust_number(vc_index[layers_index - 1][j].data);
		if (j != (vc_index[layers_index - 1].size() - 1)) { // 最后一个
			vc_print[line - 1][i * 6 + 3] = s[0];
			vc_print[line - 1][i * 6 + 4] = s[1];
			vc_print[line - 1][i * 6 + 5] = s[2];
		}// 第一个
		else {
			vc_print[line - 1][col - 3] = s[0];
			vc_print[line - 1][col - 2] = s[1];
			vc_print[line - 1][col - 1] = s[2];
		}

		vc_print[line - 2][i * 6 + 3] = '\\';  // 转义

		// 顶点直接赋值
		s = adjust_number(vc_index[0][0].data);
		vc_print[0][((col - 1) >> 1) - 1] = s[0];
		vc_print[0][((col - 1) >> 1)] = s[1];
		vc_print[0][((col - 1) >> 1) + 1] = s[2];
	}

	for (int i = layers_index - 2;i > 0;i--) {  // 往上走
		for (int j = 0;j < vc_index[i].size();j++) {  //往前走

			int lchild_line = vc_index[i][j].line;  // 纵坐标
			int lchild_col = vc_index[i][j].col;  // 横坐标

			//vc_print[lchild_line][lchild_col] = 'o';
			string s = adjust_number(vc_index[i][j].data);

			vc_print[lchild_line][lchild_col - 1] = s[0];
			vc_print[lchild_line][lchild_col] = s[1];
			vc_print[lchild_line][lchild_col + 1] = s[2];

			j++;
			int rchild_line = vc_index[i][j].line;  // 纵坐标
			int rchild_col = vc_index[i][j].col;  // 横坐标
			//vc_print[rchild_line][rchild_col] = 'o';

			s = adjust_number(vc_index[i][j].data);
			vc_print[rchild_line][rchild_col - 1] = s[0];
			vc_print[rchild_line][rchild_col] = s[1];
			vc_print[rchild_line][rchild_col + 1] = s[2];


			int middle = (lchild_col + rchild_col) / 2;
			int distance = rchild_col - lchild_col;
			distance >>= 1;

			vc_index[i - 1][j / 2].line = lchild_line - distance;
			vc_index[i - 1][j / 2].col = middle;

			// 左边布线
			for (int len = lchild_col + 1, width = lchild_line - 1;len < middle;len++, width--) {
				vc_print[width][len] = '/';
			}
			// 右边布线
			for (int len = rchild_col - 1, width = rchild_line - 1;len > middle;len--, width--) {
				vc_print[width][len] = '\\';
			}
		}
	}

	// 2.找到坐标

	//   清除逻辑
	// 获得空结点位置
	for (int i = 0;i < null_num;i++) {
		int l, c, print_c, print_l;
		l = vc_null[i].y;
		c = vc_null[i].x;
		//vc_index[l - 1][c - 1].data = 0;  // 变矮怎么办 叶子节点怎么办

		// 自己就是根节点
		if (l == 0) {
			for (int j = 0;j < line;j++) {
				for (int k = 0;k < col;k++) {
					vc_print[j][k] = ' ';  // 全部置空
				}
			}
			//  不是正方形
			continue;
		}
		print_c = vc_index[l][c].col;
		print_l = vc_index[l][c].line;

		// 方阵置空 
		// 有多高


		if (print_l == line - 1) {  // 叶子节点
			// 左上 
			if (c & 1)
				vc_print[print_l - 1][print_c - 1] = ' ';
			else
				vc_print[print_l - 1][print_c + 1] = ' ';
			continue;
		}

		// 找父亲右下 根据c-1判断左右方向 偶数左奇数右
		int parent_l, parent_c;
		parent_l = vc_index[l - 1][c >> 1].line;
		parent_c = vc_index[l - 1][c >> 1].col;



		if (c & 1) { // 奇数
			set_empty(parent_c + 1, parent_l + 1, ((line - print_l) << 1) - 1, vc_print);
		}
		else { // 偶数不是左下
			set_empty(parent_c - (((line - print_l) << 1) - 1), parent_l + 1, ((line - print_l) << 1) - 1, vc_print);
		}
	}
	// 置空不再置空

// 打印
	for (int i = 0;i < line;i++) {
		for (int j = 0;j < col;j++) {
			cout << vc_print[i][j];
		}
		cout << endl;
	}
}
void PrintInfo(AVLNode*& t) {
	cout << "层序遍历" << endl;  // 可视化遍历
	if (t == NULL) {
		cout << NULL;
		return;
	}
	queue<AVLNode*> q;
	q.push(t);
	int init = 1, count = 1;
	// 根据个数判断最多几层 
	int height = getTreeDepth(t);
	//最多 2^h-1  奇数
	int total = 1;
	while (height--) { // 2的几次方
		total <<= 1;
	}
	total--;
	int totalNum = 1;

	while (!q.empty()) {
		AVLNode* t_n = q.front();

		if (t_n == NULL)
			cout << "NU ";
		else
			cout << t_n->data << "\t";
		q.pop();

		if (init == 1) {
			cout << endl;
			int memory = count;
			while (memory--) { // 2的几次方
				init <<= 1;
			}
			count++;
			init++;
		}
		init--;

		if (totalNum == total)
			continue;

		if (t_n != NULL) {
			q.push(t_n->lchild);
			q.push(t_n->rchild);
		}
		else {
			q.push(NULL);
			q.push(NULL);
		}
		totalNum += 2;
	}
}



int getHeight(AVLNode* node) {
	return node ? node->height : 0;
}

void updateHeight(AVLNode* node) { // 如果是NULL呢
	node->height = max(getHeight(node->lchild), getHeight(node->rchild)) + 1;
}

void processing(stack<AVLNode*>& s,AVLNode*& root,Elemtype key) {
	while (!s.empty()) {
		AVLNode* tree = s.top();
		s.pop();
		short old_height = tree->height;
		short balence = getHeight(tree->lchild) - getHeight(tree->rchild);
		AVLNode* temp2 = NULL;
		if (balence == -2) {  // 是左边低了 -2 
			// 修正
			//     RR
			if (getHeight(tree->rchild->rchild) >= getHeight(tree->rchild->lchild)) {
				// 左旋
				AVLNode* temp1 = tree->rchild->lchild;
				tree->rchild->lchild = tree;
				temp2 = tree->rchild;
				tree->rchild = temp1;
				// 双update未完成 tree的父节点怎么处理
				updateHeight(tree); // 先下后上
				updateHeight(temp2);

			}
			else {
				// 右旋右孩子,左旋自己
				AVLNode* temp1 = tree->rchild->lchild->rchild;
				temp2 = tree->rchild->lchild;

				temp2->rchild = tree->rchild;
				tree->rchild->lchild = temp1;
				

				tree->rchild = temp2->lchild;
				temp2->lchild = tree;

				updateHeight(temp2->lchild);
				updateHeight(temp2->rchild);
				updateHeight(temp2);

			}
			if (!s.empty()) {
				AVLNode* father = s.top();  // 如果是空怎么办
				if (father->data < key) // 在father右边
					father->rchild = temp2;
				else father->lchild = temp2;
			}
			else {
				// 是根节点了,要换根
				root = temp2;
			}
			if (old_height == temp2->height)  // 旋转完高度不变
				break;  
		}
		else if (balence == 2) {  // 右边低了 
			
			// LL 
			if (getHeight(tree->lchild->lchild) >= getHeight(tree->lchild->rchild)) {
				// 右旋
				AVLNode* temp1 = tree->lchild->rchild;
				temp2 = tree->lchild;
				temp2->rchild = tree;

				tree->lchild = temp1;
				updateHeight(tree);
				updateHeight(temp2);
			}
			// LR
			else {   // 左旋左孩子,右旋自己
				AVLNode* temp1 = tree->lchild->rchild->lchild;
				temp2 = tree->lchild->rchild;

				temp2->lchild = tree->lchild;
				tree->lchild->rchild = temp1;
				
				// 有问题
				tree->lchild = temp2->rchild;
				temp2->rchild = tree;

				updateHeight(temp2->lchild);
				updateHeight(temp2->rchild);
				updateHeight(temp2);
			}
			if (!s.empty()) {
				AVLNode* father = s.top();  // 如果是空怎么办
				if (father->data < key) // 在father右边
					father->rchild = temp2;
				else father->lchild = temp2;
			}
			else {
				// 是根节点了,要换根
				root = temp2;
			}
			if (old_height == temp2->height)  // 旋转完高度不变
				break;  // 有问题
		}
		else {
			updateHeight(tree);
			if (tree->height == old_height)
				break;  // 然后呢 结束了
			// 高度不变 打断
		}
	}
}

// 二叉排序树的插入 插入略比链表麻烦,但查找方便
// 引起不平衡的势必为2或者-2,往下推理得到LL LR RR RL四种基本类型
int insert_bt(AVLNode*& root, Elemtype key) {   // 不会更换树根
	// 插入的时候没有结点
	AVLNode* t = root;
	AVLNode* t_pre = NULL;
	stack<AVLNode*> s;
	bool l_r = false; // false是左 true是右

	if (root == NULL) {  // 根节点
		root = new AVLNode(key, NULL, NULL,1);
		return 1;
	}
	while (t != NULL) {
		t_pre = t;
		s.push(t);
		if (key < t->data) // 左边跑
		{
			l_r = false;  // 记录左右方向
			t = t->lchild;
		}

		else if (key > t->data) {
			l_r = true;
			t = t->rchild;
		}

		else {
			return 0;  // 有重复,不用插入
		}

	}

	


	t = new AVLNode(key, NULL, NULL,1); // 叶子节点的balence为0
	if (l_r) {
		t_pre->rchild = t;
	}
	else {
		t_pre->lchild = t;
	}

	

	
	AVLNode* min_bal_tree = NULL,*father=NULL;
	// 插入完沿着道路更新height  
	int balence = 0;
	while(!s.empty()){
		AVLNode* avl = s.top();
		s.pop();
		balence = getHeight(avl->lchild) - getHeight(avl->rchild);
		if (balence != 2 && balence != -2) {
			
			updateHeight(avl);  // 不用一直更,到最小树的根即可 因为旋转后树高不变
			// 有两个需要更改的
		}
		else {
			min_bal_tree = avl;  // 最小不平衡子树
			 // 取下根子 不能是root,否则没有了
			if (avl != root)
				father = s.top();
			break;
		}
		
		
			
	}

	
	
	
	// 拿着min_bal_tree 开始判断类型LL LR RR RL旋转
	// 调整balence
	if (min_bal_tree != NULL) {
		//L...
		if (balence == 2) { // LL
			if(min_bal_tree->lchild->data>key) // 左子树上的
			{ // LL
			  // 右旋
				AVLNode* temp = min_bal_tree->lchild->rchild;
				// 调整balence值
				//updateHeight(min_bal_tree->lchild);
				min_bal_tree->lchild->rchild = min_bal_tree;
				if (father) {
					father->data > key ? father->lchild = min_bal_tree->lchild: father->rchild = min_bal_tree->lchild;
				}
				else	// father的next
					root = min_bal_tree->lchild; // 把根换掉 ,处理根的问题
				min_bal_tree->lchild = temp;
				updateHeight(min_bal_tree);
			}       
			else {      // LR

				AVLNode* temp1 = min_bal_tree->lchild->rchild->lchild;
				AVLNode* temp2 = min_bal_tree->lchild->rchild;
				// 左旋左孩子,
				temp2->lchild = min_bal_tree->lchild;
				min_bal_tree->lchild->rchild = temp1;
				

				//  右旋自己

				min_bal_tree->lchild = temp2->rchild;
				temp2->rchild = min_bal_tree;
				
				
				updateHeight(temp2->lchild);
				updateHeight(temp2->rchild);
				updateHeight(temp2);
				// 换根
				if (father) {
					father->data > key ? father->lchild = temp2 : father->rchild = temp2;
				}
				else
					root = temp2;
			}
		}
		//R...
		else {
			// RR 
			if (min_bal_tree->rchild->data<key) { // 右子树
				// 左旋
				AVLNode* temp = min_bal_tree->rchild->lchild;
				min_bal_tree->rchild->lchild = min_bal_tree;

				if (father) {
					father->data > key ? father->lchild = min_bal_tree->rchild : father->rchild = min_bal_tree->rchild;
				}else 
					root = min_bal_tree->rchild; // 把根换掉 ,处理根的问题
				//updateHeight(min_bal_tree->rchild);
				min_bal_tree->rchild = temp;
				updateHeight(min_bal_tree);

			}
			else {  // RL
				// 
				AVLNode* temp1 = min_bal_tree->rchild->lchild->rchild;
				AVLNode* temp2 = min_bal_tree->rchild->lchild;
				// 右旋右孩子,
				temp2->rchild = min_bal_tree->rchild;
				min_bal_tree->rchild->lchild = temp1;
				

				//  左旋自己

				min_bal_tree->rchild = temp2->lchild;
				temp2->lchild = min_bal_tree;
				// 换根
				if (father) {
					father->data > key ? father->lchild = temp2 : father->rchild = temp2;
				}else 
					root = temp2;
				
				updateHeight(temp2->lchild);
				updateHeight(temp2->rchild);
				updateHeight(temp2);

			}
		}
	}

	// min_bal_tree NULL 不用操作

	return 1;   // 插入成功
}

// 找到以P为根的子树中,最后被中序遍历的结点
AVLNode* LastNode(AVLNode*& t) {  // 双串 有父和无父 t是删除结点
	stack<AVLNode*> s;
	//q.push(t); // 先收集一个
	AVLNode* P = t->lchild;
/*	if (P == NULL)
		return NULL; */ // 是空节点怎么办?不可能说好了双串的

	AVLNode* pre = NULL;
	//循环找到最右下结点
	while (P->rchild != NULL) {
		s.push(P);
		pre = P;
		P = P->rchild;
	}              // 叶子结点或只有左子树
	if (pre != NULL)
		pre->rchild = P->lchild;
	else t->lchild = P->lchild;  // 自己就是最右下

	P->lchild = t->lchild; 
	P->rchild = t->rchild;

	// 
	while (!s.empty()) {
		AVLNode* tree = s.top();
		s.pop();
		short old_height = tree->height;
		short balence = getHeight(tree->lchild) - getHeight(tree->rchild);
		// 只是一边,因为右侧变小 最后一个呢
		if (balence == 2) { // LL LR
			// NULL的问题
			AVLNode* temp2;
			if (getHeight(tree->lchild->lchild) >= getHeight(tree->lchild->rchild)) {
				// 右旋
				AVLNode* temp1 = tree->lchild->rchild;
				tree->lchild->rchild = tree;
				temp2 = tree->lchild;
				tree->lchild = temp1;
				updateHeight(tree);
				updateHeight(temp2);
			}
			else {  // LR 左旋左孩子,右旋自己
				AVLNode* temp1 = tree->lchild->rchild->lchild;
				temp2 = tree->lchild->rchild;

				temp2->lchild = tree->lchild;
				tree->lchild->rchild = temp1;
				

				tree->lchild = temp2->rchild;
				temp2->rchild = tree;

				updateHeight(temp2->lchild);
				updateHeight(temp2->rchild);
				updateHeight(temp2);
			}
			// 左下
			if (!s.empty()) {
				//  一定是右下的所以不用判断
				AVLNode* father = s.top();  
				father->rchild = temp2;
			}
			else {
				// t的原始左下
				P->lchild = temp2;
			}
			if (old_height == temp2->height)
				break;
		}// 不可能是-2 因为是最右侧的队列
		else {
			updateHeight(tree);
			if (tree->height == old_height)
				break;
		}

	}
	updateHeight(P);
	return P;   // 恐怕要易主
}


//// 获取树的高度 深度会很深吗 不会,很高效 容量指数级扩大
int getTreeDepth(AVLNode* root) {
	if (root == NULL) return 0;
	return max(getTreeDepth(root->lchild), getTreeDepth(root->rchild)) + 1;
}



// 删除后的检验调整
// 平衡二叉的删除
// 删除的影响    


 
int delete_Node(AVLNode*& root, Elemtype key) {   // 谁有会拿一个结点呢,都是拿数值的
	// 拿到树根
	// 删除的是根节点怎么办
	// 根节点是叶子结点怎么办
	// 两边都有都可以取代 若是单边呢
	AVLNode* t = root;
	stack<AVLNode*> s;
	//root = /*
	AVLNode* pre = NULL;
	while (t != NULL && key != t->data) // 相等或空结点
	{
		pre = t;
		s.push(t);
		if (key < t->data)
			t = t->lchild;
		else t = t->rchild;
	}
	if (t == NULL) // 说明找不到
		return -1;

	// 找到了 t是找到的结点 pre是父节点
	// 叶子节点 左右单串
	if (t->rchild == NULL) {  // 左单边 叶子节点
		// 根节点的情况
		if (t == root) {  // 没有pre 
			root = t->lchild;   // 更换根节点  叶子节点时&root=NULL
			delete t;
			return 1;
		}
		if (pre->data < key)       //删除的是parent的右孩子
			pre->rchild = t->lchild;
		else                       //删除的是parent的左孩子
			pre->lchild = t->lchild;
	}
	else if (t->lchild == NULL) {  //右串 
		// 根节点的情况
		if (t == root) {     // 无影响
			root = t->rchild;   // 
			delete t;  
			return 1;
		}
		if (pre->data < key)       //删除的是pre的右孩子
			pre->rchild = t->rchild;
		else                      //删除的是pre的左孩子
			pre->lchild = t->rchild;
	}



	// t的左右都有 t的值就是key
	else {


		AVLNode* p;
		p = LastNode(t);  // 调整好了 未移除t
		// 根节点的情况
		if (root == t) {
			root = p;
		}


		else if (pre->data > key) { // 删除的是pre的左孩子
			pre->lchild = p;
		}
		else {
			pre->rchild = p;
		}
		s.push(p);
		
	}

	// 处理左右串逻辑 
	processing(s, root, key);
	
	delete t;
	return 1;
}

// 二叉排序树的查找  非递归实现 空间复杂度低
AVLNode* balance_search_tree(AVLNode* t, Elemtype key) {
	while (t != NULL && key != t->data) // 相等或空结点
	{
		if (key < t->data)
			t = t->lchild;
		else t = t->rchild;
	}
	return t;  // 返回NULL是没找到 找到返回结点
}

void verification(AVLNode*& t) {
	Solution s;
	int del_num = 0;
	int input = 0;
	PrintInfo(t);
	while (true) {
		cout << "1.查找" << endl;
		cout << "2.打印" << endl;
		cout << "3.删除" << endl;
		cout << "4.插入" << endl;
		cout << "输入要的编号: (1-4)";
		cin >> input;
		try {
			if (!s.isBalanced(t)) throw MyException(666,"不是平衡树");
			
		}
		catch (const MyException& e) {
			cout << e.what() << endl;

		}
		// 万能写法
		catch (...) {

		}
		
		switch (input) {
		case 1:
			cout << "输入要查找的数值: " << endl;
			cin >> input;
			if (balance_search_tree(t, input) == NULL)
				cout << "不存在;\n";
			else {
				cout << "找到\n";
			}
			break;
		case 2:
			/*PrintInfo(t);*/
			PrinTree(t);
			break;
		case 3:
			cout << "输入要删除的个数:";
			cin >> input;
			while (input--) {
				cin >> del_num;
				delete_Node(t, del_num);
			}
			break;
		case 4:
			cout << "输入要插入的个数:";
			cin >> input;
			while (input--) {
				cin >> del_num;
				insert_bt(t, del_num);
			}
			break;
		}
	}
}
 //最小不平衡子树
int main() {
	// 插入引起不平衡
	int arr[7] = { 5,7,2,6,3,8,4 };
	AVLNode* root = NULL;
	//AVLNode*& t_r = t_arr;  // 不能置空

	for (int i = 0;i < 7;i++) {
		insert_bt(root, arr[i]);
	}
	verification(root);
}

