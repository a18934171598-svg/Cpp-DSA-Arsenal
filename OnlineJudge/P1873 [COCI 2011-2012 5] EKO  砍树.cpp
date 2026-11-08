//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<cstdio> 
//using namespace std;
//
//int lower_bound(vector<long long>&a,int target) {
//	int ans = -1;
//	int l = 0, r = a.size() - 1;
//	while (l <= r) {
//		int mid = (l + r) / 2;
//		if (a[mid] >= target) {
//			// 右边可能还有
//			ans = mid;
//			l = mid + 1;
//		}
//		else {
//			r = mid - 1;
//		}
//
//	}
//	return ans;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	
//	int n, m; // m表示需要的和长度 n表示棵树
//	cin >> n >> m;
//
//	vector<int> vc(n);
//	vector<long long> vc_storage;
//	int max_size = -1;
//	for (int i = 0;i < n;i++) {
//		cin >> vc[i];
//		if (vc[i] > max_size) { 
//			max_size = vc[i]; 
//			vc_storage.resize(max_size+1);
//		}
//		vc_storage[vc[i]]++;
//	}
//	// 调整一下 
//	for (int i = max_size-1,mem = vc_storage[max_size];i >= 0;i--) {
//		if (vc_storage[i] == 0) {
//			vc_storage[i] = mem;
//		}
//		else {
//			int temp = vc_storage[i];
//			vc_storage[i] = mem;
//			mem += temp;
//			
//		}
//	}
//	
//	// 一张和表
//	vc_storage[max_size] = 0;
//	for (int i = max_size-1;i >=0;i--) {
//		vc_storage[i] +=vc_storage[i+1];
//	}
//
//	// 二分答案寻找
//	cout<<lower_bound(vc_storage,m);
//}