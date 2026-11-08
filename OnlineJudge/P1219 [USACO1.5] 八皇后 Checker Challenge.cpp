//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int n;
//int total_count = 0;
//vector<int> print_col;
//
//bool col[13] = { false };
//bool dia1[25] = {false};  //
//bool dia2[25] = {false};
//
//
//
//void dfs(int line) {
//	if (line == n) {
//		total_count++;
//		// print结算 前三个就好
//		if (total_count > 3) return;
//		for (int elm : print_col) {
//			cout << elm+1 << " ";
//		}
//		cout << endl;
//		return;
//	}
//	
//	
//
//	
//		
//
//		for (int j = 0;j < n;j++) { // j为所在列
//			if (col[j] == true||
//				dia1[line - j + n - 1] == true||
//				dia2[line + j] == true
//				) continue;
//
//			print_col.push_back(j);
//
//			col[j] = true; 
//			dia1[line-j+n-1] = true;
//			dia2[line+j] = true;
//			// 
//
//			dfs(line+1);
//
//			print_col.pop_back();
//			col[j] = false;
//			dia1[line - j + n - 1] = false;  // 
//			dia2[line + j] = false;
//			// 解除封印 每次都是一点三封
//
//		}
//
//	
//	
//	
//
//}
//
//int main() {
//
//	cin >> n;
//
//	dfs(0);
//	cout << total_count;
//}