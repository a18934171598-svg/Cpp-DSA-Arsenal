//#include"SortTest.h"
//
//void BubbleSort(int* a,int n) {
//	for (int i = 0;i < n - 1;i++) {
//		bool isTrue = true;  // 每一趟处理
//		for (int j = n - 1;j > i;j--) {  // 从后面开始往前冒泡
//			if (a[j - 1] > a[j]) {  // 保持稳定
//				swap(a[j - 1], a[j]);
//				isTrue = false; 
//			}
//			
//		}
//		if (isTrue) return; // 一趟下来没交换过
//	}
//}
