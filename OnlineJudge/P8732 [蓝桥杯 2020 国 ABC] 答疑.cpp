//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node {
//	int a, b, c;
//	long long sum;
//	node() :sum(0) {};
//	bool operator<(const node& other)const {
//		return sum < other.sum;
//	}
//};
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int n;
//	cin >> n;
//	vector<node>vc(n);
//	for (int i = 0;i < n;i++) {
//		cin >> vc[i].a;
//		cin >> vc[i].b;
//		cin >> vc[i].c;
//		vc[i].sum = vc[i].a + vc[i].b + vc[i].c;
//	}
//	sort(vc.begin(),vc.end());
//
//	vector<long long>prefix_sum(n,0);
//
//	for (int i = 1;i < n;i++) {
//		prefix_sum[i] = prefix_sum[i - 1] + vc[i - 1].sum;
//	}
//	long long s = 0;
//	for (int i = 0;i < n;i++) {
//		s += (vc[i].a +vc[i].b+ prefix_sum[i]);
//	}
//	cout << s;
//}