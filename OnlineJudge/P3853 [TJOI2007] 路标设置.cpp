//#include<iostream>
//#include<vector>
//#include<climits>
//#include<algorithm>
//using namespace std;
//
//int l, n, k;
//int signs_cost(vector<int>a,int mid) {
//	int road_signs = 0;
//	// 从前往后遍历
//	for (int i = 0;i < a.size();i++) {
//		if (a[i] == mid) break;
//		while (a[i]>mid) {
//			a[i] -= mid;
//			road_signs++;
//		}
//	}
//	return road_signs;
//}
//
//
//int find(int left,int right,vector<int>&a) {
//	int ans = -1;  // k太过分了太少了 无法完成
//	while (left <= right) {
//		// 这个距离要花多少刀
//		int mid = (left + right) / 2;
//		int road_signs = signs_cost(a,mid);
//		if (road_signs <= k) {
//			ans = mid;
//			right = mid -1;
//		}
//		else {
//			left = mid + 1;
//		}
//	}
//
//	return ans;
//}
//
//
//int main() {
//	cin >> l >> n >> k;
//	// 最多可增设k? >=k
//
//	// 使得空旷指数最小 最大处最小
//	vector<int> vc(n);
//	
//	for (int i = 0;i < n;i++) {
//		cin >> vc[i];  // 包括起点终点
//	}
//
//	int max = INT_MIN;
//	vector<int> vc_interval(n-1);
//	
//	for (int i = 0;i < n - 1;i++) {
//		vc_interval[i] = vc[i+1]-vc[i];
//		if (max < vc_interval[i]) max = vc_interval[i];
//	}
//
//	sort(vc_interval.begin(), vc_interval.end(),greater<int>());
//
//	cout << find(1,max,vc_interval);
//		
//
//}