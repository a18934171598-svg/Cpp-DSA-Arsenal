//#include<iostream>
//#include<vector>
//#include<climits>
//#include<algorithm>
//using namespace std;
//
//// ×éºÏ
//
//long long n, m;
//long long l = LLONG_MAX;
//
//
//
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cin >> n >> m;
//	vector<long long>vc(n);
//	
//	
//
//	for (auto& elm : vc) {
//		cin >> elm;
//	}
//	sort(vc.begin(), vc.end());
//
//	for (long long i = 0;i <= n - m;i++) {
//
//			long long temp_l = 
//				vc[i + m - 1] * vc[i + m - 1] - vc[i] * vc[i];
//			if (temp_l < l) l = temp_l;	
//	}
//
//	cout << l;
//}