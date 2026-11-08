//#include"SortTest.h"
//int main() {
//	//vc_b.resize(10);
//	//int arr[10];    // 多留一个
//	//srand(time(0));
//	//int length = sizeof arr / sizeof(int);
//
//	//for (int i = 0;i < length;i++) {
//	//	arr[i] = rand() % (100 + 1) + 0;
//	//}
//
//	//for (int i = 0;i < length;i++) {
//	//	cout << arr[i] << " ";
//	//}
//	//cout << endl;
//	//MergeSort(arr,0,length-1);
//	//// a~b
//	////rand() % (b - a + 1) + a;
//
//	//// 各种排序的用时
//	//// 1.插入排序
//	//for (int i = 0;i < length;i++) {
//	//	cout << arr[i] << " ";
//	//}
//
//	// 链表归并排序
//	srand(time(0));
//	int length = 10;
//	ListNode dummy(0); 
//	ListNode* cur = &dummy; 
//	vector<ListNode> vc_list;
//	vc_list.resize(length);
//
//	for (int i = 0;i < length;i++) {
//		//rand() % (b - a + 1) + a;
//		vc_list[i].val = rand() % 100;
//		cur->next = &vc_list[i];
//		cur = cur->next;
//	}
//	cur = sortList(dummy.next);
//	while (cur) {
//		cout << cur->val << " ";
//		cur = cur->next;
//	}
//}