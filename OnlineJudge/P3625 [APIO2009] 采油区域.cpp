//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//typedef long long ll;
//int M, N, K;
//vector<vector<ll>> leftUp_Zone_max(vector<vector<ll>>&K_matrix) {
//	vector<vector<ll>> K_L_matrix(M+2,vector<ll>(N+1,0));
//
//	
//	// [1,1] [K][K]
//	for (int i = K;i <= M;i++) {
//		for (int j = K;j<=N;j++) {
//			K_L_matrix[i][j] = max(K_L_matrix[i-1][j],K_L_matrix[i][j-1]);
//			K_L_matrix[i][j] = max(K_L_matrix[i][j],K_matrix[i][j]);
//		}
//	}
//
//	return K_L_matrix;
//}
//vector<vector<ll>> rightUp_Zone_max(vector<vector<ll>>& K_matrix) {
//	vector<vector<ll>> K_R_matrix(M + 2, vector<ll>(N + 1, 0));
//
//	for (int i = K;i <= M;i++) {
//		for (int j = N - K + 1;j>=1;j--) {
//			K_R_matrix[i][j] = max(K_R_matrix[i-1][j],K_R_matrix[i][j+1]);
//			K_R_matrix[i][j] = max(K_R_matrix[i][j],K_matrix[i][j+K-1]);
//		}
//	}
//
//	return K_R_matrix;
//}
//vector<vector<ll>> leftDown_Zone_max(vector<vector<ll>>& K_matrix) {
//	vector<vector<ll>> K_L_matrix(M + 2, vector<ll>(N + 1, 0));
//
//	// [1,1] [K][K]
//	for (int i = M-K+1;i >= 1;i--) {
//		for (int j = K;j <= N;j++) {
//			K_L_matrix[i][j] = max(K_matrix[i+K-1][j],K_L_matrix[i][j-1]);
//			K_L_matrix[i][j] = max(K_L_matrix[i][j],K_L_matrix[i+1][j]);
//		}
//		
//	}
//
//	return K_L_matrix;
//}
//vector<vector<ll>> rightDown_Zone_max(vector<vector<ll>>& K_matrix) {
//	vector<vector<ll>> K_R_matrix(M + 2, vector<ll>(N + 1, 0));
//
//
//	// [1,1] [K][K]
//	for (int i = M-K+1;i >= 1;i--) {
//		for (int j = N - K + 1;j>=1;j--) {
//			K_R_matrix[i][j] = max(K_R_matrix[i+1][j],K_R_matrix[i][j+1]);
//			K_R_matrix[i][j] = max(K_R_matrix[i][j],K_matrix[i+K-1][j+K-1]);
//		}
//	}
//
//	return K_R_matrix;
//}
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	
//	cin >> M >> N >> K;
//
//	vector<vector<ll>>matrix(M+1,vector<ll>(N+1));
//	vector<vector<ll>>sum_matrix(M+1,vector<ll>(N+1));
//
//	for (int i = 1;i <= M;i++) {
//		for (int j = 1;j <= N;j++) {
//			cin >> matrix[i][j];
//		}
//	}
//
//	for (int i = 1;i <= M;i++) {
//		for (int j = 1;j <= N;j++) {
//			sum_matrix[i][j] += (sum_matrix[i-1][j]+sum_matrix[i][j-1]-sum_matrix[i-1][j-1]+matrix[i][j]);
//		}
//	}
//
//	// 求出每个K*K
//	// 公式 sum[a,b]~sum[c][d] = sum[c][d] - sum[c][b-1] - sum[a-1][d]+sum[a-1][b-1]
//	// M*N
//	// K_matrix
//	vector<vector<ll>>K_matrix(M + 2, vector<ll>(N + 1));
//	for (int i = K;i <= M;i++) {
//		for (int j = K;j <= N;j++) {
//			// sum[i-K+1][j-K+1]
//			K_matrix[i][j] =
//				sum_matrix[i][j] - sum_matrix[i][j - K] - sum_matrix[i - K][j] + sum_matrix[i - K][j - K];
//		}
//	}
//
//	vector<vector<ll>>a = leftUp_Zone_max(K_matrix);
//	vector<vector<ll>>b = rightUp_Zone_max(K_matrix);
//	vector<vector<ll>>c = leftDown_Zone_max(K_matrix);
//	vector<vector<ll>>d = rightDown_Zone_max(K_matrix);
//	
//	// 1
//	ll total = -1;
//	for (int i = K;i <= N - K ;i++) {
//		ll R_max = -1;
//		for (int j = K;j <= M - K ;j++) {
//			R_max = max(R_max, b[j][i + 1] + d[j + 1][i + 1]);
//		}
//		total = max(total, a[M][i]+R_max);
//	}
//	// 2
//	for (int i = K;i <= N - K;i++) {
//		ll L_max = -1;
//		for (int j = K;j <= M - K;j++) {
//			L_max = max(L_max, a[j][i] + c[j + 1][i]);
//		}
//		total = max(total, b[M][i+1] + L_max);
//	}
//	// 3
//	for (int i = K;i <= M - K;i++) {
//		ll U_max = -1;
//		for (int j = K;j <= N - K;j++) {
//			U_max = max(U_max, a[i][j] + b[i][j + 1]);
//		}
//		total = max(total, d[i+1][1] + U_max);
//	}
//	// 4
//	for (int i = K;i <= M - K;i++) {
//		ll D_max = -1;
//		for (int j = K;j <= N - K;j++) {
//			D_max= max(D_max, c[i+1][j] + d[i + 1][j + 1]);
//		}
//		total = max(total, a[i][N] + D_max);
//	}
//	//// 5
//	// 这一层
//	vector<ll>max_layer(M+1);
//	for (int i = 2*K;i <= M - K;i++) {
//		for (int j = K;j <= N;j++) {
//			max_layer[i] = max(max_layer[i],K_matrix[i][j]);
//		}
//	}
//
//	for (int i = K;i <=M-2*K;i++) {
//		for (int j = M-K+1;j >= i + K+1;j--) {
//			ll max_l = -1;
//			for (int k = i + K;k < j;k++) {
//				max_l = max(max_l,max_layer[k]);
//			}
//			total = max(total,b[i][1] + d[j][1]+max_l);
//		}
//	}
//	
//	//// 6
//	
//	// 每一纵列
//	vector<ll>max_col(N + 1);
//	for (int i = 2 * K;i <= N - K;i++) {
//		for (int j = K;j <= M;j++) {
//			max_col[i] = max(max_col[i], K_matrix[j][i]);
//		}
//	}
//	
//	for (int i = K;i<=N-2*K;i++) {
//		for (int j = N-K+1;j>=i+K+1;j--) {
//			ll max_c = -1;
//			for (int k = i+K;k<j;k++) {
//				max_c = max(max_c, max_col[k]);
//			}
//			total = max(total,d[1][j] + max_c + c[1][i]);
//		}
//	}
//
//	
//	cout << total;
//}