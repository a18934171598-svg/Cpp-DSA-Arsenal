//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//// 最后一刀
//
//// 大数乘法
//
//vector<int> mult(vector<int>a,vector<int>b) {
//	reverse(a.begin(), a.end());
//	reverse(b.begin(), b.end());
//
//	vector<int> res(a.size()+b.size()); // 最多出一位
//
//	for (int i = 0;i < a.size();i++) {
//		for (int j = 0;j < b.size();j++) {
//			res[i + j] += a[i] * b[j];
//		}
//	}
//	
//	int pre = 0;
//
//	for (int i = 0;i < res.size();i++) {
//		res[i] += pre;
//		int temp = res[i];
//		res[i] = temp % 10;
//		pre = temp / 10;
//	}
//
//	// 如果有0呢
//	// 循环去除多余0 
//	while(res.size() > 1 && res.back() == 0) res.pop_back();
//
//
//	// 退掉最后一位  
// 
//	reverse(res.begin(), res.end());
//
//	return res;
//}
//
//// 比较vector
//vector<int> cmp_vc(vector<int>a,vector<int>b) {
//	if (a.size() != b.size())
//		return a.size()>b.size() ? a : b;
//
//	for (int i = 0;i < a.size();i++) {
//		if (a[i] < b[i]) return b;
//		else if (a[i] > b[i]) return a;
//	}
//	return a;
//}
//
//int main() {
//	int n, k;
//	cin >> n >> k;
//	vector<int> seq(n+1);
//
//	string s;
//	cin >> s;
//
//	string s1 = " ";
//	s1 += s;
//
//	for (int i = 1;i < s1.size();i++) {
//		seq[i] = s1[i]-'0';
//	}
//
//	vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(k+1));
//	
//
//	// dp[i][j] 在l,l+1之间切割
//	// 预处理num[l+1][i]
//	vector<vector<vector<int>>>num(n + 1,vector <vector<int>>(n + 1));
//	for (int i = 1;i <= n;i++) {
//		num[i][i].push_back(seq[i]);
//		for (int j = i+1;j <= n;j++) {
//			num[i][j] = num[i][j-1];
//			num[i][j].push_back(seq[j]);
//			// 拼接
//		}
//	}
//
//
//	// 预处理够吗
//	for (int i = 1;i < n;i++) {
//		dp[i][0] = num[1][i];
//	}
//
//	for (int j = 1;j <= k;j++) {
//		for (int i = j + 1;i <= n;i++) { // 前i个
//			// 最后一刀
//			// dp[i][j]
//			dp[i][j] = { 0 };
//			for (int kni = j;kni <= i - 1;kni++) {
//				dp[i][j] = cmp_vc(dp[i][j],mult(dp[kni][j-1],num[kni+1][i]));
//			}
//
//		}
//	}
//
//	
//	for (int i = 0;i <dp[n][k].size();i++) cout << dp[n][k][i];
//
//}