//#include<iostream>
//using namespace std;
//
//int main() {
//	// m个火把 k个萤石
//	// n*n方格  m k
//	int n, m, k;
//	cin >> n >> m >> k;
//	// 有几个点有怪物
//	// xi yi是火把位置  oi pi是萤石位置
//	// m行 k行
//	// 1<=n<=100  1<=m+k<=25  1<=m<=25  0<=k<=5
//	bool arr[100][100] = {false};
//	for (int i = 0;i < m;i++) {
//		int line, col;
//		cin >> col>>line;   // 注意谁先谁后
//		col--; line--;
//		arr[line][col] = true;
//		// 
//		// 附近都为光亮,但是不能超过范围 n>=xi>=0,n>=yi>=0
//		
//
//
//		// 左col-- 上line-- 右 col++ 下line++
//		if (col - 1 >= 0)  // 左
//		{
//			if (col - 2 >= 0) {
//				arr[line][col-2] = true; // 左左
//			}
//			if (line + 1 <= n) {  // 下
//				arr[line + 1][col-1] = true;  // 左上
//			}
//			arr[line][col - 1] = true;
//		}
//		if (line - 1 >= 0) // 上
//		{
//			if (line - 2 >= 0) {   // 上上
//				arr[line - 2][col] = true;
//			}
//			if (col - 1 >= 0) {  // 左上
//				arr[line - 1][col - 1] = true;
//			}
//			arr[line - 1][col] = true;
//		}
//		
//			
//		
//		
//		if (col + 1 <= n)   // 右 col+1
//		{
//			if (col + 2 <= n) {
//				arr[line][col+2] = true;
//			}
//			if (line - 1 >= 0) {  //上
//				arr[line-1][col+1] = true;
//			}
//			arr[line][col + 1] = true;
//		}
//		if (line + 1 <= n)  // 下 line+
//		{	
//			if (line+2<=n) {
//				arr[line+2][col] = true;
//			}
//			if (col+1<=n) {
//				arr[line + 1][col + 1] = true;
//			}
//			arr[line + 1][col] = true;
//		}
//		
//		
//
//		
//	}
//	for (int i=0;i < k;i++) {
//		int line, col;
//		cin >> col >> line;
//		col--;line--;
//		arr[line][col] = true;
//		bool l_l = false,up_up = false,l_d=false;
//
//		// 左col-- 上line-- 右 col++ 下line++
//		// 
//
//		if (col - 1 >= 0)  // 左
//		{
//			arr[line][col - 1] = true;
//			
//			if (line + 1 <= n) {  // 下
//				arr[line + 1][col - 1] = true;  // 左下
//				// 留下左下
//				l_d = true;
//			}
//			if (col - 2 >= 0) {
//				arr[line][col - 2] = true; // 左左
//				l_l = true;
//				if (l_d) {
//					arr[line + 1][col - 2] = true;  // 三个点左左
//				}
//			}
//
//			
//		}
//		if (line - 1 >= 0) // 上
//		{
//			arr[line - 1][col] = true;
//			if (line - 2 >= 0) {   // 上上
//				arr[line - 2][col] = true;
//				up_up = true;
//			}
//			if (col - 1 >= 0) {  // 必须要左上才有3个点
//				arr[line - 1][col - 1] = true; // 左上
//				// 三个点勘察
//				if (l_l) {
//					arr[line - 1][col - 2] = true; // 左左上
//				}
//				if (up_up) {  // 上上左  
//					arr[line - 2][col - 1] = true;
//					if (l_l) {   // 三个点有一个的情况
//						arr[line - 2][col - 2] = true;
//					}
//				}
//			}
//			
//		}
//
//
//
//		bool r_r=false,d_d=false;
//		if (col + 1 <= n)   // 右 col+1
//		{
//			if (col + 2 <= n) {
//				arr[line][col + 2] = true;  // 右右
//				r_r = true;
//			}
//			if (line - 1 >= 0) {  //右上
//				arr[line - 1][col + 1] = true;
//				if (up_up) {
//					arr[line-2][col+1] = true;  // 三个点之右之左上
//				}
//				if (r_r) {
//					arr[line-1][col+2] = true;
//					if (up_up) {
//						arr[line-2][col+2] = true;  // 差一个右下
//
//					}
//				}
//			}
//			arr[line][col + 1] = true;
//		}
//		if (line + 1 <= n)  // 下 line+
//		{
//			if (line + 2 <= n) {  // 下下    // 三个点
//				d_d = true;
//				arr[line + 2][col] = true;
//				if (l_d) {
//					arr[line+2][col-1] = true;   // 三个点下下
//					if (l_l) {
//						arr[line + 2][col - 2] = true; //三个点左下
//					}
//				}
//				
//			}
//			if (col + 1 <= n) {
//				arr[line + 1][col + 1] = true;  // 右下
//				if (r_r) {
//					arr[line+1][col+2] = true;
//				}
//				if (d_d) {
//					arr[line+2][col+1] = true;
//					if (r_r) {
//						arr[line + 2][col + 2] = true;
//					}
//				}
//			}
//			arr[line + 1][col] = true;
//		}
//
//	}
//	int count=0;
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < n;j++) {
//			if (!arr[i][j])
//				count++;
//		}
//	}
//	cout << count;
//}