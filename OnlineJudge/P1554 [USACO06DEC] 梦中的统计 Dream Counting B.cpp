//#include<iostream>
//using namespace std;
//
//int main() {
//	int m, n;
//	cin >> m >> n; //1<=m<n<=2e9
//
//	// n-m<=5e5
//	int res[10] = {0};
//	for (int i = m;i <= n;i++) {
//		int ori = i;
//		int g;
//		while (ori) {
//			g = ori % 10;
//			ori = ori / 10;
//			res[g]++;
//		}
//	}
//	for (int i = 0;i < 10;i++)
//		cout << res[i] << " ";
//}