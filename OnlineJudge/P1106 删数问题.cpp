//#include<iostream>
//#include<string>
//using namespace std;
//
//string processing(string s, int& k) {
//	int len = s.size();
//	
//	//  先别管400000000 
//	int i = 0,use=0,pos=-1;
//	// k = 5 还有回退的情况
//	for (i = 0;i < len-1;i++) {
//		use++;
//		if (s[i + 1] == '0') {
//			i++;
//			while (i+1<len && s[i + 1] == '0') {
//				i++;
//			}  // 停留在下一个前面
//			// 记录最后0的位置
//			pos = i;
//		}
//
//		if (k == use) {
//			// 记录所在位置
//			// 回退
//			use -= i - pos;
//			break;
//		}
//	}
//	k -= use;
//	if (pos < len-1) {
//		return s.substr(pos + 1);
//	}
//	else {
//		return "";
//	}
//	 // 		
//	 //  55045047045 
//}
//
//string processing2(string s,int& k) {
//	string new_s = s;  // 为什么,防止一个都没有return 空气
//	int len = s.size();
//	for (int i = 0;i < len-1;i++) {
//		if (s[i] > s[i + 1]) {
//			new_s = "";
//			k--;
//			new_s += s.substr(0, i);
//			new_s += s.substr(i+1);
//			break;
//		}
//	}
//	return new_s;
//}
//
//int main() {
//
//	string s;
//	cin >> s;
//	int k;
//	cin >> k;
//
//	s =  processing(s, k);
//	
//	if (s.size() == 0) { 
//		cout << 0; 
//		return 0;
//	}
//
//	if (k == 0) {
//		cout << s;
//		return 0;
//	}
//
//	while (k) {
//		int temp = k;
//		s = processing2(s,k );
//		if (temp == k) break;
//	}
//
//	if (k == 0) {
//		cout << s;
//		return 0;
//	}
//
//	cout << s.substr(0,s.size() - k);
//
//}