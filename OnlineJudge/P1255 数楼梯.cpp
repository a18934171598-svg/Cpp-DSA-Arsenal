//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//// 高精度加法：传入两个数字字符串，返回结果字符串
//string add(string a, string b) {
//    vector<int> A, B;  // 用数组存数字，方便计算
//    // 倒序存入数组（个位在前，方便从低位开始加）
//    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//    for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//
//    vector<int> C;  // 存储结果
//    int carry = 0;  // 进位
//
//    // 模拟竖式加法：逐位相加 + 进位
//    for (int i = 0; i < A.size() || i < B.size() || carry; i++) {
//        if (i < A.size()) carry += A[i];
//        if (i < B.size()) carry += B[i];
//        C.push_back(carry % 10);  // 当前位结果
//        carry /= 10;              // 更新进位
//    }
//
//    // 把数组转回字符串（倒序输出）
//    string res;
//    for (int i = C.size() - 1; i >= 0; i--) res += (C[i] + '0');
//    return res;
//}
//
//
//
//// 高精度加法
//
//int main() {
//
//
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n;
//	cin >> n;
//
//	// dp[n-1]+1 dp[n-2]+2
//
//	vector<string>dp(n+1);
//
//	dp[1] = '1';
//	if(n>1)
//	dp[2] = '2';
//
//	for (int i = 1;i <= n;i++) {
//		if(i>=3)
//		dp[i] = add(dp[i-1],dp[i-2]);
//	}
//	cout << dp[n];
//
//}
//
//
//
