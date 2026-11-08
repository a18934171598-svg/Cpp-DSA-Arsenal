//#include"SortTest.h"
//int getMax(LinkNode* head) {
//	if (!head) return 0;
//	int max = head->data;
//	for (LinkNode* p = head->next;p;p = p->next) {
//		if (p->data > max) max = p->data;
//	}
//	return max;
//}
//
//LinkNode* RadixPass(LinkNode* head, int exp) {
//	LinkQueue Q[10];
//
//	// 分配
//	LinkNode* p = head;
//
//	while (p) {
//		LinkNode* next = p->next; // 记录下一个
//		p->next = NULL; // 拆分链子
//
//		int digit = (p->data/ exp) % 10;
//
//		if (!Q[digit].front) {
//			Q[digit].front = Q->rear = p;
//		}
//		else {
//			Q->rear->next = p;
//			Q->rear = p;
//		}
//
//		p = next;
//
//	}
//
//
//	// 收集
//	LinkNode dummy;
//	LinkNode* cur = &dummy;
//
//	for (int i = 0;i < 10;i++) {
//		if (Q[i].front) {
//			cur->next = Q[i].front;
//			cur = Q[i].rear;
//		}
//	}
//
//
//	return dummy.next;
//}
//struct LinkQueue {
//	LinkNode* rear,* front;
//};
//
//LinkNode RadixSort(LinkNode* head){
//	int max = getMax(head);
//	for (int exp = 1;max / exp > 0;exp *= 10) {
//		head = RadixPass(head,exp);
//	}
//	return head;
//}
//
//// 顺序表
//void RadixSort(int* a, int, len) {
//	int max = getMax();
//	for (int exp = 1;max/exp>0;exp *= 10) {
//		int count[10] = { 0 };
//		for (int i = 0;i < n;i++) {
//			int digit = (a[i]/ exp) % 10;
//			count[digit]++;
//		}
//		// 前缀和
//		for (int i = 1;i < 10;i++) {
//			count[i] = count[i] + count[i - 1];
//		}
//
//		for (int i = ;i > 0;i--) {
//
//		}
//
//
//	}
//
//}