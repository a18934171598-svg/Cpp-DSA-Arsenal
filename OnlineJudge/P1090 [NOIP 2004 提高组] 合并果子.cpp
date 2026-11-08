//#include<iostream>
//#include<climits>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//// 顺序表实现基数排序
//int getMax(int*a,int len){
//	int max = a[0];
//	for (int i = 1;i < len;i++)  if (max < a[i]) max = a[i];
//	return max;
//}
//void radixSort(int* a,const int n) {
//	int max = getMax(a,n);
//	int* output = new int[n];
//	for (int exp = 1;max / exp > 0;exp *= 10) {
//		
//		int count[10] = { 0 };
//		int digit;
//		for (int i = 0;i < n;i++) {
//			digit = (a[i] / exp) % 10;
//			count[digit]++;
//		}
//		// 前缀和
//		for (int i = 1;i < 10;i++) {
//			count[i] = count[i] +count[i-1] ;
//		}
//
//		for (int i = n - 1;i >= 0;i--) {
//			digit = (a[i] / exp) % 10;
//			output[count[digit]--] = a[i];
//
//		}
//
//		// 复制回原数组
//		for (int i = 0;i < n;i++) a[i] = output[i];
//
//	}
//
//	delete[] output;
//}
//
//int main() {
//
//	int n;
//	cin >> n;
//
//
//	vector<int>vc(n);
//	
//	if (n == 1) { cout << 0; return 0; }
//	
//
//	int sum = 0;
//	for (int& elm : vc) {
//		cin >> elm;
//		sum += elm;
//	}
//	if (n == 2) {
//		cout << sum;
//		return 0;
//	}
//
//
//	sort(vc.begin(),vc.end());
//	//int sum = 0;
//
//	vc[1] += vc[0];
//
//	for (int i = 1;i < n-1;i++) {
//		sum += vc[i];
//		sort(vc.begin()+i, vc.end());
//		vc[i + 1] += vc[i];
//	}
//
//	cout << sum;
//}
//
