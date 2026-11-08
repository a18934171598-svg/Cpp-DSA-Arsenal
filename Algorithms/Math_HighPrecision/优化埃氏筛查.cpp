//#include<cmath>
//#include<vector>
//#include<iostream>
//
//using namespace std;
//
//const int MAX = 1000;
//
//int main() {
//	//
//	vector<bool> is_prime(MAX+1,true);
//	is_prime[0] = is_prime[1] = false;
//	// 0 和 1不是素数
//	for (int i = 2;i * i <= MAX;i++) {
//		if (is_prime[i]) {
//			for (int j = i * i;j <= MAX;j += i) {
//				is_prime[j] = false;
//			}
//		}
//		
//	}
//	// 收集素数
//}
