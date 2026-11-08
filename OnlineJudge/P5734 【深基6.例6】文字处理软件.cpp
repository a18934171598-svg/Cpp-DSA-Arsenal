//#include<iostream>
//#include<sstream>
//#include<vector>
//#include<cmath>
//
//using namespace std;
//
//// 分割字符串
//vector<string> split(string s,char delimiter){
//	vector<string> result;
//	string token;
//	int pos;
//	while ((pos = s.find(delimiter))!=string::npos) {
//		token = s.substr(0, pos);
//
//		result.push_back(token);
//		s.erase(0, pos + 1);  // 删掉pos+1个
//	}
//	result.push_back(s);  // s存放的还没被销毁
//	return result;
//}
//int main() {
//	int q;  // 1<=q<=100
//	cin >> q;
//	cin.ignore(100, '\n');
//	//1≤q≤100
//	string s_ori;
//	getline(cin, s_ori);
//	// 1-4
//	vector<string> v_s;
//	for (int i = 0;i < q;i++) {
//		string s_input;
//		getline(cin, s_input);
//		v_s.push_back(s_input);
//	}
//
//
//	int count = 0;
//	int a = 0, b = 0;
//	int* x;
//	double aa = 0;
//	vector<string> res;
//	for (int i = 0;i < q;i++) {
//		switch (v_s[i][0]) {
//		case '1':
//			// 截取到末尾一个参数substr
//			s_ori += v_s[i].substr(2);
//			cout << s_ori ;
//			break;
//		case '2':
//			// substr截取两个参数 (,)
//			// 如果超过个位就不行了
//			res =split(v_s[i], ' ');
//			
//			 x= &a;
//			for (int w = 1;w <= 2;w++) {
//				count = res[w].size();
//				for (int j = 0;j < res[w].size();j++) {
//					count--;
//					(*x) = (*x)+((res[w][j]-'0') * pow(10, count));
//					
//				}
//				x = &b;
//			}
//			
//			s_ori = s_ori.substr(a,b);
//			a = 0;b = 0;
//			cout << s_ori;
//			break;
//		case '3':
//			res = split(v_s[i], ' ');
//			count = res[1].size();
//			
//			for (int j = 0;j < res[1].size();j++) {
//				count--;
//				aa += ((res[1][j]-'0') * pow(10, count));
//				
//			}
//			s_ori.insert(int(aa), v_s[i].substr(3+res[1].size()));
//			cout << s_ori;
//			aa =0;
//			break;
//		case '4':
//			int k = s_ori.find(v_s[i].substr(2));
//			(k != string::npos) ? cout << k : cout << -1;
//			
//			break;
//		}
//		
//			cout <<'\n';
//
//	}
//
//}