//#include<iostream>
//using namespace std;
//struct pos {
//	int line, col;
//};
//int main() {
//
//	int n;
//	cin >> n;
//
//	// 矩阵从1到n*n
//	// 奇数幻方
//	// 1<=n<=39
//	int arr[39][39] = { 0 };
//	//   n-1是边界
//	// 1行中间
//	int pre = 1;
//	pos pre_position;
//	pre_position.line = 0;   // 是坐标
//	pre_position.col = n/2;  // 是坐标
//	arr[0][n / 2] = 1;
//	// 行 列
//	// [] []
//	int res = n * n;
//	for (int i = 2;i <= res;i++) {
//		// 若 (K−1) 在第一行但不在最后一列，
//		// 则将 K 填在最后一行， (K−1) 所在列的右一列；
//		if (pre_position.line == 0 && pre_position.col != n - 1) {
//			arr[n - 1][pre_position.col + 1] = i;
//			pre_position.col = pre_position.col + 1;
//			pre_position.line = n - 1;
//			continue;
//		}
//		//若(K−1) 在最后一列但不在第一行，
//		//则将 K 填在第一列，(K−1) 所在行的上一行；
//		if(pre_position.col==n-1 && pre_position.line!=0){
//			arr[pre_position.line - 1][0] = i;
//			pre_position.line = pre_position.line-1;
//			pre_position.col = 0;
//			continue;
//		}
//		//若 (K−1) 在第一行最后一列，则将 K 填在 (K−1) 的正下方；
//		// line+1 col
//		if(pre_position.line ==0 && pre_position.col ==n-1){
//			arr[pre_position.line+1][pre_position.col] = i;
//			pre_position.line = pre_position.line+1;
//			continue;
//		}
//		//若(K−1) 既不在第一行，也不在最后一列，
//		// 如果(K−1) 的右上方还未填数，则将 K 填在(K−1) 的右上方，
//		// 否则将 K 填在(K−1) 的正下方。
//		// 右上方,line-1,col+1
//		if(arr[pre_position.line-1][pre_position.col+1]==0) {
//			arr[pre_position.line - 1][pre_position.col + 1] = i;
//			pre_position.col = pre_position.col + 1;
//			pre_position.line = pre_position.line - 1;
//		}
//		else {
//			// 正下方 k-1 line+1 col
//			arr[pre_position.line + 1][pre_position.col] = i;
//			pre_position.col = pre_position.col;
//			pre_position.line = pre_position.line + 1;
//		}
//		
//		
//	}
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < n;j++) {
//			cout << arr[i][j]<<" ";
//		}
//		cout << endl;
//	}
//}