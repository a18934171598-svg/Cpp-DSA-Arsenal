//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct x_y {
//	int val;
//	int col;
//	int line;
//};
//
//void set_empty(int init_x,int init_y,int x,vector<vector<char>>& vc_print) { // 似乎不需要加&
//	for (int i = init_y;i < x+init_y;i++) {  // 正方形
//		for (int j = init_x;j < init_x+x;j++) {
//			vc_print[i][j] = ' ';
//		}
//	}
//}
//
//int main() {
//	int m, n;  // m层
//	cin >> m >> n;
//	int m_height = m;
//	// 第i层第j个结点
//	// 按照满二叉树的形态绘制
//	// m =1
//	if (m == 1) {
//		if(n==0)
//		cout << 'o';
//		cin >> m>>n;   // 随便吃掉空格
//		return 0;
//	}
//	int col = 1;
//	m -= 2;
//	// 看删除不删除呢
//	while (m--) {
//		col <<= 1;   // 2^m
//	}
//	int count = col;
//	col = col * 6 - 1;   // 2^(m-2)*6+1	
//	int line = (col - 2 - 1) / 2 + 2;  // 打印二位高度
//
//	vector<vector<char>>vc_print(line);
//	//   line竖着  col横着  打印专用数组
//	for (int i = 0;i < line;i++) {
//		vc_print[i].resize(col);
//		for (int j = 0;j < col;j++) {
//			vc_print[i][j] = ' ';
//		}
//	}
//	vector<vector<x_y>> vc_index(m_height);
//	// 定制长度的数值存储 三角
//	for (int i = 0;i < m_height;i++) {
//		int length = 1;
//		int power = i;
//		while (power--) {
//			length <<= 1;
//		}
//		vc_index[i].resize(length);  // 2^i
//	}
//
//	// 第一层
//	for (int i = 0, j = 0;
//		j < vc_index[m_height - 1].size();
//		j++, i++)
//	{	// line 竖着 col 横着
//		// 自己
//		vc_index[m_height - 1][j].line = line - 1;
//		vc_index[m_height - 1][j].col = i * 6;
//		vc_print[line - 1][i * 6] = 'o';
//		vc_print[line - 1 - 1][i * 6 + 1] = '/';
//		vc_index[m_height - 2][i].line = line - 3; // 中点坐标赋予
//		vc_index[m_height - 2][i].col = i * 6 + 2; // 中点坐标赋予
//		//vc_print[line - 1][i * 6] = vc_index[m_height - 1][j].val;
//
//		j++;  // 右边一个
//		vc_index[m_height - 1][j].line = line - 1;
//		vc_index[m_height - 1][j].col = i * 6 + 4; // 根据3(最小)向上扩张
//		vc_print[line - 1][i * 6 + 4] = 'o';
//		vc_print[line - 2][i * 6 + 3] = '\\';  // 转义
//		//vc_print[line - 1][i * 6+4] = vc_index[m_height - 1][j].val;
//
//		// 调整中点的位置 沿途布线
//
//		// 找到中点
//	}
//	// 测试下
//
//	/*for (int i = 0;i < vc_print[line - 2].size();i++) {
//		cout << vc_print[line - 2][i];
//	}cout << endl;
//	for (int i = 0;i < vc_print[line - 1].size();i++) {
//		cout << vc_print[line - 1][i];
//	}*/
//
//
//
//	// // 周期数折半
//	//// 拿着坐标 vc_index 
//	for (int i = m_height - 2;i > 0;i--) {  // 往上走
//		for (int j = 0;j < vc_index[i].size();j++) {  //往前走
//
//			int left_line = vc_index[i][j].line;  // 纵坐标
//			int left_col = vc_index[i][j].col;  // 横坐标
//
//			vc_print[left_line][left_col] = 'o';
//			//vc_print[left_line][left_col] = vc_index[i][j].val;  // 真实赋值
//
//			j++;
//			int right_line = vc_index[i][j].line;  // 纵坐标
//			int right_col = vc_index[i][j].col;  // 横坐标
//			vc_print[right_line][right_col] = 'o';
//
//			int middle = (left_col + right_col) / 2;
//			int distance = right_col - left_col;
//			distance >>= 1;
//
//			vc_index[i - 1][j / 2].line = left_line - distance;
//			vc_index[i - 1][j / 2].col = middle;
//
//			// 左边布线
//			for (int len = left_col + 1, width = left_line -1;len < middle;len++, width--) {
//				vc_print[width][len] = '/';
//			}
//			// 右边布线
//			for (int len = right_col - 1, width = right_line - 1;len > middle;len--, width--) {
//				vc_print[width][len] = '\\';
//			}
//		}
//	}
//	//顶点直接赋值
//	vc_print[0][(col - 1) >> 1] = 'o';
//	//vc_print[0][(col - 1) >> 1] = vc_index[0][0].val;
//
//	
//
//	// 清除逻辑
//	for (int i = 0;i < n;i++) {
//		int l, c,print_c,print_l;
//		cin >> l >> c;
//		//vc_index[l - 1][c - 1].val = 0;  // 变矮怎么办 叶子节点怎么办
//
//		// 自己就是根节点
//		if (l-1 == 0) {
//			for (int j = 0;j < line;j++) {
//				for (int k = 0;k < col;k++) {
//					vc_print[j][k] = ' ';  // 全部置空
//				}
//			}
//			//  不是正方形
//			continue;
//		}
//		print_c = vc_index[l - 1][c - 1].col;
//		print_l = vc_index[l - 1][c - 1].line;
//
//		// 方阵置空 
//		// 有多高
//		if (vc_print[print_l][print_c] != ' ') {
//
//			if (print_l==line-1) {  // 叶子节点
//				vc_print[print_l][print_c] = ' ';
//				// 左上 
//				if ((c-1) & 1)
//					vc_print[print_l-1][print_c-1] = ' ';
//				else 
//					vc_print[print_l-1][print_c +1] = ' ';
//				continue;
//			}
//
//			// 找父亲右下 根据c-1判断左右方向 偶数左奇数右
//			int parent_l,parent_c;
//			parent_l = vc_index[l - 2][(c - 1) >> 1].line;
//			parent_c = vc_index[l - 2][(c - 1) >> 1].col;
//
//			
//
//			if ((c - 1) & 1) { // 奇数
//				set_empty(parent_c+1, parent_l+1, ((line - print_l) << 1) -1, vc_print);
//			}
//			else { // 偶数不是左下
//				set_empty(parent_c- (((line - print_l) << 1) - 1), parent_l + 1, ((line - print_l) << 1) -1, vc_print);
//			}
//		}
//		// 置空不再置空
//	}
//
//	// 打印
//	for (int i = 0;i < line;i++) {
//		for (int j = 0;j < col;j++) {
//			cout << vc_print[i][j];
//		}
//		cout << endl;
//	}
//}