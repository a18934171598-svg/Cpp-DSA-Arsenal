//#include<iostream>
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n >> m;   // n表示n个数 m表示连续个数
//	int arr[3000];
//	// 求 m个最大值最小值 数的属性正整数
//	// 数据规模 ai<=100
//	//  0 ≤ m ≤ n≤ 3e3
//	for (int i = 0;i < n;i++) {
//		cin >> arr[i];
//	}
//
//	int min_ = 300000;
//	for (int i = 0;i <= n-m;i++) {   // 不用到尾尾
//		int sum = 0;
//		for (int j = i;j < i + m;j++) {   // 计算连续m个和
//			sum+=arr[j];
//		}
//		if (sum < min_) {
//			min_ = sum;
//		}
//	}
//	cout << min_;
//}