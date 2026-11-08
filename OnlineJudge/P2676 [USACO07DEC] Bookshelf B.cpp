//#include<iostream>
//using namespace std;
//
//// 数组B和数组C 
//void countingSort(int*a,int len,int* b,int k) {
//	int* c = new int [k];
//	int i;
//	// 全部赋值为0
//	for (i = 0;i < k;i++) c[i] = 0;
//
//	for (i = 0;i < len;i++) c[a[i]]++;
//	// 调整数组c
//	for (i = 1;i < k;i++) {
//		c[i] += c[i - 1];
//	}
//	
//	for (i = len - 1;i >= 0;i--) {
//		// 找到--
//		b[len - c[a[i]]] = a[i];
//		c[a[i]]--;
//	}
//
//	delete[] c;
//}
//
//int main() {
//	int n,B;  // bookshelf_height
//	cin >> n >> B;
//	int* arr = new int[n];
//	int* b = new int[n];
//	
//
//	// 计数排序 
//	for (int i = 0;i < n;i++) {
//		// 排序   1≤N≤20,000 
//		cin >> arr[i];
//	}
//
//	countingSort(arr, n, b, 10001);
//
//	// 减掉<0就可以
//	for (int i = 0;i <n;i++) {
//		if (B > b[i]) B -= b[i];
//		else {
//			cout << i + 1;
//			break;
//		}
//	}
//
//	delete[] arr;
//	delete[] b;
//
//}