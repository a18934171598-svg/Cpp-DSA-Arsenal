//#include<iostream>
//#include<set>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	set<int>s;
//	int m;
//	cin >> m;
//	vector<string> answer;
//	// up_bound(x)>x lower_bound(x)>=x
//
//	for (int i = 1;i <= m;i++) {
//		int a, b;
//		cin >> a >> b;
//		if (a == 1) { 
//			pair<set<int>::iterator,bool> ret = s.insert(b); 
//			if (ret.second == false) answer.push_back("Already Exist\n");
//		}
//		else {
//			if (s.erase(b) == 0) {
//				if (s.size() == 0) answer.push_back("Empty\n");
//				else { // 取出最接近的
//					auto it = s.lower_bound(b);
//					if (it == s.end()) {
//						string s1 = to_string(*s.rbegin());
//						answer.push_back(s1 + '\n');
//						s.erase(*s.rbegin());
//					}
//					else if (it == s.begin()) {
//						string s1 = to_string(*it);
//						answer.push_back(s1+'\n');
//						s.erase(it);
//					}
//					else {
//						// 比较两者谁更接近
//						set<int>::iterator it_r = it;
//						--it;
//						if (((*it_r) - b) >= (b - (*it)))
//						{
//							answer.push_back(to_string(*it)+'\n');
//							s.erase(*it);
//						}
//						else {
//							answer.push_back(to_string(*it_r) + '\n');
//							s.erase(*it_r);
//						}
//					}
//				}
//			}
//			else {
//				string s1 = "";
//				s1 = to_string(b)+'\n';
//				answer.push_back(s1);
//				
//			}
//		}
//	}
//
//	for (string s : answer) {
//		cout << s;
//	}
//}