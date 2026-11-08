//#include<iostream>
//
//using namespace std;
//
//int n;
//
//void PrintInfo(int a) {
//
//	
//	string s1(a,'o');
//	string s2(a,'*');
//
//	string s3 = "--";
//
//	s1 += s2;
//	s1 += s3;
//	for (int k = n - a;k > 0;k--) {
//		s1 += "o*";
//	}
//	// 打印初始
//	cout << s1 << '\n';
//
//	string s4(a - 1, 'o');
//	s4 += s3;
//	string s5(a - 1, '*');
//	s4 += s5;
//
//	for (int k = n+1 - a;k > 0;k--) {
//		s4 += "o*";
//	}
//	cout << s4 << '\n';
//}
//void fun(int a) {
//	while (a--) {
//		cout << "o*";
//	}
//	cout << "\n";
//}
//
//void Print2(int a) {
//	cout << "ooo*o**--*";
//	fun(a);
//	cout << "o--*o**oo*";
//	fun(a);
//	cout << "o*o*o*--o*";
//	fun(a);
//	cout << "--o*o*o*o*";
//	fun(a);
//}
//
//int main() {
//	cin >> n;
//	// 特判题目
//	for (int i = n;i >=4;i--) {
//		PrintInfo(i);
//	}
//
//	
//	Print2(n-4);
//
//}