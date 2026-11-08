//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	int init, end;
//	
//};
//
//bool cmp(const node&a,const node&b) {
//	return a.end < b.end;
//}
//
//int main() {
//
//	int n;
//	cin >> n;
//
//	vector<node> vc(n);
//
//	for (int i = 0;i < n;i++) {
//		cin >> vc[i].init >> vc[i].end;
//	}
//
//
//	sort(vc.begin(),vc.end(),cmp);
//	int pre = vc[0].end;
//	int count = 1;
//
//	for (int i = 0;i < n;i++) {
//		if (pre <= vc[i].init) {
//			count++;
//			pre = vc[i].end;
//		}
//	}
//	cout << count;
//}