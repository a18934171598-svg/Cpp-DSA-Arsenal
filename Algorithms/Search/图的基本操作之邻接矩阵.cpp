//#include<vector>
//#include<iostream>
//#include<queue>
//#include<climits>
//#include<algorithm>
//#include<cmath>
//
//using namespace std;
//
//struct index_node {
//	int index;
//};
//struct VNode {
//	int data;
//};
//
//// 无向图 有向图 出度是横向的 入度需要一个个遍历了
//struct MGraph {
//	vector<VNode> nodes;
//	vector<vector<int>> arc;// bool 适用于没有权值的情况
//	int vernum, arcnum;
//};
//
//// 最坏O(|V|)
//int FirstNeighbor(MGraph&G,int x) {// 顶点x的第一个邻接点
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1 && G.arc[x][i] != 0)
//			return i;
//	}
//	return -1;
//}
//// 最坏O(|V|)
//int NextNeighbor(MGraph&G,int x,int y) {
//	for (int i = y+1;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1 && G.arc[x][i] != 0)
//			return i;
//	}
//	return -1;
//}
//
//// 增加边 O(1)
//void AddEdge(MGraph&G,int x,int y,int info) {
//	G.arcnum++;
//	G.arc[x][y] = info; // 权值
//	G.arc[y][x] = info;
//}
//
//// 删除边 O(1)
//
//void RemoveEdge(MGraph& G,int x,int y) {
//	G.arcnum--;
//	// 有向图 要删除一个指向
//	G.arc[x][y] = 0;
//	G.arc[y][x] = 0;
//}
//
//// 删除顶点 行列置为0即可
//// O(|V|)
//void DeleteVertex(MGraph&G,int v) {
//	G.nodes[v].data = -1;
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1 && G.arc[v][i] != 0)
//		{
//			G.arcnum--;
//			G.arc[v][i] = 0;
//			G.arc[i][v] = 0;
//		}
//	}
//	G.vernum--;
//}
////O(1)
//void InsertVertex(MGraph&G,int data) {
//	// 本来就有预留的
//	VNode* v = new VNode;
//	v->data = data;
//	G.vernum++;
//	G.nodes.push_back(*v);
//}
//// 邻接的边
////O(|V|)
//void Neighbors(MGraph&G,int x) {
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1&&G.arc[x][i]!=0) { // 这个点存在
//			cout << i << " ";
//		}
//	}
//	cout << '\n';
//}
//
//// O(1) 有向图中,<x,y>是什么
//bool Adjacent(MGraph&G,int x,int y) {
//	return G.arc[x][y];
//}
//
//// O(1)
//int get_edge_value(MGraph& G,int x, int y) {
//	return G.arc[x][y];
//}
//// O(1)
//int set_edge_value(MGraph&G,int info,int x,int y) {
//	G.arc[x][y] = info;
//	G.arc[y][x] = info;
//	return info;
//}
//
//void PrintInfo(MGraph& G) {
//	cout << "Vertex的个数:" << G.vernum << "\n";
//	cout << "Arcnum的个数:" << G.arcnum << "\n";
//
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			cout << "Vertex下标: " << i << " 顶点数据: " <<
//				G.nodes[i].data << "\n";
//		}
//	}
//
//	// 打印边 三角压缩避免重复
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			for (int j = 0;j <= i;j++) {
//				if (G.nodes[j].data != -1&&G.arc[i][j]!=0)
//					cout << "(" << i << "," << j << ")"<<
//					G.arc[i][j]<<'\n';
//			}
//		}
//	}
//}
//
//void CreateGraph(MGraph&G,int n) {
//	G.arc.resize(n);
//	for (int i = 0;i < n;i++) {
//		G.arc[i].resize(n);
//	}
//	int vernum = 0;
//	cout << "输入顶点的创建个数:(大于0) ";
//	cin >> vernum; // 大于0的数字
//	G.nodes.resize(vernum);
//	G.vernum = vernum;
//
//	
//
//	cout << "输入创建vertex的data:(" << vernum << "个)";
//	for (int i = 0;i < vernum;i++) {
//		cin >> G.nodes[i].data;
//	}
//
//	int arcnum = 0;
//	cout << "输入无向的边的个数:(可以为0) ";
//	cin >> arcnum; // 
//	G.arcnum = arcnum;
//
//	cout << "输入无向边的两端序号和info:\n";
//	for (int k = 0;k < arcnum;k++) {
//		int i, j,info;
//		cin >> i >> j>>info;
//		G.arc[i][j] = info;
//		G.arc[j][i] = info;
//	}
//
//	PrintInfo(G);
//
//}
//
//void dfs(MGraph&G) {
//
//}
//
//// 广度优先遍历 非连通图 是否存在false 有就要继续bfs
//// 遍历序列唯一不唯一 ?
//// 由于图的邻接矩阵表示方式唯一,因此遍历序列唯一
//// bfs遍历v所在的子图 子图是连通的
//void bfs(MGraph&G,int v,vector<bool>&visited, vector<index_node>& vc_copy){
//	// FirstNeighbor()  NextNeighbor()
//	queue<int> q;
//	
//	visited[vc_copy[v].index] = true;
//	q.push(v);
//
//	while (!q.empty()) {
//		cout << q.front() << ' ';
//		q.pop();
//		for (int w = FirstNeighbor(G, v);w != -1;w = NextNeighbor(G, v, w)) {
//			if (visited[vc_copy[w].index]==false) {
//				visited[vc_copy[w].index] = true;
//				q.push(w); 
//			}
//		}
//	}
//	
//}
//
//
//void bfsTraverse(MGraph& G,vector<bool>&visited,vector<index_node>&vc_copy) {
//	// 调用
//	for (int i = 0;i < G.nodes.size();i++) {
//		if(G.nodes[i].data!=-1) {
//			if(visited[vc_copy[i].index]==false)
//			bfs(G,i,visited,vc_copy);
//		}
//	}
//}
//// 朴素prim
//// O(|V|^2)
//// 最小的代价树   图至少有一个点 树可以是空树
//int Prim(MGraph&G,int v,vector<bool>&visited,vector<index_node>vc_copy) {
//
//	// 最小代价数组
//	vector<int> lowCost(visited.size());
//
//	// 录入权值 到达不了是正无穷
//	
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			if (G.arc[v][i] == 0) {
//				lowCost[vc_copy[i].index] = INT_MAX;
//			}
//			else lowCost[vc_copy[i].index] = G.arc[v][i];
//		}
//	}
//
//	// 寻找false中最小的,更新加入点周围的
//	int round = G.vernum - 1;
//	int accumulate = 0;
//	visited[vc_copy[v].index] = true;
//
//	while (round--) { 
//		int min = INT_MAX;
//		int min_index = 0;
//		for (int i = 0;i < G.nodes.size();i++) {
//			if (G.nodes[i].data!=-1) {
//				if (visited[vc_copy[i].index] == false) {  // 找到最小的结点加入
//					if (min > lowCost[vc_copy[i].index]) {
//						min_index = i;
//						min = lowCost[vc_copy[i].index];
//					}
//				}
//
//			}
//			
//		}
//
//		// 更新周围的
//		for (int w = FirstNeighbor(G, min_index);w!=-1;w=NextNeighbor(G,min_index,w)) {
//			if (G.arc[min_index][w]<lowCost[vc_copy[w].index]) { // 周围的比他小,怎么办?
//				lowCost[vc_copy[w].index] = G.arc[min_index][w];
//			}
//		}
//
//		visited[vc_copy[min_index].index] = true;
//		accumulate += min;
//	}
//	
//	return accumulate;
//
//}
//
//int Kruskal(MGraph&G,int v) {
//	struct arcnode {
//		int v1, v2,weight;
//		bool operator<(const arcnode& other)const {
//			return this->weight < other.weight;
//		}
//	};
//	
//	
//
//	// 获取边 vc_copy
//	// 逐行加大
//	vector<arcnode> arcNodes;
//	arcNodes.reserve(G.arcnum);
//
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			for (int j = 0;j <= i;j++) {
//				if (G.nodes[j].data != -1&& G.arc[i][j]!=0) {
//					arcnode acn;
//					acn.v1 = i;
//					acn.v2 = j;
//					acn.weight = G.arc[i][j];
//					arcNodes.push_back(acn);
//				}
//			}
//			
//		}
//	}
//	
//	
//	// 创建n个集合
//
//	struct PTNode {
//		int parent;
//	};
//
//	struct PTree {
//		vector<PTNode> nodes;
//	};
//
//	PTree tree;
//
//	// 初始化树
//	auto InitTree = [](int n, PTree& tree) {
//		tree.nodes.resize(n);
//
//		for (int i = 0;i < n;i++) {
//			tree.nodes[i].parent = i;  // 父结点是自己
//		}
//		};  // lambda
//
//	auto Find = [&tree](int x)->int {
//		int root = x;
//		while (tree.nodes[root].parent!=root) {
//			root = tree.nodes[root].parent;
//		}
//
//		// 路径压缩
//		if (root != tree.nodes[x].parent)
//			tree.nodes[x].parent = root;
//
//		return root;
//		};
//	// 捕获 引用捕获 值捕获 =(全部值捕获) &(全部引用捕获)
//	auto Union = [&Find,&tree](int x,int y){
//		int root1 = Find(x);
//		int root2 = Find(y);
//
//		if (root1 == root2) return;
//
//		tree.nodes[root2].parent = root1;
//		};
//	InitTree(G.vernum,tree);
//
//
//	sort(arcNodes.begin(), arcNodes.end());
//
//	int accumulate = 0;
//
//	for (int i = 0;i < arcNodes.size();i++)
//	{	// 同一个集合
//		if (Find(arcNodes[i].v1)!= Find(arcNodes[i].v2)) {
//			Union(arcNodes[i].v1, arcNodes[i].v2);
//			accumulate += arcNodes[i].weight;
//		}
//	}
//
//
//
//	return accumulate;
//}
//
//// 无权图求最短路径
//// 广度优先生成树一定是高度最小的生成树
//void BFS_MIN_Distance(MGraph&G,int u,vector<bool>&visited,vector<index_node>&vc_copy) { // 以u为中心到各顶点的最短
//	// 肯定是连通图
//	// path数组存储路径
//	// 如果还要返回路径呢
//	queue<int>q;
//	vector<int> path(G.vernum);
//	vector<int> dist(G.vernum,-1);
//	dist[vc_copy[u].index] = 0;
//	visited[vc_copy[u].index] = true;
//	// 自己的path呢
//	path[vc_copy[u].index] = -1;
//	q.push(u);
//
//	while (!q.empty()) {
//		int current = q.front();
//		q.pop();
//		for (int w = FirstNeighbor(G, current);w != -1;w = NextNeighbor(G, current, w)) {
//			if (dist[vc_copy[w].index]==-1&& visited[vc_copy[w].index]==false) {
//				visited[vc_copy[w].index] = true;
//				dist[vc_copy[w].index] = dist[vc_copy[current].index] +1;
//				path[vc_copy[w].index] = current;
//				q.push(w);
//				
//			}
//		}
//
//		
//	}
//
//	// 打印最短路径
//
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			cout << u << "~" << i << ": ";
//			
//			int root = path[vc_copy[i].index];
//
//			if (root == -1) { 
//				cout << '\n';
//				continue; }
//			// 输出终点
//			cout << vc_copy[i].index << "<-";
//			while (path[root] != -1) {
//				cout << root << "<-";
//				root = path[root];
//			}
//			// 输出出发点
//			cout << root;
//
//			cout << "  最短路径: " << dist[vc_copy[i].index] << '\n';
//
//		}
//
//	}
//}
//
//// 带权图 带权路径长度 本质是一种贪心
//// 保证是连通的
//void Dijkstra_Min_Distance(MGraph&G,int u,vector<bool>&visited,vector<index_node>&vc_copy) {
//	// 松弛更新 一步可达,必然最优
//	vector<int> path(visited.size(),-1);
//	vector<int> dist(visited.size());
//	
//	path[vc_copy[u].index] = -1;
//	
//	visited[vc_copy[u].index] = true;
//
//	// 录入info
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) { // 与u的距离
//			if (G.arc[i][u] != 0) {
//				dist[vc_copy[i].index] = G.arc[i][u];
//				path[vc_copy[i].index] = vc_copy[u].index;
//			}
//			else {
//				dist[vc_copy[i].index] = INT_MAX;
//			}
//		}
//	}
//
//	dist[vc_copy[u].index] = 0; // 自己跟自己
//
//	// 选择没有被确定的且目前最短的一步可达的,因为都是正值,所以三角到达必然大于一步最短
//	int round = G.vernum - 1;
//
//	while (round--) {
//		int min = INT_MAX;
//		int min_index;
//		for (int i = 0;i < G.nodes.size();i++) {
//			// 逐渐加入集合
//			if (G.nodes[i].data != -1&&visited[vc_copy[i].index] == false) {
//				if (min > dist[vc_copy[i].index]) {
//					min_index = i;
//					min = dist[vc_copy[i].index];
//				}
//			}
//		} // 确定一个
//
//		// 不一定是最新一个,可能是集合中的其他
//		
//		visited[vc_copy[min_index].index] = true;
//
//		// 寻找最小的
//
//		// 松弛更新周围的
//		for (int w = FirstNeighbor(G, min_index);w != -1;w =NextNeighbor(G,min_index,w) ) {
//			// 原本的大还是新路线大 已经确定的不需要调整
//			if(visited[vc_copy[w].index] == false) {
//				if (dist[vc_copy[w].index] > dist[vc_copy[min_index].index] + G.arc[w][min_index]) {
//					path[vc_copy[w].index] = min_index;
//					dist[vc_copy[w].index] = dist[vc_copy[min_index].index] + G.arc[w][min_index];
//				}
//			}
//			
//			// 否则路径保持原来
//
//		}
//	}
//	
//
//	// 打印最短路径
//
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			cout << u << "~" << i << ": ";
//
//			int root = path[vc_copy[i].index];
//
//			if (root == -1) {
//				cout << '\n';
//				continue;
//			}
//			// 输出终点
//			cout << vc_copy[i].index << "<-";
//			while (path[root] != -1) {
//				cout << root << "<-";
//				root = path[root];
//			}
//			// 输出出发点
//			cout << root;
//
//			cout << "  最短路径: " << dist[vc_copy[i].index] << '\n';
//
//		}
//
//	}
//
//}
//
//
//int main() {
//MGraph G;
//
//// 自己定一个值
//CreateGraph(G, 100);
//
//
//
//
//while (1) {
//
//	vector<index_node>vc_copy(G.nodes.size());
//	int count = 0;
//	// 建立映射数组
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			index_node n;
//			n.index = count;
//			vc_copy[i] = n;
//			count++;
//		}
//	}
//	vector<bool>visited(count);
//
//
//
//	cout << "--------------------------------\n";
//	cout << "1.打印图信息\n";
//	cout << "2.删除顶点x\n";
//	cout << "3.插入顶点x\n";
//	cout << "4.添加边\n";
//	cout << "5.删除边\n";
//	cout << "6.返回顶点x的第一个邻接点\n";
//	cout << "7.返回x的除了y的下一个邻接点\n";
//	cout << "8.输出与x邻接的边\n";
//	cout << "9.判断边(x,y)是否存在\n";
//	cout << "10.获取边(x,y)的权值\n";
//	cout << "11.更新边(x,y)的权值\n";
//	cout << "12.bfs遍历子图v\n";
//	cout << "13.bfs遍历图\n";
//	cout << "14.Prim求 MST:\n";
//	cout << "15.Kruskal求 MST:\n";
//	cout << "16.BFS求无权图单源最短路径:\n";
//	cout << "17.Dijkstra求无权图单源最短路径(主要是有向图):\n";
//	cout << "请输入(1-17): \n";
//	int num;
//	cin >> num;
//	int temp;
//	int index = 0;
//	int info;
//	switch (num) {
//	case 1:
//		PrintInfo(G);
//		break;
//	case 2:
//		cout << "2.输入删除下标: ";
//		cin >> index;
//		DeleteVertex(G, index);
//		break;
//	case 3:
//		cout << "输入Vertex的数据: ";
//		cin >> index;
//		InsertVertex(G, index);
//		break;
//	case 4:
//		cout << "4.输入添加边的下标和权值: ";
//		cin >> index >> temp >> info;
//		AddEdge(G, index, temp, info);
//		break;
//	case 5:
//		cout << "5.输入删除边的下标: ";
//		cin >> index >> temp;
//		RemoveEdge(G, index, temp);
//		break;
//	case 6:
//		cout << "6.输入顶点下标(返回第一个邻接点):";
//		cin >> index;
//		cout << "第一个邻接点: " <<
//			FirstNeighbor(G, index) << '\n';
//		break;
//	case 7:
//		cout << "7.输入顶点下标和一个邻接点(返回后一个邻接点):";
//		cin >> index >> temp;
//		cout << "后一个邻接点: " <<
//			NextNeighbor(G, index, temp) << '\n';
//		break;
//	case 8:
//		cout << "8.输入结点x(返回所有邻接点):";
//		cin >> index;
//		Neighbors(G, index);
//		break;
//	case 9:
//		cout << "9.输入判定边(x,y): ";
//		cin >> index >> temp;
//		Adjacent(G, index, temp) == 0 ? cout << "不存在" :
//			cout << "存在";
//		cout << '\n';
//		break;
//	case 10:
//		cout << "10.输入获取权值边的(x,y): ";
//		cin >> index >> temp;
//		cout << get_edge_value(G, index, temp) << '\n';
//		break;
//	case 11:
//		cout << "11.输入更新权值边的(x,y)和info: ";
//		cin >> index >> temp >> info;
//		cout << set_edge_value(G, info, index, temp) << "更新成功\n";
//		break;
//	case 12:
//		cout << "12.输入v结点,对这个子图: ";
//		cin >> index;
//		// 翻译一下
//		;
//		bfs(G,index, visited, vc_copy);
//		cout << '\n';
//		break;
//	case 13:
//		cout << "13.bfs遍历图: ";
//		bfsTraverse(G,visited, vc_copy);
//		cout << '\n';
//		break;
//	case 14:
//		cout << "14.Prim算法最小代价树:";
//		cin >> index;
//		cout<<"MST:"<<Prim(G, index, visited, vc_copy)<<'\n';
//		break;
//	case 15:
//		cout << "15.Kruskal算法最小代价树:";
//		cin >> index;
//		cout << "MST:" << Kruskal(G,index) << '\n';
//		break;
//	case 16:{
//		// 默认是连通图
//		cout << "16.请输入中心点v: ";
//		cin >> index;
//		//vector<int>path(G.vernum);
//		//// C++自动优化移动拷贝
//		//vector<int> dist = BFS_MIN_Distance(G, index, visited, vc_copy, path);
//		//
//		// 输出各个路径 找到祖先为止
//		BFS_MIN_Distance(G,index,visited,vc_copy);
//		break;
//	}
//	case 17: 
//	{
//		// 默认是连通图
//		cout << "17.请输入中心点v: ";
//		cin >> index;
//		//vector<int>path(G.vernum);
//		//// C++自动优化移动拷贝
//		//vector<int> dist = BFS_MIN_Distance(G, index, visited, vc_copy, path);
//		//
//		// 输出各个路径 找到祖先为止
//		Dijkstra_Min_Distance(G, index, visited, vc_copy);
//		break;
//	}
//	}
//}
//
//}