//#include<iostream>
//#include<vector>
//#include<iomanip>
//using namespace std;
//
//
//int main() {
//	int n, k;
//	cin >> n >> k;
//	vector<int> v_k;
//	vector<int> v;
//
//	for (int i = 1;i <= n;i++) {  // 10000²»´ó
//		if (i % k == 0) {
//			v_k.push_back(i);
//		}
//		else {
//			v.push_back(i);
//		}
//	}
//	n = 0;
//	for (int& num : v_k) {
//		n += num;
//	}
//	cout << fixed << setprecision(1);
//	cout << (double)n/v_k.size()<<" ";
//	n = 0;
//	for (int& num : v) {
//		n += num;
//	}
//	cout << (double)n / v.size();
//}