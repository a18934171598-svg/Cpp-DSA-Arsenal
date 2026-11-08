//#include<iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;  // n不大于9
//	// 蛇形方阵  3个字符
//	// 1-n*n
//	int arr[9][9] = { 0 };
//
//	//[0][0]    // 右 col+
//	//[0][1]
//	//[0][2]
//	//[0][3]
//	//		//  下 line+
//	//[1][3]
//	//[2][3]
//	//[3][3]
//	//		// 左 col-
//	//[3][2]
//	//[3][1]
//	//[3][0]
//	//		// 上 line-
//	//[2][0]
//	//[1][0]
//	//		// 右边
//	//[1][1]
//	//[1][2]
//			// 下
//	//[2][2]
//	//		//左
//	//[2][1]
//	int dir[2] = {1,-1};
//	int line = 1, col = n-1;
//	int ptr_em=2,ptr_t=2,p_t = 1;
//	bool isOpen = true;
//	bool isOpen2 = false;
//	int use_dir = 1;
//	int t = n;
//	for (int i = 1;i <= n;i++) {
//		arr[0][i - 1] = i;
//	}
//	for (int num = n+1;num <= n * n;num++) {  // 5
//		
// 		arr[line][col] = num;
//
//		ptr_em++;   // 调整它
//
//		//  使用  下 line+左col-上line-右col+
//		// 一波
//		(isOpen ? line : col) += use_dir;
//		
//
//		if (ptr_em % t == 0) {  // 周期有问题
//			ptr_t++;
//			p_t++;
//			if (ptr_t%3==0) {
//				ptr_t = 1;
//				isOpen2 = !isOpen2;
//			}
//			if(p_t%3==0){
//				p_t = 1;
//				t--;
//			}
//			isOpen = !isOpen;
//			
//			use_dir = dir[isOpen2]; // 要调整
// 			ptr_em = 1;
//		}
//		
//	}
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < n;j++) {
//			(arr[i][j] > 9) ? cout << " " : cout << "  ";
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//
//}