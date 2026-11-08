//#include<iostream>
//#include<iomanip>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//struct people{
//	int registration;
//	short score;
//	people* next;
//	people():next(NULL){};
//};
//
//struct LinkQueue {
//	people* front, * rear;
//	LinkQueue() :front(NULL), rear(NULL) {};
//};
//
//int getmax(people*head){
//	if (!head) return 0;
//	int max = head->score;
//	for (people* p = head->next;p;p = p->next)
//		if (max < p->score) max = p->score;
//	return max;
//}
//
//people* radixPass_sc(people* head,int exp) {
//	LinkQueue Q[10];
//	people* p = head;
//	while (p) {
//		people* next = p->next;
//		p->next = NULL;  // 为什么要 如果是[9]的最后一个就会指向不正确的位置
//
//		int digit = (p->score/exp) % 10;
//		if (!Q[digit].front) {
//			Q[digit].front = Q[digit].rear = p;
//		}
//		else {
//			Q[digit].rear->next = p;
//			Q[digit].rear = p;  
//		}
//		p = next;
//	}
//
//	people dummy;
//	people* cur= &dummy;
//
//	for (int i = 9;i >= 0;i--) {
//		if (Q[i].front) {
//			cur->next = Q[i].front;
//			cur = Q[i].rear;
//		}
//	}
//	return dummy.next;
//}
//
//people* radixPass(people* head, int exp) {
//	LinkQueue Q[10];
//	people* p = head;
//	while (p) {
//		people* next = p->next;
//		p->next = NULL;  // 为什么要 如果是[9]的最后一个就会指向不正确的位置
//
//		int digit = (p->registration / exp) % 10;
//		if (!Q[digit].front) {
//			Q[digit].front = Q[digit].rear = p;
//		}
//		else {
//			Q[digit].rear->next = p;
//			Q[digit].rear = p;
//		}
//		p = next;
//	}
//
//	people dummy;
//	people* cur = &dummy;
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
//people* radixSort(people* head){
//	for (int exp = 1;1000 / exp > 0;exp *= 10)
//		head = radixPass(head,exp);
//
//	int max = getmax(head);
//	for (int exp = 1;max / exp > 0;exp *= 10)
//		head = radixPass_sc(head, exp);
//
//	return head;
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	int n; //5≤n≤5000 报名人数
//	int m; // 录取人数 3≤m≤n
//	cin >> n >> m;
//	/*cout << 3.145 << setprecision(2);*/
//
//	int pep_count = floor(m*1.5)+1e-8;
//	vector<people> vc(n);
//	people dummy;
//	people* cur =  &dummy;
//
//	for (int i = 0;i < n;i++) {
//		cur->next = &vc[i];
//		cin>>vc[i].registration;
//		cin>>vc[i].score;
//		cur = cur->next;
//	}
//
//	// 桶排序 
//	people* head = radixSort(dummy.next);
//
//	cur = head;
//	// 统计一下个数
//	for (int i = 0;cur&&i < pep_count;cur=cur->next,i++) {
//		
//		if (i==pep_count-1) {  // 到了最后一个
//			cout<<cur->score<<' ';
//			
//			if (cur->next) {
//				people* p = cur->next;
//				while (p) {
//					if (p->score == cur->score) {
//						pep_count++;
//						p = p->next;
//					}
//					else break;
//				}
//			}
//			break;
//		}
//	}
//
//	cout << pep_count << endl;
//
//	cur = head;
//	for (int i = 0;i < pep_count;i++) {
//		cout << cur->registration << " " << cur->score << endl;
//		cur = cur->next;
//	}
//
//
//}