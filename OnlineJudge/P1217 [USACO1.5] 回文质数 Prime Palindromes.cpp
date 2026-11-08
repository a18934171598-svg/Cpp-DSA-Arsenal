//#include<iostream>
//
//using namespace std;
//
//inline bool isPrime(int num) {  // 2,3 没办法判断
//	for (int i = 2;i*i <= num;i++)
//	{
//		if (num % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
////int main() {
////	cout<<isPrime(13931);
////}
//
//int main() {
//	int a, b;
//	bool is_huiwen;
//
//	cin >> a >> b;
//	if (a == 2) {
//		cout << 2<<endl;
//	}
//	if (a % 2 == 0) {  //偶数
//		a += 1;  //变奇数
//	}
//	for (int i = a;i <= b&&i<=10000000;i+=2) {
//			// 判断是不是回文数
//			int original = i,res=0;
//			while (original) {
//				int k = original % 10;
//				res = res * 10 + k;
//				original /= 10;
//			}
//			if (res == i) {
//				if(isPrime(i))
//				cout << i << endl;
//			}
//		}
//	}
//
//
//
