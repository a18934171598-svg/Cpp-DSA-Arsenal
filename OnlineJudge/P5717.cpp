//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;  // a×î´ó
//	if (a < b) {
//		int t=a;
//		a = b;
//		b = t;
//	}
//	if (a < c) {
//		int t = a;
//		a = c;
//		c = t;
//	}
//	if (b<c) {
//		int t = b;
//		b = c;
//		c = t;
//	}
//
//	if (b + c <= a) {
//		cout << "Not triangle";
//		return 0;
//	}
//	if (pow(b,2)+pow(c,2)==pow(a,2)) {
//		cout << "Right triangle";
//		return 0;
//	}
//	// ¶Û½Ç
//	if (pow(b, 2) + pow(c, 2) < pow(a, 2)) {
//		cout << "Obtuse triangle"<<endl;
//		if (b == c) {
//			cout << "Isosceles triangle\n";
//			return 0;
//		}
//	}
//	// Èñ½Ç
//	if (pow(b, 2) + pow(c, 2) > pow(a, 2)) {
//		cout << "Acute triangle"<<endl;
//	}
//	if (b == c) {
//		cout << "Isosceles triangle\n";
//	}
//	if (a == b) {
//		cout << "Equilateral triangle";
//	}
//
//
//
//
//
//
//}