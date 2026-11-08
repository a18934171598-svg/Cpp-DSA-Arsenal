//#define _CRT_SECURE_NO_WARNINGS
//#include<cstdio>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//long long m,n;
//// 找到第一个>=target的和前一个比较一下绝对值
//long long find(long long left, long long right,vector<long long>&a,long long target) {
//	long long ans = -1;  // 没有>=target的,都小于target 那就选最大的
//
//	// 与前一个比较,前提是有前一个.
//	while (left <= right) {
//		long long mid = (left + right) / 2;
//		if(a[mid]>=target){
//			ans = mid;
//			right = mid - 1;
//		}
//		else {
//			left = mid + 1;
//		}
//
//	}
//	if (ans == -1) {
//		return target-a[a.size() - 1];
//	}
//	// 判断是否有前一个 [ans-1]!=0
//	if (ans != 0) {
//		long long l_abs = target-a[ans-1];
//		long long r_abs = a[ans]-target;
//		return l_abs > r_abs ? r_abs : l_abs;
//	}
//	else {
//		return a[ans] - target;
//	}
//}
//
//int main() {
//	freopen("C:\\Users\\13829\\Downloads\\P1678_2.in", "r", stdin);
//	
//	cin >> m >> n;
//	vector<long long> vc_college(m);
//	vector<long long> vc_score(n);
//
//	for (auto& elm : vc_college) {
//		cin >> elm;
//	}
//
//	for (auto& elm : vc_score) {
//		cin >> elm;
//	}
//
//
//	long long min_satisfied = 0;
//
//	sort(vc_college.begin(),vc_college.end());
//
//	for (long long elm : vc_score) {
//		min_satisfied+=find(0,m-1,vc_college,elm);
//	}
//
//	cout << min_satisfied;
//
//}