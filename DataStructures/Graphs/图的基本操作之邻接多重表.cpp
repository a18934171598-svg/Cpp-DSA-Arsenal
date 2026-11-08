//#include<vector>
//#include<iostream>
//#include<queue>
//using namespace std;
//
//struct index_node{
//	int index;
//};
//
//
//struct arcnode {
//	int mark;
//	int info;
//	int i, j;
//	arcnode* ilink, *jlink;
//};
//
//struct VNode{
//	arcnode* first;
//	int data;
//};
//
//struct AMLGraph {
//	vector<VNode>nodes;
//	int arcnum, vernum;
//};
//
//
//int NextNeighbor(AMLGraph& G, int x, int y) {
//	// 找到y
//	arcnode* p = G.nodes[x].first, * pre = NULL;
//	if (!p) return -1;  // x没有无向边
//	while (p && (p->i != y && p->j != y)) {
//		p = (p->i == x) ? p->ilink : p->jlink;
//	}
//	// 下一个
//	p = (p->i == x) ? p->ilink : p->jlink;
//	if (!p) return -1;  // 没有下一个
//	return (p->i == x) ? p->j : p->i;
//}
//
//int FirstNeighbor(AMLGraph&G,int x) {
//	arcnode* p = G.nodes[x].first;
//	if (p) return (p->i == x) ? p->j : p->i;
//	return -1;
//}
//
//void Neighbors(AMLGraph&G,int x) {
//	arcnode* p = G.nodes[x].first;
//	while (p) {
//		if (p->i != x) cout << p->i << " ";
//		if (p->j != x) cout << p->j << " ";
//		p = (p->i == x) ? p->ilink : p->jlink;
//	}
//	cout << '\n';
//}
//
//int InsertVertex(AMLGraph&G,int data) {
//	G.vernum++;
//	VNode* V = new VNode;
//	V->data = data;
//	V->first = NULL;
//	G.nodes.push_back(*V);
//	return G.nodes.size() - 1;  // 返回插入顶点的下标
//}
//
//void DeleteVertex(AMLGraph&G,int v) {
//	// 链上全都删除
//	G.nodes[v].data = -1;
//	arcnode* p = G.nodes[v].first;
//
//	while (p) {
//		// 另一个方向上的延续
//		int current = (p->i == v) ? p->j : p->i;
//		arcnode* q = G.nodes[current].first,*pre=NULL;
//		while (q&&q!=p) {
//			pre = q;
//			q = (q->i == current) ? q->ilink : q->jlink;
//		}
//		if (!pre) {
//			G.nodes[current].first = ((q->i == current) ? q->ilink
//				: q->jlink);
//		}
//		else {
//			((pre->i == current) ? pre->ilink : pre->jlink)
//			= ((q->i == current) ? q->ilink : q->jlink);
//		}
//		//delete q;
//		G.arcnum--;
//		p = (p->i == v) ? p->ilink : p->jlink;
//		delete q;
//	}
//	G.vernum--;
//}
//void AddEdge(AMLGraph& G,int x,int y) {
//	G.arcnum++;
//	// 头插法
//	arcnode* acn = new arcnode;
//	acn->i = x;
//	acn->j = y;
//	acn->ilink = G.nodes[x].first;
//	G.nodes[x].first = acn;
//	acn->jlink = G.nodes[y].first;
//	G.nodes[y].first = acn;
//}
//
//void RemoveEdge(AMLGraph& G, int x, int y) {
//	G.arcnum--;
//	// 顺着线索找到
//	arcnode* p = G.nodes[x].first,*pre = NULL;
//	while (p&&((p->i != y && p->j != y))) {
//		pre = p;
//		p = (p->i == x) ? p->ilink : p->jlink;
//	}
//	if (!pre) { // 第一个就是
//		G.nodes[x].first = ((p->i == x) ? p->ilink : p->jlink);
//	}
//	else {
//		((pre->i == x) ? pre->ilink : pre->jlink)
//			= ((p->i == x) ? p->ilink : p->jlink);
//	}
//	pre = NULL;
//	arcnode* q = G.nodes[y].first;
//	while (q && q!=p) {
//		pre = q;
//		q = (q->i == y) ? q->ilink : q->jlink;
//	}
//	if (!pre) { // 第一个就是
//		G.nodes[y].first = ((q->i == y) ? p->ilink : p->jlink);
//	}
//	else {
//		((pre->i == y) ? pre->ilink : pre->jlink)
//			= ((q->i == y) ? q->ilink : q->jlink);
//	}
//
//	delete q;
//}
//void PrintInfo(AMLGraph&G) {
//	cout << "Vertex的个数:" << G.vernum << "\n";
//	cout << "Arcnum的个数:" << G.arcnum << "\n";
//
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			cout << "Vertex下标: " << i << " 顶点数据: " <<
//				G.nodes[i].data << "\n";
//		}
//	}
//	// 先把所有的边置mark 清除打印痕迹
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			arcnode* p = G.nodes[i].first;
//			while (p) {
//				p->mark = 0;  // 打上标记
//				p = (p->i == i) ? p->ilink : p->jlink;
//			}
//		}
//	}
//
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			arcnode* p = G.nodes[i].first;
//			while (p) {
//				if (p->mark == 0) // 才会打印
//					cout << "(" << p->i << "," << p->j << ")   info:"
//					<<p->info<<"\n";
//				p->mark = 1;
//				p = (p->i == i) ? p->ilink: p->jlink;
//			}
//		}
//
//	}
//}
//
//
//int set_edge_value(AMLGraph&G,int info,int x,int y) {
//	// 找到那条边
//	arcnode* p = G.nodes[x].first;
//	while (p) {
//		if (p->i == y || p->j == y) {
//			p->info = info;
//			return info;
//		}
//		p = (p->i == x) ? p->ilink:p->jlink;
//	}
//}
//
//int get_edge_value(AMLGraph& G,int x, int y) {
//	arcnode* p = G.nodes[x].first;
//	while (p) {
//		if (p->i == y || p->j == y) {
//			return p->info;
//		}
//		p = (p->i == x) ? p->ilink : p->jlink;
//	}
//}
//
//
//void bfs(AMLGraph&G,int v,vector<bool>&visited,vector<index_node>&vc_copy) {
//	// FirstNeighbor()   NextNeighbor()
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
//void bfsTraverse(AMLGraph& G,vector<bool>&visited,vector<index_node>&vc_copy) {
//	// 调用
//	for (int i = 0;i < G.nodes.size();i++) {
//		if(G.nodes[i].data!=-1) {
//			if(visited[vc_copy[i].index]==false)
//			bfs(G,i,visited,vc_copy);
//		}
//	}
//}
//
//void CreateGraph(AMLGraph&G) {
//	int vernum = 0;
//	cout << "输入顶点的创建个数:(大于0) ";
//	cin >> vernum; // 大于0的数字
//	G.nodes.resize(vernum);
//	G.vernum = vernum;
//
//	cout << "输入创建vertex的data:(" << vernum << "个)";
//	for (int i = 0;i < vernum;i++) {
//		cin >> G.nodes[i].data;
//		G.nodes[i].first = NULL;
//	}
//
//	int arcnum = 0;
//	cout << "输入无向的边的个数:(可以为0) ";
//	cin >> arcnum; // 
//	G.arcnum = arcnum;
//
//	cout << "输入无向边的两端序号: (2个1行默认没有权值)\n";
//	for (int k = 0;k < arcnum;k++) {
//		arcnode* acn = new arcnode;
//		int i, j;
//		cin >> i >>j; 
//		acn->i = i;
//		acn->j = j;
//
//		// 头插法 这样的插法并不知道是i链还是j链
//		acn->ilink = G.nodes[i].first;
//		G.nodes[i].first = acn;
//
//		acn->jlink = G.nodes[j].first;
//		G.nodes[j].first = acn;
//	}
//
//	PrintInfo(G);
//
//}
//
//bool Adjacent(AMLGraph&G,int x,int y) {
//	// 判断是否存在
//	arcnode* p = G.nodes[x].first;
//	while (p) {
//		if (p->i == y || p->j == y)return true;
//		p = (p->i == x) ? p->ilink : p->jlink;
//	}
//
//	return false;
//}
//
//void dfs(AMLGraph& G, int v, vector<bool>& visited,vector<index_node>&vc_copy) {
//
//
//	visited[vc_copy[v].index] = true;
//	cout << v << ' ';
//	
//
//	for (int w = FirstNeighbor(G, v); w != -1;w = NextNeighbor(G,v,w)) {
//		if (visited[vc_copy[w].index] == false) {
//
//			dfs(G,w,visited,vc_copy);
//		}
//	}
//
//}
//
//void dfsTraverse(AMLGraph& G, vector<bool>& visited,vector<index_node>&vc_copy) {
//
//	// 遍历每一个连通分量
//
//	for (int i=0;i<G.nodes.size();i++) {
//		if (G.nodes[i].data!=-1&&visited[vc_copy[i].index]==false) {
//			dfs(G,i,visited,vc_copy);
//		}
//	}
//
//}
//int main() {
//	AMLGraph G;
//	CreateGraph(G);
//
//	while (1) {
//
//		vector<index_node>vc_copy(G.nodes.size());
//		int count = 0;
//		// 建立映射数组
//		for (int i = 0;i < G.nodes.size();i++) {
//			if (G.nodes[i].data != -1) {
//				index_node n;
//				n.index = count;
//				vc_copy[i] = n;
//				count++;
//			}
//		}
//		vector<bool>visited(count);
//
//
//		cout << "--------------------------------\n";
//		cout << "1.打印图信息\n";
//		cout << "2.删除顶点x\n";
//		cout << "3.插入顶点x\n";
//		cout << "4.添加边\n";
//		cout << "5.删除边\n";
//		cout << "6.返回顶点x的第一个邻接点\n";
//		cout << "7.返回x的除了y的下一个邻接点\n";
//		cout << "8.输出与x邻接的边\n";
//		cout << "9.判断边(x,y)是否存在\n";
//		cout << "10.获取边(x,y)的权值\n";
//		cout << "11.更新边(x,y)的权值\n";
//		cout << "12.bfs遍历连通分量v\n";
//		cout << "13.bfs遍历图\n";
//		cout << "14.dfs遍历连通分量v\n";
//		cout << "15.dfs遍历图\n";
//		cout << "请输入(1-15): \n";
//		int num;
//		cin >> num;
//		int temp;
//		int index = 0;
//		int info;
//		switch (num) {
//		case 1:
//			PrintInfo(G);
//			break;
//		case 2:
//			cout << "2.输入删除下标: ";
//			cin >> index;
//			DeleteVertex(G, index);
//			break;
//		case 3:
//			cout << "输入Vertex的数据: ";
//			cin >> index;
//			InsertVertex(G, index);
//			break;
//		case 4:
//			cout << "4.输入添加边的下标: ";
//			cin >> index >> temp;
//			AddEdge(G, index, temp);
//			break;
//		case 5:
//			cout << "5.输入删除边的下标: ";
//			cin >> index >> temp;
//			RemoveEdge(G, index, temp);
//			break;
//		case 6:
//			cout << "6.输入顶点下标(返回第一个邻接点):";
//			cin >> index;
//			cout << "第一个邻接点: " <<
//				FirstNeighbor(G, index) << '\n';
//			break;
//		case 7:
//			cout << "7.输入顶点下标和一个邻接点(返回后一个邻接点):";
//			cin >> index >> temp;
//			cout << "后一个邻接点: " <<
//				NextNeighbor(G, index, temp) << '\n';
//			break;
//		case 8:
//			cout << "8.输入结点x(返回所有邻接点):";
//			cin >> index;
//			Neighbors(G, index);
//			break;
//		case 9:
//			cout << "9.输入判定边(x,y): ";
//			cin >> index >> temp;
//			Adjacent(G, index, temp) == 0 ? cout << "不存在" :
//				cout << "存在";
//			cout << '\n';
//			break;
//		case 10:
//			cout << "10.输入获取权值边的(x,y): ";
//			cin >> index >> temp;
//			cout << get_edge_value(G, index, temp) << '\n';
//			break;
//		case 11:
//			cout << "11.输入更新权值边的(x,y)和info: ";
//			cin >> index >> temp>>info;
//			cout << set_edge_value(G,info, index, temp) << "更新成功\n";
//			break;
//		case 12:
//			cout << "输入连通分量v";
//			cin >> index;
//			bfs(G, index,visited,vc_copy);
//			cout << '\n';
//			break;
//		case 13:
//			bfsTraverse(G,visited, vc_copy);
//			cout << '\n';
//			break;
//		case 14:
//			cout << "输入连通分量v";
//			cin >> index;
//			dfs(G,index,visited,vc_copy);
//			cout << '\n';
//			break;
//		case 15:
//			dfsTraverse(G,visited,vc_copy);
//			cout << '\n';
//			break;
//		}
//	}
//}