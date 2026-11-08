//#include"SortTest.h"
//// 基数排序链式存储实现  O(d(n+r))
//
//int getMax(LinkNode* head) {
//	if (!head||!head->next) return 0;
//	
//	int max = head->data;
//
//	for (LinkNode* p = head->next;p;p = p->next) {
//		if (p->data > max) max = p->data;
//	}
//	return max;
//}
//
//LinkNode* RadixPass(LinkNode* head, int exp) {
//	LinkQueue Q[10];
//	
//	LinkNode* p = head;
//
//
//	// 分配 O(n)
//	while (p) {
//		LinkNode* next = p->next;
//		p->next = NULL;
//
//		int digit = (p->data / exp) % 10;
//
//		if (!Q[digit].front) { // 还没有
//			Q[digit].front = Q[digit].rear = p;
//		}
//		else {
//			Q[digit].rear->next = p;
//			Q[digit].rear = p;
//		}
//
//		p = next;
//	}
//
//	// O(r) 收集
//	LinkNode dummy;
//	LinkNode* cur = &dummy;
//
//	for (int i = 0;i < 10;i++) {
//		if (Q[i].front) {
//			cur->next = Q[i].front;
//			cur = Q[i].rear;
//		}
//	}
//	return dummy.next;
//}
//
//void PrintLink(LinkNode* p) {
//	for (;p;p = p->next) {
//		cout << p->data<<" ";
//	}
//}
//
//LinkNode* RadixSort(LinkNode* head) {
//	int max = getMax(head);
//	for (int exp = 1;max / exp > 0;exp *= 10) {  // d趟就是最大值d位
//		head = RadixPass(head,exp);
//	}
//
//	return head;
//}
//
//// 顺序表实现基数排序
//int getMax(int*a,int len){
//	int max = a[0];
//	for (int i = 1;i < len;i++)  if (max < a[i]) max = a[i];
//	return max;
//}
//void radixSort(int* a,const int n) {
//	int max = getMax(a,n);
//	int* output = new int[n];
//	for (int exp = 1;max / exp > 0;exp *= 10) {
//		
//		int count[10] = { 0 };
//		int digit;
//		for (int i = 0;i < n;i++) {
//			digit = (a[i] / exp) % 10;
//			count[digit]++;
//		}
//		// 前缀和
//		for (int i = 1;i < 10;i++) {
//			count[i] = count[i] +count[i-1] ;
//		}
//
//		for (int i = n - 1;i >= 0;i--) {
//			digit = (a[i] / exp) % 10;
//			output[count[digit]--] = a[i];
//
//		}
//
//		// 复制回原数组
//		for (int i = 0;i < n;i++) a[i] = output[i];
//
//	}
//
//	delete[] output;
//}