//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//
//	int n;
//	cin >> n;
//	vector<int>vc(n);
//	for (int i = 0;i < n;i++) {
//		cin >> vc[i];
//	}
//	// 最长上升子序列 LIS
//	vector<int>tail;
//
//	// 贪心+二分
//	for (int i = 0;i < n;i++) {
//		auto it = lower_bound(tail.begin(),tail.end(),vc[i]);
//
//		if (it == tail.end()) {
//			tail.push_back(vc[i]);
//		}
//		else {
//			*it = vc[i];
//		}
//	}
//
//	cout << vc.size() - tail.size();
//}