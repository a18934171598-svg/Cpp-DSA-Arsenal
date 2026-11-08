//#include<iostream>
//#include<unordered_set>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//unordered_set<int>u_set;
//vector<int>arr;
//int max_len = -1;
//int m_l,m_r;
//
//void fun1(int n,int k) {
//	int l = 0;
//	for (int r = 0;r < n;r++) {
//
//		// == 
//		while (u_set.size()==k&&!u_set.count(arr[r])) { // 左移直到位数size()<k
//			u_set.erase(arr[l]);
//			l++;
//		}
//
//		u_set.insert(arr[r]);
//
//		if (r - l + 1 > max_len) { 
//			max_len = r - l + 1;
//			m_l = l;
//			m_r = r;
//		}
//	}
//
//}
//
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n, k;
//	cin >> n >> k;
//	arr.resize(n);
//	for (int i = 0;i < n;i++) {
//		cin >> arr[i];
//	}
//	fun1(n,k);
//
//
//	cout << m_l + 1 <<' '<< m_r + 1;
//}