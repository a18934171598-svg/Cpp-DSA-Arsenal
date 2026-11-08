//#include<iostream>
//#include<vector>
//
//#include<unordered_set>
//using namespace std;
//
//struct node {
//	int x, y;
//	bool operator==(const node& other)const {
//		return other.x == x && other.y == y;
//	}
//};
//
//namespace std {
//	template<> struct hash<node> {
//		size_t operator()(const node& other) const{
//			size_t res = 17;
//			res = res*31+hash<int>()(other.x);
//			res = res*31+hash<int>()(other.y);
//			return res;
//		}
//	};
//}
//
//int main() {
//	unordered_set<node> u_set;
//	int n, m; // n时竖着的
//	cin >> n >> m;
//	//vector<vector<bool>>matrix(n + 1, vector<bool>(m + 1));
//	vector<vector<long long>>dp(n + 1, vector<long long>(m + 1));
//
//	int horse_i, horse_j;
//	cin >> horse_i >> horse_j;
//	// 1
//	if (horse_i - 2 >= 0 && horse_j + 1 <= m) {
//		node n;
//		n.x = horse_i - 2;
//		n.y = horse_j + 1;
//		u_set.insert(n);
//		//dp[horse_i - 2][horse_j + 1] = 0;
//	}
//	
//	//2
//	if (horse_i - 1 >= 0 && horse_j + 2 <= m) {
//		node n;
//		n.x = horse_i - 1;
//		n.y = horse_j + 2;
//		u_set.insert(n);
//		//dp[horse_i - 1][horse_j + 2] = 0;
//	}
//	
//	//3
//	if (horse_i + 1 <= n && horse_j + 2 <= m) {
//		node n;
//		n.x = horse_i + 1;
//		n.y = horse_j + 2;
//		u_set.insert(n);
//		//dp[horse_i + 1][horse_j + 2] = 0;
//	}
//	//4
//	if (horse_i + 2 <= n && horse_j + 1 <= m) {
//		node n;
//		n.x = horse_i + 2;
//		n.y = horse_j + 1;
//		u_set.insert(n);
//		//dp[horse_i + 1][horse_j + 2] = 0;
//	}
//	// 5
//	if (horse_i + 2 <= n && horse_j - 1 >= 0) {
//		node n;
//		n.x = horse_i + 2;
//		n.y = horse_j - 1;
//		u_set.insert(n);
//		//dp[horse_i + 2][horse_j - 1] = 0;
//	}
//
//	
//	// 6
//	if (horse_i + 1 <= n && horse_j - 2 >= 0) {
//		node n;
//		n.x = horse_i + 1;
//		n.y = horse_j - 2;
//		u_set.insert(n);
//		//dp[horse_i + 1][horse_j - 2] = 0;
//
//	}
//
//	// 7
//	if (horse_i - 1 >= 0 && horse_j -2 <= m) {
//		node n;
//		n.x = horse_i - 1;
//		n.y = horse_j - 2;
//		u_set.insert(n);
//		//dp[horse_i - 1][horse_j -2] = 0;
//
//	}
//
//	// 8
//	if (horse_i - 2 >= 0 && horse_j - 1 >= 0) {
//		node n;
//		n.x = horse_i - 2;
//		n.y = horse_j - 1;
//		u_set.insert(n);
//		//dp[horse_i - 2][horse_j - 1] = 0;
//	}
//	
//	
//	// j++ i++ 
//	// 数量
//	// dp[][] 到达这个位置的路径数量
//
//	// dp[0][0]
//	node n_horse;
//	n_horse.x = horse_i;
//	n_horse.y = horse_j;
//	u_set.insert(n_horse);
//
//	node n_init;
//	n_init.x = 0;
//	n_init.y = 0;
//	u_set.insert(n_init);
//
//
//	dp[0][0] = 1;
//	
//
//	// 八个方向的马 顺时针
//	// 检查有没有超出边界
//	
//
//	for (int i = 0;i <= n;i++) {
//		for (int j = 0;j <= m;j++) {
//			node n; n.x = i;n.y = j;
//			if (u_set.count(n)) {
//				continue;
//			}
//			
//			// 上面是
//			
//			if (j-1>=0&& i - 1 == -1) {
//				dp[i][j] = dp[i][j-1];
//			}
//			else if (i-1>=0&&j-1==-1) {
//				dp[i][j] = dp[i-1][j];
//			}
//			else { // 
//				dp[i][j] = dp[i-1][j] + dp[i][j-1];
//			}
//		}
//		// 上,左
//	}
//	cout << dp[n][m];
//}