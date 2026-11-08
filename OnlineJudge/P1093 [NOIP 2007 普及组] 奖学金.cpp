//#include<iostream>
//using namespace std;
//
//struct score {
//	short total_score;
//	short index;
//	short chinese;
//	short math;
//	short English;
//	score* next;
//	score() :next(NULL) {};
//};
//struct LinkQueue {
//	score* front,*rear;
//	LinkQueue():front(NULL),rear(NULL){}
//};
//
//int getMax_chinese(score* head) {
//	if (!head->next) return 0;
//	score* p = head;
//	int max = head->chinese;
//	for (p = p->next;p;p = p->next)
//		if (max < p->chinese) max = p->chinese;
//
//	return max;
//}
//int getMax_t_score(score* head) {
//	if (!head->next) return 0;
//	score* p = head;
//	int max = head->total_score;
//	for (p = p->next;p;p = p->next)
//		if (max < p->total_score) max = p->total_score;
//
//	return max;
//}
//
//score* RadixPass_ch(score* head,int exp) {
//	LinkQueue Q[10];
//
//
//	score* p = head;
//
//	while (p) {
//		score* next = p->next;
//		p->next = NULL;
//
//		int digit = (p->chinese/exp) % 10;
//
//		if (!Q[digit].front) {
//			Q[digit].front = Q[digit].rear = p;
//		}
//		else {
//			Q[digit].rear->next = p;
//			Q[digit].rear = p;
//		}
//
//		p = next;
//
//	}
//
//	score dummy;
//	score* cur = &dummy;
//
//	// 收集
//	for (int i = 9;i >= 0;i--) {
//		if (Q[i].front)
//		{
//			cur->next = Q[i].front;
//			cur = Q[i].rear;
//		}
//	}
//
//	return dummy.next;
//
//}
//score* RadixPass_t(score* head, int exp) {
//	LinkQueue Q[10];
//
//
//	score* p = head;
//
//	while (p) {
//		score* next = p->next;
//		p->next = NULL;
//
//		int digit = (p->total_score / exp) % 10;
//
//		if (!Q[digit].front) {
//			Q[digit].front = Q[digit].rear = p;
//		}
//		else {
//			Q[digit].rear->next = p;
//			Q[digit].rear = p;
//		}
//
//		p = next;
//
//	}
//
//	score dummy;
//	score* cur = &dummy;
//
//	// 收集
//	for (int i = 9;i >= 0;i--) {
//		if (Q[i].front)
//		{
//			cur->next = Q[i].front;
//			cur = Q[i].rear;
//		}
//	}
//
//	return dummy.next;
//
//}
//score* radixSort(score* head) {
//	int max_ch = getMax_chinese(head);
//	
//	for (int exp = 1;max_ch / exp > 0;exp *= 10) {
//		head = RadixPass_ch(head,exp);
//	}
//
//	int max_total = getMax_t_score(head);
//
//	for (int exp = 1;max_total / exp > 0;exp *= 10) {
//		head = RadixPass_t(head, exp);
//	}
//
//	return head;
//}
//
//int main() {
//	score dummy;
//	score* cur = &dummy;
//	int n;
//	cin >> n;
//	score* s_group = new score[n];
//
//	for (int i = 0;i < n;i++) {
//		cin >> s_group[i].chinese;
//		cin >> s_group[i].math;
//		cin >> s_group[i].English;
//		cur->next = &s_group[i];
//		cur = &s_group[i];
//		s_group[i].index = i + 1;
//		s_group[i].total_score = s_group[i].chinese+ s_group[i].math
//			+ s_group[i].English;
//	}
//	// 语文
//	// 稳定性就好
//
//	cur = radixSort(dummy.next);
//	int i = 0;
//	for (score* p = cur;i < 5 && p;i++, p = p->next)
//	{
//		cout << p->index<<" "<<p->total_score << " "<<endl;
//	}
//
//	delete[] s_group;
//}