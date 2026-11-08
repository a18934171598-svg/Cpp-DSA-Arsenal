//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct LinkNode{
//	int val;
//	LinkNode* next;
//};
//
//struct LinkQueue {
//	LinkNode* front,*rear;
//	LinkQueue():front(NULL),rear(NULL){}
//};
//
//int getMax(LinkNode* head) {
//	if (!head->next) return 0;
//	LinkNode* p = head;
//	int max = head->val;
//	for (p = p->next;p;p = p->next)
//		if (max < p->val) max = p->val;
//
//	return max;
//}
//
//bool veritation(LinkNode* p,int val){
//	for (;p;p = p->next) if (p->val == val)  return false;
//
//	return true;
//}
//
//LinkNode* RadixPass(LinkNode* head,int exp) {
//	LinkQueue Q[10];
//
//
//	LinkNode* p = head;
//
//	while (p) {
//		LinkNode* next = p->next;
//		p->next = NULL;
//
//		int digit = (p->val/exp) % 10;
//
//		if (!Q[digit].front) {
//			Q[digit].front = Q[digit].rear = p;
//		}
//		else {
//			// 看看有没有重复  没有重复
//			if (veritation(Q[digit].front, p->val)) {
//				Q[digit].rear->next = p;
//				Q[digit].rear = p;
//			}
//		}
//
//		p = next;
//
//	}
//
//	LinkNode dummy;
//	LinkNode* cur = &dummy;
//
//	// 收集
//	for (int i = 0;i < 10;i++) {
//		if (Q[i].front)
//		{
//			cur->next = Q[i].front;
//			cur = Q[i].rear;
//		}
//	}
//
//	return dummy.next;
//
//
//}
//
//LinkNode* radixSort(LinkNode* head) {
//	int max = getMax(head);
//	for (int exp = 1;max / exp > 0;exp *= 10) {
//		head = RadixPass(head,exp);
//	}
//	return head;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//	LinkNode dummy;
//	LinkNode* cur = &dummy;
//	vector<LinkNode> vc(n);
//	for (int i = 0;i < n;i++) { 
//	cin >> vc[i].val;
//	cur->next = &vc[i];
//	cur = &vc[i];
//	}
//
//	cur = radixSort(dummy.next);
//
//	int count = 0;
//	for (LinkNode* p = cur;p;p = p->next)
//		count++;
//
//	cout << count<<endl;
//
//	for (LinkNode* p = cur;p;p = p->next)
//		cout << p->val<<" ";
//	//去重
//	
//}