//#include<iostream>
//#include<queue>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//int n,b;
//int press_count= 0;
//unordered_set<int> u_set;
//vector<int> vc;
//
//void bfs(int init_layer) {
//	queue<int> q;
//	q.push(init_layer);
//	u_set.insert(init_layer);
//
//	while (!q.empty()) {
//		int size = q.size();
//		for (int i=0;i<size;i++) {  //  每一层
//			int current = q.front();
//
//			if (current == b) {
//				return;
//			}
//
//			// 录入已经走过的楼层
//			q.pop();
//			// 上
//			int up_floor = current + vc[current - 1];
//			if (up_floor <= n && (!u_set.count(up_floor))) {
//				u_set.insert(up_floor);
//				q.push(up_floor);
//			}
//			// 下
//			int down_floor = current - vc[current - 1];
//			if (down_floor >= 1 && (!u_set.count(down_floor))) {
//				q.push(down_floor);
//				u_set.insert(up_floor);
//			}
//		}
//		press_count++;
//	}
//	press_count = -1;
//}
//
//int main() {
//	int a;  // 1<=n<=200
//	cin >> n >> a >> b;
//	vc.resize(n);
//	for (int i = 0;i < n;i++) {
//		cin >> vc[i];
//	}
//
//	bfs(a);
//
//	// 如果到达不了呢
//	cout << press_count;
//}