//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//struct node {
//	int col;
//	int line;
//	bool operator==(const node& other)const {
//		return other.col == col && other.line == line;
//	}
//};
//
//namespace std {
//	template<> struct hash<node> {
//		size_t operator()(const node& n) const {
//			return hash<int>()(n.col) ^ (hash<int>()(n.line) << 1);
//		}
//	};
//}
//int m, n, t;
//node dest;
//int path_count = 0;
//unordered_set<node> u_set;
//void dfs(node current) {
//	if (current == dest) {
//		path_count++;
//		return;  // 胜利到达
//	}
//
//	node next_pos = current;  // 可以吗
//
//	if (next_pos.line > 1) {  // 上
//		next_pos.line--;
//		if (!u_set.count(next_pos))  // 有返回 1
//		{
//			u_set.insert(next_pos);
//			dfs(next_pos);
//			u_set.erase(next_pos);
//		}
//		next_pos.line++;
//	}
//	if (next_pos.line < m) {
//		next_pos.line++;   // 下
//		if (!u_set.count(next_pos))  // 有返回 1
//		{
//			u_set.insert(next_pos);
//			dfs(next_pos);
//			u_set.erase(next_pos);
//		}
//		next_pos.line--;
//	}
//
//	if (next_pos.col > 1) {
//	next_pos.col--;   // 左
//	if (!u_set.count(next_pos))  // 有返回 1不行的
//	{
//		u_set.insert(next_pos);
//		dfs(next_pos);
//		u_set.erase(next_pos);
//	}
//	next_pos.col++;
//	}
//
//	if (next_pos.col < n) {
//		next_pos.col++;
//		if (!u_set.count(next_pos))  // 有返回 1不行的
//		{
//			u_set.insert(next_pos);
//			dfs(next_pos);
//			u_set.erase(next_pos);
//		}
//	}
//
//}
//
//
//int main() {
//	cin >> n >> m >> t;
//
//	int init_x, init_y, des_x, des_y;
//	cin >> init_x >> init_y >> des_x>>des_y;
//
//	node init;
//	init.col = init_x;
//	init.line = init_y;
//
//	dest.col = des_x;
//	dest.line = des_y;
//
//
//	// 加入起点
//	u_set.insert(init);
//
//	// 根据障碍数量录入障碍点
//	for (int i = 0;i < t;i++) {
//		int x, y;
//		cin >> x >> y;
//		node obstacle;
//		obstacle.col = x;
//		obstacle.line = y;
//		u_set.insert(obstacle);
//	}
//
//	dfs(init);
//
//	cout << path_count;
//}