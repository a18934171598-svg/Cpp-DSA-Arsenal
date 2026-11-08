//#include<vector>
//#include<iostream>
//#include<queue>
//using namespace std;
//
//struct index_node {
//	int index;
//};
//
//struct ALCNode {
//	int value; // 权值
//	int index; // 指向的vertex的下标
//	ALCNode* next;
//};
//
//struct VNode {
//	int data;
//	ALCNode* first;
//};
//
//struct ALGraph {
//	vector<VNode> nodes;
//	int arcnum,vernum;   // 
//};
//
//int FirstNeighbor(ALGraph&G,int v) {
//	if (G.nodes[v].first) return G.nodes[v].first->index;
//	return -1;
//}
//// O(1) 下一个
//int NextNeighbor(ALGraph&G,int x,int y) {
//	ALCNode* p = G.nodes[x].first;
//	while (p && p->index != y) p = p->next;
//	if (p && p->next) return p->next->index;
//	return -1;
//}
//
//// 增边
//void AddEdge(ALGraph&G,int x,int y) {
//	G.arcnum ++;  
//	// 两个 头插法
//	ALCNode* temp1 = G.nodes[x].first;
//	ALCNode* temp2 = G.nodes[y].first;
//
//	ALCNode* new1 = new ALCNode;  // 不能被消去
//	ALCNode* new2 = new ALCNode;  // 不能被消去
//	new1->index = y;
//	new2->index = x;
//	new1->next = temp1;
//	new2->next = temp2;
//
//	G.nodes[x].first = new1;
//	G.nodes[y].first = new2;
//}
//// 删除一对边 无向图
//void RemoveEdge(ALGraph&G,int x,int y) {
//	G.arcnum--;
//	ALCNode* p = G.nodes[x].first,*q=NULL;
//	while (p && p->index != y) { q = p;p = p->next; }
//	
//	if (!p) return; // 啥也没有 默认两条边是同时出现的
//
//	if(!q) // 说明第一个就是
//	{
//		G.nodes[x].first = G.nodes[x].first->next;
//		delete p;
//	}
//	else {
//		q->next = p->next;
//		delete p;
//	}
//	p = G.nodes[y].first;
//	q = NULL;
//	while (p && p->index != x) { q = p;p = p->next; }
//	// 不会是空空了
//	if (!q) // 说明第一个就是
//	{
//		G.nodes[x].first = G.nodes[x].first->next;
//		delete p;
//	}
//	else {
//		q->next = p->next;
//		delete p;
//	}
//}
//
//void DeleteVertex(ALGraph&G,int x) {
//	G.vernum--;
//	// 数组很难移动的,把他的data置为-1即可
//	// 还要删除各个结点中含有它的边
//
//	// 删除的边的数量
//	int delete_count = 0;
//	ALCNode* p = G.nodes[x].first,*q=NULL;
//	while (p) {
//		q = p;
//		p = p->next;
//		delete_count++;
//		delete q;
//	}	
//	G.nodes[x].first = NULL;
//	G.nodes[x].data = -1;  //  假设-1是非法值
//	G.arcnum -= delete_count;
//
//	// 删掉指向x的边
//	ALCNode* pre;
//	for (int i = 0;i < G.nodes.size();i++) {
//		// 已经被删除的边 first是NULL 
//		p = G.nodes[i].first;
//		pre = NULL;
//		while (p) {
//			if (p->index == x) {
//				if (pre==NULL) { // 第一个是
//					G.nodes[i].first = p->next;
//					delete p;
//					break;
//				}
//				else {
//					pre->next = p->next;
//					delete p;
//					break;
//				}
//			}
//			else {
//				pre = p;p = p->next;
//			}
//		}
//
//	}
//
//	
//}
//// 插入 不关心位置 ,总之一定含有数据
//int InsertVertex(ALGraph&G,int data){
//	G.vernum++;
//	VNode* V = new VNode;
//	V->data = data;
//	V->first = NULL;
//	G.nodes.push_back(*V);// 慢慢设计
//	return G.nodes.size()-1;  // 返回插入顶点的下标
//}
//
//void Neighbors(ALGraph&G,int x) {
//	// 遍历链表
//	ALCNode* p = G.nodes[x].first;
//	while (p) {
//		/*cout << "(" << G.nodes[x].data << ","<<
//			G.nodes[p->index].data<<")";*/
//		//cout << p->value;  // 边的权值
//		cout << p->index<<" ";
//		p = p->next;
//	}
//	cout << "\n";
//}
//
//// 判断是否存在边
//bool Adjacent(ALGraph&G,int x,int y) {
//	ALCNode* p = G.nodes[x].first;
//	while (p) {
//		if (p->index == y) return true;
//		p = p->next;
//	}
//	return false;
//}
//
//
//// 输出结点的信息
//// 输出边的信息
//void PrintInfo(ALGraph& G) {
//	cout << "Vertex的个数:" << G.vernum<<"\n";
//	cout << "Arcnum的个数:" << G.arcnum<<"\n";
//
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			cout << "Vertex下标: " << i << " 顶点数据: " <<
//				G.nodes[i].data << "\n";
//		}
//	}
//	// 无向图 会重复输出
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			ALCNode* p = G.nodes[i].first;
//			while (p) {
//				cout << "(" << i << "," << p->index<<")\n";
//				p = p->next;
//			}
//		}
//
//	}
//}
//
//// 创建图 1.创建结点 2.创建边
//void CreateGraph(ALGraph&G) {
//	// 输入节点个数
//	int vernum = 0;
//	cout << "输入顶点的创建个数:(大于0) ";
//	cin >> vernum; // 大于0的数字
//	G.nodes.resize(vernum);
//	G.vernum = vernum;
//	cout << "输入创建vertex的data:("<<vernum<<"个)";
//	for (int i = 0;i < vernum;i++) {
//		cin >> G.nodes[i].data;
//		G.nodes[i].first = NULL;
//	}
//	int arcnum = 0;
//	cout << "输入无向的边的个数:(可以为0) ";
//	cin >> arcnum; // 
//	G.arcnum = arcnum;
//
//	// 展示结点的信息 
//	for (int i = 0;i < G.nodes.size();i++) {
//		if (G.nodes[i].data != -1) {
//			cout << "Vertex下标: " << i << " 顶点数据: " <<
//				G.nodes[i].data<<"\n";
//		}
//	}
//
//	cout << "输入边的两端序号: (2个1行默认没有权值)\n";
//	for (int i = 0;i < arcnum;i++) { 
//		int l, r;
//		cin >> l >> r;
//		// 2倍|E| 头插法更合适
//		ALCNode* arc1 = new ALCNode; 
//		arc1->index = r;
//		arc1->next = G.nodes[l].first;
//		G.nodes[l].first = arc1;
//		ALCNode* arc2 = new ALCNode; 
//		arc2->index = l;
//		arc2->next = G.nodes[r].first;
//		G.nodes[r].first = arc2;
//
//	}
//	PrintInfo(G);
//}
//
//
//// 邻接表 广搜
//void bfs(ALGraph& G, int v, vector<bool>& visited, vector<index_node>& vc_copy) {
//	// FirstNeighbor() NextNeighbor()
//	queue<int>q;
//	q.push(v);
//	visited[vc_copy[v].index] = true;
//	//
//	while (!q.empty()) {
//		int current = q.front();
//		cout << current << " ";
//		q.pop();
//		for (int w = FirstNeighbor(G, current);w != -1;w = NextNeighbor(G, current, w)) {
//			if (visited[vc_copy[w].index] == false) {
//				q.push(w);
//				visited[vc_copy[w].index] = true;
//			}
//		}
//	}
//}
//
//void bfsTraverse(ALGraph& G,vector<bool>&visited,vector<index_node>&vc_copy) {
//	// 调用
//	for (int i = 0;i < G.nodes.size();i++) {
//		if(G.nodes[i].data!=-1) {
//			if(visited[vc_copy[i].index]==false)
//			bfs(G,i,visited,vc_copy);
//		}
//	}
//}
//
//
////void dfs(ALGraph&G, vector<bool>& visited, vector<index_node>& vc_copy,int v) {
////
////	for(int i=0;)
////	dfs()
////
////}
//
//
//
//int main() {
//	ALGraph G;
//	CreateGraph(G);
//
//	// 把所有new去掉
//	while (1) {
//
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
//		cout << "10.bfs遍历连通分量v\n";
//		cout << "11.bfs遍历图\n";
//		cout << "请输入(1-11): \n";
//		int num;
//		cin >> num;
//		int temp;
//		int index = 0;
//		switch (num) {
//			case 1:
//				PrintInfo(G);
//				break;
//			case 2:
//				cout << "2.输入删除下标: ";
//				cin >> index;
//				DeleteVertex(G,index);
//				break;
//			case 3:
//				InsertVertex(G,100);
//				break;
//			case 4:
//				cout << "4.输入添加边的下标: ";
//				cin >> index >> temp;
//				AddEdge(G,index,temp);
//				break;
//			case 5:
//				cout << "5.输入删除边的下标: ";
//				cin >> index >> temp;
//				RemoveEdge(G, index, temp);
//				break;
//			case 6:
//				cout << "6.输入顶点下标(返回第一个邻接点):";
//				cin >> index;
//				cout<<"第一个邻接点: "<<
//					FirstNeighbor(G, index)<<'\n';
//				break;
//			case 7:
//				cout << "7.输入顶点下标和一个邻接点(返回后一个邻接点):";
//				cin >> index>>temp;
//				cout << "后一个邻接点: " <<
//					NextNeighbor(G,index,temp) << '\n';
//				break;
//			case 8:
//				cout << "8.输入结点x:";
//				cin >> index;
//				Neighbors(G,index);
//				break;
//			case 9:
//				cout << "9.输入判定边(x,y): ";
//				cin >> index >> temp;
//				Adjacent(G,index,temp)==0?cout<<"不存在" :
//					cout<<"存在";
//				cout << '\n';
//				break;
//			case 10:
//				cout << "10:bfs遍历连通分量v: ";
//				cin >> index;
//				bfs(G, index,visited,vc_copy);
//				cout << '\n';
//				break;
//			case 11:
//				cout << "11:bfs遍历图: ";
//				bfsTraverse(G,visited, vc_copy);
//				cout << '\n';
//				break;
//			case 12:
//				cout << "12:dfs遍历连通分量v: ";
//				cin >> index;
//				dfs(G, index, visited, vc_copy);
//				cout << '\n';
//				break;
//			case 13:
//				cout << "11:dfs遍历图: ";
//				dfsTraverse(G, visited, vc_copy);
//				cout << '\n';
//				break;
//		}
//	}
//
//}