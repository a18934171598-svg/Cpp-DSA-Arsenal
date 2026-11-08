//#include<iostream>
//#include<sstream>
//using namespace std;
//
//int main() {
//	//3≤l≤255
//	string s1;  //......boyogirlyy......girl.......
//	getline(cin, s1);
//
//	// boy算一个 girl算一个
//	// 各种组合
//	// 完全重合没有意义
//
//	string word1 = "boy";
//	string word2 = "girl";
//	int count1 = 0, count2 = 0;
//	// 独有
//	// 按顺序
//	// 连续只能算一个
//	for (int i = 0;i < s1.size();i++) {
//		if (s1[i] == '.')
//			continue;
//		// 一定是判断断点
//		int pos;  // 坐标
//
//		if (string::npos!=(pos = word1.find(s1[i]))) {
//			// 如果是第一个呢?直接加一
//			if (pos == 0) {
//				count1++;
//				continue;
//			}
//			// 看看前面是不是自己的所在的word的前一个
//			if (word1[pos - 1] != s1[i - 1]) {
//				count1++;
//				continue;
//			}
//		}
//		if (string::npos!=(pos=word2.find(s1[i]))) {
//			if (pos == 0) {
//				count2++;
//				continue;
//			}
//			if (word2[pos - 1] != s1[i - 1]) {
//				count2++;
//				continue;
//			}
//		}
//
//	}
//	cout << count1 << endl;
//	cout << count2 << endl;
//}