//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//struct node {
//	int line;
//	bool isUp;
//	bool isDown;
//	node() :isUp(false), isDown(false) {};
//};
//int main() {
//
//	vector<string>vc_2(2);
//	vector<node> vc_storage;
//
//	for (int i = 0;i < 2;i++) {
//		string s;
//		cin >> s;
//		vc_2[i] = s;
//	}
//
//	for (int i = 0;i < vc_2[0].size();i++) {
//		// 扫描
//
//		if (vc_2[0][i] == '#' || vc_2[1][i] == '#') {
//			node n;
//			n.line = i;
//			if (vc_2[0][i] == '#') n.isUp = true;
//			if (vc_2[1][i] == '#') n.isDown = true;
//
//			vc_storage.push_back(n);
//		}
//	}
//
//	// 
//	int count = 0;
//	for (int i = 1;i < vc_storage.size();i++) {
//
//		// 更改后要把对应的位置改了
//
//		if (vc_storage[i].isUp == vc_storage[i - 1].isUp
//			|| vc_storage[i].isDown == vc_storage[i - 1].isDown) {
//			count += (vc_storage[i].line - vc_storage[i - 1].line - 1);
//		}
//		else {
//			// 对角右边 猜的
//			vc_storage[i].isDown = true;
//			vc_storage[i].isUp = true;
//			count += (vc_storage[i].line - vc_storage[i - 1].line);
//		}
//	}
//
//	cout << count;
//}