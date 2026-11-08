//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	
//	int n,sum=0;  // ÆÀÎ¯ÊıÁ¿ n<=1000
//	cin >> n;
//	int arr[1000],max=0,min=10;
//
//	for (int i = 0;i < n;i++) {
//		cin >> arr[i];
//		sum += arr[i];
//		if (arr[i] > max) {
//			max = arr[i];
//			continue;
//		}
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	sum = sum - min - max;
//	cout << fixed << setprecision(2);
//	cout << (double)sum / (n-2);
//
//}