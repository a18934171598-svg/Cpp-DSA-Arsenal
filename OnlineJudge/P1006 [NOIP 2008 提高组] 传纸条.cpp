//#include<iostream>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int n, m;
//	cin >> m >> n;
//
//	vector<vector<int>>matrix(m + 1, vector<int>(n + 1));
//	for (int i = 1;i <= m;i++) {
//		for (int j = 1;j <= n;j++) {
//			cin >> matrix[i][j];
//		}
//	}
//
//	vector<vector<vector<int>>>dp(n + m + 1, vector<vector<int>>(m + 1, vector<int>(m + 1)));
//
//	for (int k = 2;k <= n + m;k++) {
//		for (int i1 = 1;i1 <= min(k - 1, m);i1++) {
//			for (int i2 = 1;i2 <= min(k - 1, m);i2++) {
//
//				if (i1 == i2 && k!=m+n) continue;
//				int j1 = k - i1;
//				int j2 = k - i2;
//
//				if (j1 > n || j2 > n) continue;
//
//				int maxn = max({
//					dp[k - 1][i1 - 1][i2 - 1],
//					dp[k - 1][i1 - 1][i2],
//					dp[k - 1][i1][i2 - 1],
//					dp[k - 1][i1][i2] }
//					);
//				if (i1 == i2) dp[k][i1][i2] = matrix[i1][j1] + maxn;
//				else dp[k][i1][i2] = matrix[i1][j1] + matrix[i2][j2] + maxn;
//			}
//		}
//	}
//
//
//	cout << dp[n + m][m][m];
//}