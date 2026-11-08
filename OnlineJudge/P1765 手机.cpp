//#include<iostream>
//#include<vector>
//#include<sstream>
//using namespace std;
//
//int main() {
//	// 一行句子
//	// 只包含小写字母和空格
//
//	// 一共按多少下
//	// 一个一个来
//	string s;
//	getline(cin,s);
//	// 
//	// 找到区间 3 3 3 3 3 4 3 4
//	int count = 0;
//	int arr[8] = { 3,3,3,3,3,4,3,4 };
//	// 挨个减去
//	// 97
//	for (int i = 0;i < s.size();i++) {
//		if (s[i] == ' ') {
//			count++;
//			continue;
//		}
//		// 挨个减去
//		int res = s[i] - 96;
//		int sign = 0;
//		for (int j=0;j<8;j++) {
//			res -= arr[j];
//			if (res > 0) {
//				continue;
//			} 
//			sign = j;
//			break;
//			// 不大于0,说明在区间里
//		}
//		count += (res + arr[sign]);
//	}
//	
//
//	cout << count;
//}