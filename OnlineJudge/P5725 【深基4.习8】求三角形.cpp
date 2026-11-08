//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++) {   // ÐÐ
//		for (int j = 1;j <= n;j++) { // ÁÐ
//			int res = i * n + j;
//			if (res >= 10)
//				cout << res;
//			else
//				cout << "0" << res;
//		}
//		cout << endl;
//	}
//	cout << endl;
//	int em = 0;
//	for (int i = 1;i <=n;i++) {
//		for(int j=n-i;j>0;j--){
//			cout << "  ";
//		}
//		for (int k = 1;k <= i;k++) {
//			em++;
//			em > 9 ? cout<<em : cout<<"0"<<em;
//		}
//		cout << endl;
//	}
//}