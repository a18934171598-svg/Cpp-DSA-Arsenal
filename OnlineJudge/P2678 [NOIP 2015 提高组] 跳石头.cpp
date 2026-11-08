//#include<iostream>
//#include<vector>
//#include<climits>
//using namespace std;
//
//int n, m, l;
//
//int jump_stone(int mid,vector<int> a) {
//	int jump_count = 0;
//	for (int i = 0;i < a.size()-1;i++) {
//		if (a[i] < mid) {
//			a[i+1] += a[i];
//			jump_count++;
//		}
//		else {
//
//		}
//	}
//	if (a[a.size() - 1] < mid) jump_count++;
//
//	return jump_count;
//}
//
//int find(int left,int right,vector<int>& a){
//	int ans;
//	while (left <= right) {
//		int mid = (left+right)/2;
//		int m_cost = jump_stone(mid, a);
//		if (m_cost > m)  // 说明m_cost大了 mid要小 
//		{
//			right = mid - 1;
//		}
//		if (m_cost <= m) { //m_cost还小,可以继续尝试大的mid
//			ans = mid;
//			left = mid + 1;
//		}
//	}
//	
//	return ans;
//}
//
//
//int main(){
//	// 最小值最大 单调 有界 二分答案
//	cin >> l >> n >> m;
//	// 最短跳跃最长   
//	vector<int> vc_init(n+2);  // 0呢必须注意
//	vc_init[0] = 0;
//	for (int i = 1;i <= n;i++) cin >> vc_init[i];
//	vc_init[n + 1] = l;
//
//	// 有n+1个间隙
//
//	vector<int> vc_storage(n + 1);
//
//	int max = INT_MIN;
//	int min = INT_MAX;
//	for (int i = n;i >= 0;i--) {
//		vc_storage[i] = vc_init[i+1]-vc_init[i];
//		if (max < vc_storage[i]) max = vc_storage[i];
//		if (min > vc_storage[i]) min = vc_storage[i];
//	}
//	// 得到单调的距离 
//
//	// 拿到间距开始选择mid跳石头 mid怎么操作呢
//	// 选择最小的没意义 那折半? 
//	// 数据规模  0<=m<=n<=50000
//	// mid的折半 最小值 最大值
//
//	cout<<find(min,max,vc_storage);
//
//}