//#include<iostream>
//#include<vector>
//using namespace std;
//// 要求输出这个数字在序列中第一次出现的编号
//int lower_bound(vector<int>&a,int target) {  // 寻找下界 找到第一个大于等于的数字不一定是target
//	int ans = -2;  // 找不到的情况 还有>不等于的情况 
//	int l = 0,r=a.size()-1;
//	while (l <= r) {
//		int mid = (l + r) / 2;
//		if (a[mid] >= target) {  // 可能在左边还有,先标记
//			ans = mid;
//			r = mid - 1;
//		}
//		else {
//			l = mid + 1;  // a[mid]小于的话,还没有出现target向右寻找
//		}
//
//	}
//
//	if (ans != -2 && a[ans] != target) ans = -2;
//	return ans;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	int n, m; //1≤n≤10^6 1≤m≤10^5 
//	cin >> n >> m;
//	vector<int> vc(n);
//
//	for (int i = 0;i < n;i++) cin >> vc[i];
//
//	// 寻访次数
//	vector<int> vc_access(m);
//
//	for (int i = 0;i < m;i++) cin >> vc_access[i];
//
//	for (int i = 0;i < m;i++) {
//		cout<<lower_bound(vc,vc_access[i])+1 << " ";
//	}
//
//}
