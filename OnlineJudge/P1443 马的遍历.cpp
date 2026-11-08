//#include<iostream>
//#include<queue>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//struct node {
//	int col, line,step;
//	bool operator==(const node&other)const {
//		return other.col == col && other.line == line;
//	}
//};
//namespace std {
//	template<> struct hash<node> {
//		size_t operator()(const node& n) const {
//			size_t res = 17;
//			res = res * 31 + hash<int>()(n.col);
//			res = res * 31 + hash<int>()(n.line);
//			return res;
//		}
//	};
//}
//vector<vector<int>> vc;
//unordered_set<node> u_set;
//int n, m, x, y;
//
//void bfs(node init) {
//	queue<node> q;
//	q.push(init);
//
//	while (!q.empty()) {
//		node current = q.front();
//		u_set.insert(current);
//		q.pop();
//		vc[current.line - 1][current.col - 1] = current.step;
//		// 8个顺时针判断依次入队 怎么判断是多少步
//		// 不能超出边界且,且没有
//		// 赋予1的问题
//		node n1 = {current.col+1,current.line-2,current.step+1}; // col,line,step
//		if (n1.col <= n && n1.line >= 1 && !u_set.count(n1))
//		{
//			u_set.insert(n1);
//			q.push(n1);
//		}
//
//		node n2 = { current.col + 2,current.line - 1,current.step + 1 }; // col,line,step
//		if (n2.col <= n && n2.line >= 1 && !u_set.count(n2))
//		{
//			u_set.insert(n2);
//			q.push(n2);
//		}
//		node n3 = { current.col + 2,current.line +1,current.step + 1 }; // col,line,step
//		if (n3.col <= n && n3.line <=m && !u_set.count(n3))
//		{
//			u_set.insert(n3);
//			q.push(n3);
//		}
//
//		node n4 = { current.col + 1,current.line +2,current.step + 1 }; // col,line,step
//		if (n4.col <= n && n4.line <=m  && !u_set.count(n4))
//		{
//			u_set.insert(n4);
//			q.push(n4);
//		}
//
//		node n5 = { current.col - 1,current.line - 2,current.step + 1 }; // col,line,step
//		if (n5.col >=1 && n5.line >= 1 && !u_set.count(n5))
//		{
//			u_set.insert(n5);
//			q.push(n5);
//		}
//
//		node n6 = { current.col - 2,current.line - 1,current.step + 1 }; // col,line,step
//		if (n6.col >= 1 && n6.line >= 1 && !u_set.count(n6))
//		{
//			u_set.insert(n6);
//			q.push(n6);
//		}
//
//		node n7 = { current.col - 2,current.line + 1,current.step + 1 }; // col,line,step
//		if (n7.col >= 1 && n7.line <= m && !u_set.count(n7))
//		{
//			u_set.insert(n7);
//			q.push(n7);
//		}
//
//		node n8 = { current.col - 1,current.line +2,current.step + 1 }; // col,line,step
//		if (n8.col >= 1 && n8.line <= m && !u_set.count(n8))
//		{
//			u_set.insert(n8);
//			q.push(n8);
//		}
//	}
//
//}
//
//int main() {
//	cin >> n >> m>>x>>y;
//	vc.resize(m);   // 长是n宽是m 
//	for (int i = 0;i < m;i++) {
//		vc[i].resize(n);
//		for (int j = 0;j < n;j++) { vc[i][j] = -1; }
//	}
//
//
//	node init;
//	init.col = x;
//	init.line = y;
//	init.step = 0;
//	
//	bfs(init);
//
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < m;j++) {
//			cout << vc[j][i] << " ";
//		}
//		cout << endl;
//	}
//
//}