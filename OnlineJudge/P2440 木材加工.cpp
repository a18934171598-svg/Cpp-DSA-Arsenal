//#include<iostream>
//#include<vector>
//#include<climits>
//#include<algorithm>
//using namespace std;
//
//int n, k;
//
//int probe_bystep(int mid,vector<int>a) {
//	int count = 0;
//	for (int i = 0;i < n;i++) {
//		while (a[i] >= mid) {
//			count++;
//			a[i] -= mid;
//		}
//	}
//	return count;
//}
//
//int find(int left, int right,vector<int>&a) {
//	int ans = 0;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		int res_count = probe_bystep(mid,a);
//		
//		if (res_count < k) {
//			right = mid - 1;
//		}
//		else {  // >=k段 先记下 因为可能没有刚好匹配的
//			ans = mid;   // 先记下 看看有没有更小的合适的
//			left = mid + 1;
//		}
//	}
//	return ans; // -1说明k太大了,全是1都没办法
//}
//
//
//int main() {
//	cin >> n >> k; // 等长的k段
//	vector<int> vc(n);
//	int max = INT_MIN;
//
//	for (int i = 0;i < n;i++) {
//		cin >> vc[i];
//		if (vc[i] > max) max = vc[i];
//	}
//
//	// 排序
//	sort(vc.begin(),vc.end());  // 倒序呢
//
//	cout << find(1,max,vc);
//
//
//}