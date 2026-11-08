//#include<iostream>
//#include<vector>
//#include<climits>
//#include<algorithm>
//using namespace std;
//
//
//struct MGraph
//{
//	vector<int>nodes;
//	vector<vector<int>>arc;
//	int arcnum, vernum;
//};
//
//// 二维数组path 和 dist用于多源
//void Floyd(MGraph&G,vector<vector<int>>&dist, vector<vector<int>>&path) {
//	// 中转点
//	for (int k = 0;k < G.vernum;k++) {
//		for (int i = 0;i < G.vernum;i++) {
//			for (int j = 0;j < G.vernum;j++) {
//				// 从i到j 防止溢出 
//				if (dist[i][k] < INT_MAX && dist[k][j] < INT_MAX)
//				{
//					if (dist[i][j] > dist[i][k] + dist[k][j]) {
//						// 路径更新
//						// path指这个路径的前驱,也就是k-j的前一个
//						path[i][j] = path[k][j];
//						dist[i][j] = dist[i][k] + dist[k][j];
//					}
//				}// 否则说明无法到达
//			}
//		}
//	}
//
//
//	// 打印路径
//	for (int i = 0;i < G.vernum;i++) {
//		// 以它为出发
//		cout << i << ":\n";
//		for (int j = 0;j < G.vernum;j++) {
//			cout << j;
//			int k = j;
//			while (path[i][k] != -1) {
//				cout << "<-"<<path[i][k];
//				k = path[i][k];
//			}
//			
//			cout << "  最小带权路径:" << dist[i][j]<<'\n';
//		}
//	}
//}
//
//int main() {
//	// 邻接矩阵存储有向图和info
//	MGraph G;
//	int n =5;
//	G.nodes.resize(5);
//	G.arc.resize(5);
//	G.vernum = 5;
//	vector<vector<int>>dist(n);
//	vector<vector<int>>path(n);
//	for (int i = 0;i < n;i++) {
//		dist.resize(n);
//		dist[i].resize(n,INT_MAX);
//		path[i].resize(n,-1);
//		dist[i][i] = 0; // 自己到自己是0
//	}
//
//	// 横向出度,纵向入度
//	// tail-->head
//	dist[0][1] = 10;
//	dist[0][4] = 5;
//	dist[3][0] = 7;
//	dist[1][2] = 1;
//	dist[1][4] = 2;
//	dist[4][1] = 3;
//	dist[4][3] = 2;
//	dist[4][2] = 9;
//	dist[2][3] = 4;
//	dist[3][2] = 6;
//	
//
//	path[0][1] = 0;
//	path[0][4] = 0;
//	path[3][0] = 3;
//	path[1][2] = 1;
//	path[1][4] = 1;
//	path[4][1] = 4;
//	path[4][2] = 4;
//	path[2][3] = 2;
//	path[3][2] = 3;
//	path[4][3] = 4;
//	
//	/*dist[0][1] = -2;
//	dist[1][2] = -3;
//	dist[2][0] = -5;
//	
//
//	path[0][1] = 0;
//	path[1][2] = 1;
//	path[2][0] = 2;*/
//
//	Floyd(G,dist,path);
//}