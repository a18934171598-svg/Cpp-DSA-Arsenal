//#include"SortTest.h"
//
//
//// 通过len调整树的大小 小元素不断下坠
//void HeadAdjust(int* a, int k, int len) {
//	a[0] = a[k];   // k是原本为k的数字的停留位置
//	for (int i = k * 2;i <= len;i*=2) {  // i代表较大孩子
//		if (i < len && a[i] < a[i + 1])
//			i++; // 指向较大的孩子
//		if (a[0] >= a[i]) break;  // 有待商榷 等于似乎没有换的必要
//		else {
//			a[k] = a[i];  // 取而代之
//			k = i;  // 看看会不会影响下一层
//		}
//
//	}
//
//	a[k] = a[0];
//}
//
//// 建立大根堆
//void BuildMaxHeap(int* a, int len) {
//	for (int i = len / 2;i > 0;i--)  // 从后往前分支节点
//		HeadAdjust(a, i, len);
//}
//
////void HeadAdjust(int* a,int k,int len) {
////	a[0] = a[k];
////
////	for (int i = 2 * k;i <= len;i*=2) {
////		if (i < len && a[i] < a[i + 1])
////			i++;
////		if (a[0] >= a[i]) break;
////		else {
////			a[k] = a[i];
////			k = i;
////		}
////	}
////
////	a[k] = a[0];  // 这个位置就是k的归宿
////}
//
//
//// 建立大根堆的完整逻辑
//void HeapSort(int* a,int len) {
//	BuildMaxHeap(a,len);  // 建立完大根堆
//	for (int i = len;i>1;i--) { // n-1趟
//		swap(a[1], a[i]);  // 堆顶元素和堆底元素 最大的放在末尾
//		HeadAdjust(a,1,i-1);
//	}
//}