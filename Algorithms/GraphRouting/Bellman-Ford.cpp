//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//struct Edge {
//	int info;
//	int u, v;
//	Edge(int info, int u, int v) :info(info), u(u), v(v) {};
//};
//
//// 从边的角度             边集
//// O(|v||E|)
//bool BellmanFord(int s,int n,vector<int>path,vector<int>dist,vector<Edge>&edge) {
//
//	dist.resize(n,INT_MAX);
//	path.resize(n,-1);
//	dist[s] = 0;
//	path[s] = -1;
//
//
//	for (int i = 1;i <= n - 1;i++) {
//		bool update = false;
//		for (Edge& elm : edge) {
//			// tail-->head
//			int v, u, w;
//			v = elm.v;
//			u = elm.u;
//			w = elm.info;
//			if (dist[u]<INT_MAX && dist[v]>dist[u] + w)
//			{
//				dist[v] = dist[u] + w;
//				path[v] = u;  // 是由这条边改善的
//				update = true;
//			}
//		}
//		if (!update) break;
//	}
//	// 不存在负权环则说明收敛了
//	for (Edge& elm : edge) {
//		// tail-->head
//		int v, u, w;
//		v = elm.v;
//		u = elm.u;
//		w = elm.info;
//		// dist[u]==INT_MAX说明不可达
//		if (dist[u]<INT_MAX && dist[v]>dist[u] + w)
//		{
//			// 还能变小
//			return false;
//		}
//	}
//
//	// 打印路径    
//	for (int i = 0;i < n;i++) {
//		cout << s << "~" << i << ": ";
//		int k = i;
//		cout << i;
//		while (path[k] != -1) {
//			k = path[k];
//			cout << "<-" << k;
//		}
//		cout << "  最短路径(无重复点): " << dist[i];  // 到这肯定是正常的无负权环
//		cout << '\n';
//	}
//	return true;
//}
//
//int main() {
//	vector<Edge>edge;
//	
//	edge.emplace_back(10,0,1);
//	edge.emplace_back(5,0,4);
//	edge.emplace_back(2,1,4);
//	edge.emplace_back(3,4,1);
//	edge.emplace_back(1,1,2);
//	edge.emplace_back(9,4,2);
//	edge.emplace_back(2,4,3);
//	edge.emplace_back(4,2,3);
//	edge.emplace_back(6,3,2);
//	edge.emplace_back(7,3,0);
//	
//	vector<int>path;
//	vector<int>dist;
//	BellmanFord(0, 5, path, dist, edge);
//	cout << '\n';
//	BellmanFord(1, 5, path, dist, edge);
//	cout << '\n';
//	BellmanFord(2, 5, path, dist, edge);
//	cout << '\n';
//	BellmanFord(3, 5, path, dist, edge);
//	cout << '\n';
//	BellmanFord(4, 5, path, dist, edge);
//
//
//}