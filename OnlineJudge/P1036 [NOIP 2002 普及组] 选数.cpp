//#include<iostream>
//#include<vector>
//using namespace std;
//
//bool isPrime(int a) {
//	if (a < 2) return false;
//	for (int i = 2;i*i<=a;i++) {
//		if (a % i == 0) return false;
//	}
//	return true;
//}
//int n;
//int k;
//int Prime_count = 0;
//vector<int>path;
//vector<int>vc;
//
//void dfs(int start) {
//	if (path.size() == k) {
//		int sum = 0;
//		for (int elm : path) {
//			sum += elm;
//		}
//		if (isPrime(sum))  Prime_count++;
//		return;
//	}
//
//	for (int i = start;i < n;i++) {
//		path.push_back(vc[i]);
//		dfs(i+1);
//		path.pop_back();
//	}
//
//
//}
//
//
//int main() {
//	// 1¡Ün¡Ü20£¬k<n
//	cin >> n >> k;
//	vc.resize(n);
//
//	for (int i = 0;i < n;i++) {
//		int x;
//		cin >> x;
//		vc[i] = x;
//	}
//	dfs(0);
//
//	cout << Prime_count;
//}