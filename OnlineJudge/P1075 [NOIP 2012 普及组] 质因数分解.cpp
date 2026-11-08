//#include<iostream>
//
//using namespace std;
//inline bool isPrime(int num) {  // 2,3 没办法判断
//	for (int i = 2;i*i <= num;i++)
//	{
//		if (num % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	int n;
//	// 质数最小 2 最大10000 0000
//	cin >> n;
//	for (int i = 3;i < 100000000;i+=2) {
//		if (isPrime(i)) {
//			if (n % i == 0) {
//				if (isPrime(n / i)) {
//					cout << n / i;
//					break;
//				}
//
//			}
//			
//		}
//	}
//
//}