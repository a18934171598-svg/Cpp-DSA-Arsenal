//#include"SortTest.h"
//int main() {
//	// 关键字与取值的概念 
//	LinkQueue Q[10];  // 有多少取值就有多少个辅助队列 r
//
//	// 空间复杂度O(r)
//
//	// 分配与回收 
//	// 一趟分配O(n) 一趟收集O(r)
//
//	//总共d趟 O(d(n+r)) 
//
//
//	srand(time(0));
//	int length = 10;
//	LinkNode dummy; 
//	LinkNode* cur = &dummy; 
//	vector<LinkNode> vc_list;
//	vc_list.resize(length);
//
//	for (int i = 0;i < length;i++) {
//		//rand() % (b - a + 1) + a;
//		vc_list[i].data = rand() % 200;
//		cout << vc_list[i].data << " ";
//		cur->next = &vc_list[i];
//		cur = cur->next;
//	}
//	cout << endl;
//	cur = RadixSort(dummy.next);
//
//	PrintLink(cur);
//}