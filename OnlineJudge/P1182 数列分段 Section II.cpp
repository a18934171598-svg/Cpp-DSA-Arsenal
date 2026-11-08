//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<climits>
//#include<cstdio>
//using namespace std;
//typedef long long ll;
//ll n, k;
//// 如果不通过说明mid还是大了
//
//struct node {
//	ll little_max;
//	ll count;
//	bool isTrue;
//	node() :isTrue(false) {};
//};
//
//node pass_(ll mid,vector<ll>&vc) {
//	ll count = 0;
//	ll max_prefix = INT_MIN;
//	node result;
//	// 前缀和
//	// [a, b] = vc[b + 1] - vc[a]
//	
//	for (ll l = 0, r = 0;r < n;) {
//		ll sum_prefix = vc[r + 1] - vc[l];
//		if (sum_prefix < mid) { 	
//			r++; 
//			if (r == n) { // 最后一次清算
//				if (sum_prefix > max_prefix)
//					max_prefix = sum_prefix;
//			}
//		}
//		else if (sum_prefix == mid) {
//			if (r!=n-1) {  // 最后一段符合不能切下去
//				count++;
//			}
//			result.isTrue = true;
//			r++;
//			l = r;
//		}
//		else { 
//			// 记录最大值
//			count++;
//			ll pre = vc[r] - vc[l];
//			if (pre > max_prefix) max_prefix = pre;
//			l = r; 
//		}
//	}
//	
//	result.count = count+1;  // 未必正确
//	result.little_max = max_prefix;
//	return result;
//}
//
//ll find(ll left,ll right,vector<ll>&a) {  // 均小于的分割法
//	ll ans;
//	while (left <= right) {
//		ll mid = (left + right) / 2;
//		node res = pass_(mid,a);
//		if (res.isTrue) { 
//			if (k >= res.count) { // 从极限角度看 是可以继续小的
//								// 但考虑到k不一定是刚好
//								// 误以为可以继续小					
//				ans = mid;
//				right = mid - 1;
//			}
//			else {
//				left = mid + 1;
//			}
//		}
//		else {
//			//if (k == res.count) {
//			//	//return res.little_max;  // 直接锁定
//			//	ans = res.little_max;
//			//}
//			if (k >= res.count) {  // k给的不一定老实
//				// 用不用先记住
//				// 不用吧毕竟说了k段的
//				ans = res.little_max;  //防止冗余切割
//				right = res.little_max - 1;
//			}
//			if (k < res.count) {
//				left = mid + 1;
//			}
//		}
//
//	}
//
//	return ans;
//}
//
//
//vector<ll>vc;
//int main() {
//	//freopen("C:\\Users\\13829\\Downloads\\P1182_4.in","r", stdin);
//
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	cin >> n >> k;  // n k
//	vc.resize(n+1);  // 预留前缀和空间
//
//	ll sum= 0,max=INT_MIN;
//	for (ll i = 0;i < n;i++) {
//		cin >> vc[i];
//		if (max < vc[i]) max = vc[i];
//		sum += vc[i];
//	}
//	// 前缀和
//	ll t=0;
//	for (ll i = 0;i <= n;i++) {
//		ll tmp = vc[i];
//		vc[i] = t;
//		t += tmp;
//	}
//	// 怎么求区间 原始下标前缀和[a,b] = vc[b+1] - vc[a]
//	
//
//	cout<<find(max, sum, vc);
//
//}