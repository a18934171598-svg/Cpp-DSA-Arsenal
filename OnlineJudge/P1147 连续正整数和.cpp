//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//
//void fun(int l,int r,vector<long long>&arr,int target,vector<pair<int,int>>&answer) {
//	int index_l = l;
//	while (l <= r) {
//		int mid = (l + r) / 2; // 偏左
//		if (arr[mid] - arr[index_l - 1] == target) {
//			answer.push_back({index_l,mid});
//			return;
//			// 记下 l,mid
//		}else if(arr[mid] - arr[index_l - 1] < target) {
//			l = mid+1;
//		}
//		else {
//			r = mid-1;
//		}
//
//	}
//}
//
//int main() {
//
//	// 前缀和
//	int m;
//	cin >> m;
//
//	vector<long long>arr(m+1,0);
//
//	for (int i = 1;i <= m;i++) {
//		arr[i] = i;
//	}
//
//	for (int i = 1;i <= m;i++) {
//		arr[i] += arr[i - 1];
//	}
//
//	// 公式: [a,b]  arr[b]-arr[a-1]
//
//	vector<pair<int, int>> answer;
//
//	for (int i = 1;i < m;i++) {
//		fun(i,m,arr,m,answer);
//	}
//
//	for (auto& elm : answer) {
//		cout << elm.first << ' ' << elm.second << '\n';
//	}
//
//}