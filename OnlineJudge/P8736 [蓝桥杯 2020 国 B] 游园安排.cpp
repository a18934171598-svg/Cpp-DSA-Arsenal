//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#include<stack>
//using namespace std;
//
////bool cmp(const string& a, const string& b) {
////	//if (a.size() != b.size())
////	//	return a.size() < b.size();  // 先比长度
////	return a < b;                   // 再比字典序
////}
//
////int find_pos(vector<string>&tail,string& s) {
////	int l = 0,r = tail.size()-1;
////	int ans =-1;
////	while (l <= r) {
////		int mid = (l + r) / 2;
////		if (s < tail[mid]) {
////			ans = mid;
////			r = mid - 1;
////		}
////		else {
////			l = mid + 1;
////		}
////	}
////
////	return ans;
////}
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	// .substr()到末尾  .substr(,) 截取几个
//
//	// 贪心+二分 比较规则,长度优先
//
//	string s;
//	cin >> s;
//
//	vector<string> vc;
//	// 分割字符串
//	for (int i = 0;i < s.size();i++) {
//		// 截取
//		int count = 1;
//		int last_i = i;
//		if (s[i] >= 'A' && s[i] <= 'Z') {
//			i++;
//			while (i < s.size() && (s[i] < 'A' || s[i]>'Z')) {
//				i++;
//				count++;
//			}
//			i--;
//		}
//		vc.push_back(s.substr(last_i, count));
//	}
//
//	vector<string>tail;
//
//	vector<int>pos(vc.size());
//	for (int i = 0;i < vc.size();i++) {
//		//int pos = find_pos(tail,vc[i]);
//		auto it = lower_bound(tail.begin(), tail.end(), vc[i]);
//		int p = it - tail.begin();
//
//		pos[i] = p; // 在tail的位置
//
//		if (p == tail.size()) {
//			tail.push_back(vc[i]);
//			// tail[i]来自哪个下标
//		}
//		else {
//			tail[p] = vc[i];
//		}
//
//	}
//
//	/*int len = tail.size()-1;*/
//	vector<string>ans;
//	int cur_pos = tail.size() - 1;
//
//	for (int i = vc.size() - 1;i >= 0;i--) {
//		if (pos[i] == cur_pos) {
//			ans.push_back(vc[i]);
//			cur_pos--;
//
//		}
//		if (cur_pos < 0)break;
//	}
//
//	//reverse(ans.begin(), ans.end());
//	for (int i = ans.size() - 1;i >= 0;i--) {
//		cout << ans[i];
//	}
//
//}