//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//struct node {
//	int a, b, c;  // 天然的向下取整
//};
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int a, b, c;
//	int k;
//	int T;
//	cin >> T;
//	vector<node> vc(T);
//	for (int i = 0;i < T;i++) {
//		cin >> a >> b >> c >> k;
//
//		while (k--) {
//			int int_tmpa = (b + c) / 2;
//			int int_tmpb= (a + c) / 2;
//			int int_tmpc = (b + a) / 2;
//			a = int_tmpa;
//			b = int_tmpb;
//			c = int_tmpc;
//			if (a == b && a == c) break;
//		}
//		vc[i].a = a;
//		vc[i].b = b;
//		vc[i].c = c;
//	}
//
//	for (auto& elm : vc) {
//		cout << elm.a << " " << elm.b << " " << elm.c<<endl;
//	}
//
//}