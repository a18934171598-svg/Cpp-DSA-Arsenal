//#include"SortTest.h"
//// O(n+k)
//void CountSort(vector<int>& a,vector<int>& b,int k,int n) {
//	// 初始化辅助数组C [0,k)
//	vector<int> vc(k);
//	int i;
//	for (i = 0;i < k;i++)  // O(k)
//		vc[i] = 0;
//	for (i = 0;i < n;i++)  // O(n)
//		vc[a[i]]++;  // 肯定是有的
//
//	// 处理辅助数组
//	for (i = 1;i < n;i++)
//		vc[i] = vc[i - 1] + vc[i];
//	for (i = n - 1;i >= 0;i--) { //O(n)
//		vc[a[i]]--;
//		b[vc[a[i]]] = a[i];
//	}
//}