//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct LinkNode {
//	int index;
//	string number;
//	LinkNode* next;
//	LinkNode() :next(NULL) {};
//};
//
//void clear_Link(LinkNode* p) {
//	if (!p) return;
//	// 存储下一个地址
//	while (p) {
//		LinkNode* next = p->next;
//
//		delete p;
//
//		p = next;
//	}
//	
//}
//
//int main() {
//	int n;
//	cin >> n;  // 1<=n<=20  100 位数字
//	//string* s = new string[n];
//
//	vector<LinkNode> vc(n);
//	int max = 0;
//	LinkNode dummy;
//	LinkNode* cur = &dummy;
//
//	for (int i = 0;i < n;i++) {
//		cin >> vc[i].number;
//		vc[i].index = i + 1;
//		if (vc[i].number.size() == max) {
//			cur->next = &vc[i];
//			cur = &vc[i];
//
//		}
//
//		else if (vc[i].number.size() > max) {
//			// 清空链表
//			max = vc[i].number.size();
//			//clear_Link(dummy.next);
//			dummy.next = &vc[i];
//			cur = &vc[i]; 
//		}
//	}
//	// 1.比较位数
//	// 2.逐位比较 
//
//	// 逐步删除
//	cur = dummy.next;
//	int pos_count = cur->number.size();  // 记下总位数
//	for (int i = 0;i <pos_count;i++) {
//		int max_pos = dummy.next->number[i] - '0';
//		LinkNode* pre = dummy.next;
//		cur = pre;
//		for (cur=cur->next;cur;pre = cur,cur = cur->next) {
//			if (cur->number[i] - '0' > max_pos) {  
//				max_pos = cur->number[i] - '0';  // 单开一页
//				dummy.next = cur;
//			}
//			else if(cur->number[i] - '0' < max_pos){  // 除去
//				// 接上去
//				pre->next = cur->next;
//				cur = pre;
//			}
//		}
//
//		// 如果剩下一个就跳出
//		if (!dummy.next->next) break;
//	}
//	
//	
//	cout << dummy.next->index << endl;
//	cout << dummy.next->number;
//
//}