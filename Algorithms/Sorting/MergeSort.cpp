//#include"SortTest.h"
//vector<int> vc_b;
//
//// 链表实现
//
//
//ListNode* merge(ListNode* l1, ListNode* l2) {
//	ListNode dummy(0);
//	ListNode* cur = &dummy;
//	
//	while (l1 && l2) {
//		if (l1->val <= l2->val) { // >=逆序同样稳定
//			cur->next = l1;
//			l1 = l1->next;
//		}
//		else {
//			cur->next = l2;
//			l2 = l2->next;
//		}
//		cur = cur->next;
//	}
//	// 剩下的直接插上
//	if (l1) cur->next = l1;
//	if (l2) cur->next = l2;
//
//	return dummy.next;
//
//}
//
//// 快慢指针找中点
//ListNode* findMid(ListNode* head) {
//	
//
//	ListNode* slow = head;
//	ListNode* fast = head->next;
//
//	while (fast && fast->next) {
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return slow;
//}
//
//ListNode* sortList(ListNode* head) {
//
//	if (!head || !head->next) return head;
//
//	ListNode* mid = findMid(head);
//	ListNode* right = sortList(mid->next);
//	mid->next = NULL;  // 一分为二
//
//	ListNode* left = sortList(head);
//
//	return merge(left, right);
//
//}
//
//// 顺序表实现
//void Merge(int* a,int low,int high,int mid) {
//	int k, j, i;
//	for (k = low;k <= high;k++)
//		vc_b[k] = a[k];
//
//	for (i = low, j = mid + 1, k = i;i <= mid && j <= high;k++) {
//
//		if (vc_b[i] <= vc_b[j]) a[k] = vc_b[i++];
//		else a[k] = vc_b[j++];
//	}
//
//	while (i <= mid) a[k++] = vc_b[i++];
//	while (j <= high) a[k++] = vc_b[j++];
//}
//
//void MergeSort(int*a,int low,int high) {
//	if (low < high) {
//		int mid = (low + high) / 2;
//		MergeSort(a,low,mid);
//		MergeSort(a,mid+1,high);
//		Merge(a,low,high,mid);
//	}
//}