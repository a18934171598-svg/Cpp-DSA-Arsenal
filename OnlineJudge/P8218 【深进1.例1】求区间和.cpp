//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> vc(n);
//	vector<int> vc_sum(n+1);
//	for (int i = 0;i < n;i++)
//		cin >> vc[i];
//	int m;
//	cin >> m;
//
//	// 计算前缀和 有几个 n个
//	vc_sum[0] = 0;
//	for (int i = 1;i <= n;i++)
//		vc_sum[i] = vc_sum[i - 1] + vc[i-1];
//
//	for (int i = 0;i < m;i++) {
//		int left, right;
//		cin >> left >> right;
//		vc[i] = vc_sum[right] - vc_sum[left-1];
//	}
//
//	for (int i = 0;i < m;i++) {
//		cout << vc[i]<<endl;
//	}
//
//
//}