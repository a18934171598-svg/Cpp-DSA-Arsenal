//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//
//long long find(long long left,long long right,long long target,vector<long long>&a) {
//	long long ans=-1;
//	long long pair_count = 0;
//
//	while (left <= right) {  // 找到第一个>=target的
//		long long mid = (left + right) / 2;
//		if (a[mid] >= target) {
//			ans = mid;
//			right = mid - 1;
//		}
//		else {
//			left = mid + 1;
//		}
//
//	}
//	if (ans == -1) return 0;
//
//	while (ans!=a.size()) {
//		if (a[ans] != target) break;
//		pair_count++;
//		ans++;
//	}
//	return pair_count;
//}
//
//int main() {
//	//freopen("C:\\Users\\13829\\Downloads\\P1102_11.in","r",stdin);
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	long long n, C;
//	cin >> n >> C;
//	vector<long long>vc(n);
//	for (auto& elm : vc) {
//		cin >> elm;
//	}
//	sort(vc.begin(), vc.end());
//
//	long long pair_count = 0;
//	long long pre = 0;
//	long long pre_result = 0;
//	for (long long i = 0;i < n;i++) {
//		// 同样的没有必要重复计算
//		if (pre == vc[i]) {
//			pair_count += pre_result; 
//			continue;
//		}
//		else {
//			pre_result = find(i, n - 1, vc[i] + C, vc);
//			pre = vc[i];
//			pair_count += pre_result;
//		}
//		
//	}
//	cout << pair_count;
//}