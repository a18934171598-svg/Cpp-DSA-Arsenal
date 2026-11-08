//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n, arr[10000];    
//
//	cin >> n;
//	int pre=0,len=0,len_max=0;
//	for (int i = 0;i < n;i++) {
//		cin >> arr[i];
//		if ((arr[i] - pre) == 1) {
//			len += 1;
//		}
//		else {
//			if (len_max < len) {
//				len_max = len;
//			}
//			len = 1;
//		}
//		pre = arr[i];
//	}
//
//	// 最长连号长度  输出零的情况
//	//cout << len << endl;
//	len_max < len  ? cout <<len :cout<<len_max;
//}