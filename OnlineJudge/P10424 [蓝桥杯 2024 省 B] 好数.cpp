//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int good_num = 0;
//
//int res(int cnt,int i) {
//	// 最小是1不能是0
//	int init = i;
//	cnt--;
//	while (cnt--) {
//		init *= 5;
//	}
//	return init;
//}
//
//
//
//
//void loop_pro(string s) {
//	
//	int head = s[0]-'0';
//	int ctn_new = s.size();
//	if (ctn_new == 1) {
//		good_num += (head + 1) / 2;
//		return;
//	}
//	
//	if (head == 0 && (ctn_new & 1)) return;
//
//	if (ctn_new & 1) {
//		good_num+= head/2 * res(ctn_new-1, 5);
//		if (!(head & 1)) return;
//		else loop_pro(s.substr(1));
//	}
//
//	else {
//		good_num += ((head + 1) / 2 * res(ctn_new - 1, 5));
//		if (head & 1) return;
//		else loop_pro(s.substr(1));
//	}
//
//}
//int main() {
//
//	int n;
//	cin >> n;
//
//	string s1 = to_string(n);
//	int cnt = s1.size();
//	int head = s1[0]-'0';
//
//	int cnt1 = cnt;
//	
//	if (cnt == 1) {
//		cout<< (head+1) / 2;
//		return 0;
//	}
//
//	// 1位不行
//
//	while (cnt1--) {
//		if (cnt1 & 1) {
//			good_num+=res(cnt1, 5);
//		}
//		else good_num+=res(cnt1,4);
//		if (cnt1 == 1) break;
//	}
//	
//
//	// 处理 step2
//
//	if (cnt & 1) { 
//		good_num += res(cnt-1,5) * (head / 2);
//		if (head & 1) {
//			loop_pro(s1.substr(1));
//		}
//		else {
//			cout << good_num;
//			return 0;
//		}
//	}
//	else {
//		if (head & 1) {
//			good_num += res(cnt - 1, 5) * (head / 2);
//			cout << good_num;
//			return 0;
//		}
//		else {
//			good_num += (head - 1) / 2 * res(cnt - 1, 5);
//			loop_pro(s1.substr(1));
//		}
//	}
//
//	// 处理rest
//	cout << good_num;
//}