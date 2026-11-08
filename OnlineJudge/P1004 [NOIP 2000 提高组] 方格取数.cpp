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
//	int n;
//	cin >> n;
//	
//	vector<vector<vector<int>>>dp(2*n+1,vector<vector<int>>(n+1,vector<int>(n+1)));
//
//	vector<vector<int>>matrix(n+1,vector<int>(n+1));
//
//	while (1) {
//		int a, b,c;
//		cin >> a ;
//		if (a == 0) break;
//		cin >> b>>c;
//
//		matrix[a][b] = c;
//	}
//
//	for (int k = 2;k <= 2 * n;k++) {
//		for(int i1=1;i1<=n;i1++){
//			for (int i2 = 1;i2 <= n;i2++) {
//				int j1 = k - i1;
//				int j2 = k - i2;
//
//				if (j1 < 1 || j2 < 1 || j1>n||j2>n)continue;
//
//				int maxn = max({ dp[k - 1][i1][i2 - 1],
//					dp[k - 1][i1][i2],
//					dp[k - 1][i1-1][i2],
//					dp[k-1][i1-1][i2-1]}
//					);
//
//				if (i1 == i2) dp[k][i1][i2] = maxn + matrix[i1][j1];
//				else dp[k][i1][i2] = maxn + matrix[i1][j1] + matrix[i2][j2];
//			}
//		}
//	}
//	
//
//	cout << dp[2*n][n][n];
//}