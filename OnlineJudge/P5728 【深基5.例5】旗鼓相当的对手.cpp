//#include<iostream>
//using namespace std;
//
//struct lib {
//	int a;
//	int b;
//};
//
//int main() {
//	int n, count = 0;
//	cin >> n;
//	int arr[1000][4];
//	for (int i = 0;i < n;i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		arr[i][0] = a;
//		arr[i][1] = b;
//		arr[i][2] = c;
//		arr[i][3] = a+b+c;
//	}
//	int i = n;  // 3
//	while (i--) {  // 握手问题 几次 是几
//		int k = i;  // i==2 
//		while (k--) {
//			// k==1
//			if ((arr[i][3] - arr[k][3] > 0 ? arr[i][3] - arr[k][3] : -1 * (arr[i][3] - arr[k][3])) > 10) {
//				  // 说明不是旗鼓相当
//			}
//			// 分差小于10的
//			else {
//				int t1 = arr[i][0] - arr[k][0];
//				int t2 = arr[i][1] - arr[k][1];
//				int t3 = arr[i][2] - arr[k][2];
//				if ((t1 > 0 ? t1 : -1 * t1) <= 5 && (t2 > 0 ? t2 : -1 * t2) <= 5 && (t3 > 0 ? t3 : -1 * t3)<=5) {
//					// 各科不大于5
//					count++;
//				}
//				
//			}
//			
//		}
//
//	}
//	cout << count;
//}