//#include<string>
//#include<iostream>
//
//#include<vector>
//
//using namespace std;
//
//
//
//vector<int>multiple(string s1, string s2) {
//	
//
//	vector<int> res(s1.size()+s2.size());  // 最多超一位
//
//	for (int i = 0;i < s1.size();i++) {
//		for (int j = 0;j < s2.size();j++) {
//			res[i + j] += ((s1[i] - '0') * (s2[j] - '0'));
//		}
//		// 差了一位
//	}
//	int pre = 0;
//	for (int i = 0;i<res.size();i++) {
//		int temp  = res[i]+pre;
//		res[i] = temp % 10;
//		pre = temp / 10;
//	}
//	if (res.back() == 0) res.pop_back();
//
//	return res;	
//}
//
//int main() {
//	string s1, s2;
//	reverse(s1.begin(), s1.end());
//	reverse(s2.begin(), s2.end());
//
//}
//
