//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<climits>
//using namespace std;
//
//struct node {
//	long long write_count;
//	long long init_count;
//	bool operator<(const node&other)const {
//		return this->init_count < other.init_count;
//	}
//};
//
//bool check(long long mid,vector<node>&nodes,long long target) {
//	// Ò»Ì×Ò»Ì×
//	long long t_mid = mid;
//	for (long long i = 0;i < nodes.size();i++) {
//		if (nodes[i].init_count + nodes[i].write_count < mid)
//			return false;
//		if (mid - nodes[i].init_count > 0) {
//			target -= (mid - nodes[i].init_count) ;
//			if (target < 0) return false;
//		}
//	}
//
//	return true;
//}
//
//long long process(long long l,long long r,long long target,vector<node>&nodes) {
//	long long ans = 0;
//	while (l <= r) {
//		long long mid = (l + r) / 2; // midÌ×¿É·ñ
//
//		bool res = check(mid,nodes,target);
//
//		if (res) {
//			l = mid + 1;
//			ans = mid;
//		}
//		else {
//			r = mid - 1;
//		}
//
//	}
//	
//	return ans;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	long long n, m;
//	long long min_count =INT_MAX;
//
//	cin >> n >> m;
//	vector<node>nodes(n);
//
//	for (long long i = 0;i < n;i++) { 
//		cin >> nodes[i].init_count;
//		min_count = min(min_count, nodes[i].init_count);
//	}
//
//	
//	for (long long i = 0;i < n;i++) cin >> nodes[i].write_count;
//
//	sort(nodes.begin(), nodes.end());
//
//	for (long long i = 0;i < n;i++) {
//		nodes[i].init_count -= min_count;
//	}
//
//	cout<<min_count +process(1,m,m,nodes);
//
//
//}