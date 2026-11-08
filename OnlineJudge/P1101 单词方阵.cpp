//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_set>
//#include<queue>
//using namespace std;
//
//
//
//struct node {
//	int x, y;
//	bool operator==(const node& other) const{
//		return other.x == x && other.y == y;
//	}
//};
//
//namespace std{
//	template<> struct hash<node> {
//		size_t operator()(const node& n)const {
//			size_t res = 17;
//			res = res*31  + hash<int>()(n.x);
//			res = res*31  + hash<int>()(n.y);
//			return res;
//		}
//	};
//}
//
//int n;
//vector<string>vc;
//string s1= "yizhong";
//unordered_set<node> u_set;
//vector<node> vc_mov_direction = { 
//	{1,-1},{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1}
//};
//void bfs(node current) {
//
//	// 八个方向 同时是多个方向的 边界问题
//	for (int i = 0;i < 8;i++) {
//		node direct = vc_mov_direction[i];
//		node cur = current;
//		int j;
//		unordered_set<node> u_storage;
//		u_storage.insert(cur);  // 起始点要存入
//		for (j = 1;j < 7;j++) { // "yizhong"的长度是7
//			cur.x += direct.x;
//			cur.y += direct.y;
//			if(cur.x<0||cur.x==n||cur.y<0||cur.y==n){
//				break;  // 超出边界
//			}
//
//			if (vc[cur.y][cur.x] != s1[j])
//				break;
//			else { 
//				node n = {cur.x,cur.y};
//				u_storage.insert(n); }
//		} 
//		if (j == 7)  // 表示可以
//		{
//			for (node elm : u_storage) {
//				u_set.insert(elm);
//			}
//		}
//	}
//	
//}
//
//int main() {
//	cin >> n;  //  7≤n≤100
//	// yizhong 7个字符
//	
//	vc.resize(n);
//	for (int i = 0;i < n;i++) { 
//		cin >> vc[i];
//	}
//
//	// 失败的什么都不做,成功的记录下来
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < n;j++) {
//			if (vc[i][j] == 'y')
//			{
//				node try_node = {j,i};
//				bfs(try_node);
//			}
//		}
//	}
//
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < n;j++) {
//			node n = {j,i};
//			if (!u_set.count(n)) vc[i][j] = '*';
//		}
//		
//		cout << vc[i]<<endl;
//	}
//
//}