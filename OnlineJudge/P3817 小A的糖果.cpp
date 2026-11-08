//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	long long n;
//	cin >> n;
//	vector<long long> vc(n);
//
//	long long x;
//	cin >> x;
//
//	
//
//	cin >> vc[0];
//
//	if (n == 1) {
//		if (vc[0] > x) cout << vc[0] - x;
//		return 0;
//	}
//
//	long long count = 0;
//	for (long long i = 1;i < n;i++) { 	
//		cin >> vc[i]; 
//		long long sum = vc[i - 1] + vc[i];
//
//		if (sum > x) {
//
//			if(vc[i]>=(sum-x))
//			vc[i] -= (sum-x);
//			else {
//				vc[i] = 0;
//			}
//
//			count +=(sum-x);
//		}
//	}
//
//	cout << count;
//
//
//}