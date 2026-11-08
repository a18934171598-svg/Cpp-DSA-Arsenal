//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<int> power2(int n) {
//	vector<int> res;
//	res.push_back(1);
//
//	int pre;
//
//	for (int i = 0;i < n;i++) {
//		pre = 0;
//		for (int j = 0;j < res.size();j++) {
//			res[j] *= 2;
//			res[j] += pre;
//			int temp = res[j];
//			res[j] = res[j] % 10;
//			pre = temp / 10;
//		}
//		if (pre != 0) {
//			res.push_back(pre);
//		}
//	}
//	return res;
//}
//
//int main() {
//
//
//
//}