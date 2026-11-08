//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//// 约数的估计错误 i是300多,但是n/i还在后面呢
//vector<int>divisor(100001);  // 桶排序
//void find_divisor(int n) {
//	for (int i = 1;i * i <= n;i++) {
//		if (n % i == 0) {
//			divisor[i]++;
//			if (n / i != i) { // 避免平方数重复
//				divisor[n / i]++;
//			}
//		}
//	}
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//
//	
//	vector<int> vc(n);
//	for (int i = 0;i < n;i++) {
//		cin >> vc[i];
//	}
//
//	sort(vc.begin(), vc.end());
//
//	for (int i = 0;i < n;i++) {
//		find_divisor(vc[i]);
//	}
//
//	for (int i = 100000;i >0;i--) {
//		if (divisor[i] >= 3) // 证明i是gcd
//		{
//			int cnt = 0;
//			for (int j = 0;j < n;j++) {
//				if (cnt==3) {
//					break;
//				}
//				// 由小到大输出
//				if (vc[j] % i == 0) { 
//					cout << vc[j] << " "; 
//					cnt++;
//				}
//			}
//			break;
//		}
//	}
//
//}