//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	int w, x, h, q;
//	cin >> w >> x >> h;    // 长 宽 高 1<=i<=20
//	cin >> q;              // q<100
//	bool arr[20][20][20] = {false};
//	for (int i = 0;i < q;i++) {
//		int x1, y1, z1,x2,y2,z2;
//		cin >> x1>>y1>>z1>>x2>>y2>>z2;
//		for (int a =x1-1 ;a<x2;a++) {
//			for (int b = y1 - 1;b < y2;b++) {
//				for (int c = z1 - 1;c < z2;c++) {
//					arr[c][b][a] = true;
//				}
//			}
//		}
//	}// 怎么解决重复问题
//	int count = 0;
//	for (int a = 0;a < w;a++) {
//		for (int b = 0;b < x;b++) {
//			for (int c = 0;c < h;c++) {
//				if (!arr[c][b][a]) {
//					count++;
//				}
//			}
//		}
//	}
//	cout << count;
//}
