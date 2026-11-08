//#include<iostream>
//#include<vector>
//#include<queue>
//#include<tuple>
//#include<unordered_set>
//using namespace std;
//
//const int MAX = 1000;
//const int mod = 1000000007;
//typedef long long ll;
//int n, m, w;
//int r1, c1, h1, r2, c2, h2;
//
//struct node {
//	int x,y, z;
//	bool operator==(const node& other)const {
//		return other.x == x && other.y == y && other.z == z;
//	}
//	node() :x(0),y(0),z(0){};
//	node(int x,int y,int z) :x(x),y(y),z(z){};
//};
//
//namespace std {
//	template<> struct hash<node> {
//		size_t operator()(const node& other)const {
//			size_t res = 17;
//			res = res * 31 + hash<int>()(other.x);
//			res = res * 31 + hash<int>()(other.y);
//			res = res * 31 + hash<int>()(other.z);
//			return res;
//		}
//	};
//
//}
//	void bfs(vector<vector<vector<int>>>& dp, vector<int>& prime) {
//		unordered_set<node> u_set;
//		// 不超边界
//		// 能到达的地方+=1
//		queue<node> q;
//		q.emplace(1, 1, 1);
//		dp[1][1][1] = 1;
//
//		while (!q.empty()) {
//			node cur = q.front();
//
//			int cur_count = dp[cur.x][cur.y][cur.z];
//			u_set.erase(cur);
//			q.pop();
//
//			// 下 w
//			for (int i = 0;i < prime.size();i++) {
//				if (cur.z + prime[i] > w)break;
//				
//				else dp[cur.x][cur.y][cur.z + prime[i]] += cur_count;
//				dp[cur.x][cur.y][cur.z + prime[i]] %= mod;
//
//
//				node n;
//				n.x = cur.x;
//				n.y = cur.y;
//				n.z = cur.z + prime[i];
//
//				if (u_set.count(n) == 0) {
//
//					u_set.insert(n);
//					q.push(n);
//
//				}
//			}
//			// 东 m
//			for (int i = 0;i < prime.size();i++) {
//				if (cur.y + prime[i] > m)break;
//				
//				else dp[cur.x][cur.y + prime[i]][cur.z] += cur_count;
//				dp[cur.x][cur.y + prime[i]][cur.z] %= mod;
//
//				node n;
//				n.x = cur.x;
//				n.y = cur.y + prime[i];
//				n.z = cur.z;
//
//				if (u_set.count(n) == 0) {
//
//					u_set.insert(n);
//					q.push(n);
//
//				}
//			}
//			// 南 n
//			for (int i = 0;i < prime.size();i++) {
//				if (cur.x + prime[i] > n)break;
//				
//				else dp[cur.x + prime[i]][cur.y][cur.z] += cur_count;
//				dp[cur.x + prime[i]][cur.y][cur.z] %= mod;
//
//				node n;
//				n.x = cur.x + prime[i];
//				n.y = cur.y;
//				n.z = cur.z;
//
//				if (u_set.count(n) == 0) {
//
//					u_set.insert(n);
//					q.push(n);
//
//				}
//			}
//
//
//		}
//
//
//	}
//
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	//vector<int>prime;
//	// 打表
//	vector<int>prime = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};
//	//for (int i = 2;i * i <= MAX;i++) {
//	//	if (is_prime[i]) {
//	//		for (int j = i * i;j <= MAX;j += i) {
//	//			is_prime[j] = false; // 依然会重复
//	//		}
//	//	}
//	//}
//
//	/*for (int i = 2;i <= MAX;i++) {
//		if (is_prime[i] == true) cout << i << ',';
//	}*/
//
//	cin >> n >> m >> w;
//	cin >> r1 >> c1 >> h1 >> r2 >> c2 >> h2;
//	vector<vector<vector<int>>>dp(n + 1, vector<vector<int>>(m + 1, vector<int>(w + 1, 0)));
//
//	// 走质数布
//
//	bfs(dp, prime);
//
//	cout << dp[n][m][w];
//	
//}