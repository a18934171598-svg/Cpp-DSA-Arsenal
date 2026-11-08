//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//vector<int>multiple(string s1, vector<int>& s2) {
//	// 都是低位在前的
//
//	vector<int> res(s1.size()+s2.size());  // 最多超一位
//
//	for (int i = 0;i < s1.size();i++) {
//		for (int j = 0;j < s2.size();j++) {
//			res[i + j] += ((s1[i] - '0') * s2[j]);
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
//string trans_s(vector<int>& vc) {
//	string s="";
//	for (int i = 0;i < vc.size();i++) {
//		s += (char)(vc[i]+'0');
//	}
//	return s;
//}
//
//string add(vector<int>& a,int index) {
//	string s = "";
//	if (a[index] >= 5) {
//		a[index+1] += 1;
//		int pre = 0;
//		for (int i = index + 1;i < a.size();i++) {  // 进一
//			a[i] += pre;
//			int temp = a[i];
//			a[i] = temp % 10;
//			pre = temp / 10;
//			if (pre == 0) break;
//		}
//		if (pre!=0) {
//			a.push_back(1);
//		}
//	}
//	
//	for (int i = index + 1;i < a.size();i++) {
//		s += (char)(a[i] + '0');
//	}
//
//	return s;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	int n;
//	string s;
//
//	cin >> n >> s;
//
//
//	vector<int>a = power2(n);  // 应该不会很慢,值传递优化?
//	//reverse(a.begin(), a.end());
//
//	int pos = s.find('.');
//	int index = s.size() - pos-2;
//
//	string new_s = "";
//	new_s += s.substr(0, pos);
//	new_s += s.substr(pos+1);
//
//	/*for (int& elm : a) {
//		cout << elm;
//	}*/
//	//
//
//	reverse(new_s.begin(),new_s.end());
//
//	vector<int> b =multiple(new_s,a);
//	
//	// 在某个地方放上'.'
//	// 四舍五入为整数
//
//	// 进位与不进位
//	s = add(b, index);
//	
//	reverse(s.begin(), s.end());
//
//	cout << s;
//}