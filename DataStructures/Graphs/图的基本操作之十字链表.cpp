/*
// 应用于有向图
// 十字链表

#include<vector>
#include<iostream>
#include<queue>
using namespace std;

struct index_node
{
	int index;
};

struct arcnode {
	int headvex, tailvex;
	arcnode* outlink, * inlink;
	int info; // 权值
};

struct VNode {
	int data;
	arcnode* in,*out;
};

struct olGraph {
	vector<VNode> nodes;
	int vernum, arcnum;
};

bool Adjacent(olGraph&G,int tail,int head) {
	// 判断有向边是否存在 (tail--->head)
	arcnode*p = G.nodes[tail].out;
	while (p) { 
		if (p->headvex == head) return true;
		p = p->outlink; 
	}
	return false;
}
void Neighbors(olGraph& G, int x)
{	
	// 出边邻居 入边邻居 分开写
	arcnode* p = G.nodes[x].out;
	cout << "出度邻接点:";
	while (p) {
		cout << p->headvex << " ";
		p = p->outlink;
	}
	cout << '\n';
	p = G.nodes[x].in;
	cout << "入度邻接点:";
	while (p) {
		cout << p->tailvex << " ";
		p = p->inlink;
	}
	cout << '\n';
}

void InsertVertex(olGraph&G,int data) {
	G.vernum++;
	VNode* n = new VNode;
	n->data = data;
	n->in = NULL;
	n->out = NULL;
	G.nodes.push_back(*n);
}
void DeleteVertex(olGraph& G,int v) {
	G.vernum--;
	G.nodes[v].data = -1;
	// 删到底就行 两条链子
	arcnode* p = G.nodes[v].in,*q=NULL,*pre=NULL;
	while (p) {  // 依附于v的入度 
		q = p;p = p->inlink;
		int tail = q->tailvex;
		pre = NULL;
		// 找到
		arcnode* tp = G.nodes[tail].out;
		while (tp&&tp!=q) {
			pre = tp;
			tp = tp->outlink;
		}
		if (!pre) { // 第一个就是q
			G.nodes[tail].out = G.nodes[tail].out->outlink;
		}
		else {
			pre->outlink = tp->outlink;
		}
		delete q; 
		G.arcnum--;
	}
	p = G.nodes[v].out;
	q = NULL;
	pre = NULL;
	while (p) {  // 依附于v的出度 
		q = p;p = p->outlink;
		int head = q->headvex;
		pre = NULL;
		// 找到
		arcnode* hp = G.nodes[head].in;
		while (hp && hp != q) {
			pre = hp;
			hp = hp->inlink;
		}
		if (!pre) { // 第一个就是q
			G.nodes[head].in = G.nodes[head].in->inlink;
		}
		else {
			pre->inlink = hp->inlink;
		}
		delete q;
		G.arcnum--;
	}

	G.nodes[v].in = NULL;
	G.nodes[v].out = NULL;
}
void AddEdge(olGraph& G,int tail,int head,int info) { // tail-->head
	G.arcnum++;
	// 头插法
	arcnode* acn = new arcnode;
	acn->info = info;
	acn->headvex = head;
	acn->tailvex = tail;

	acn->outlink = G.nodes[tail].out;
	acn->inlink = G.nodes[head].in;
	G.nodes[tail].out = acn;
	G.nodes[head].in = acn;
}
void RemoveEdge(olGraph& G,int head,int tail) {
	G.arcnum--;
	arcnode* p = G.nodes[head].in,*pre = NULL;
	while (p&&p->tailvex!=tail) {
		pre = p;
		p = p->inlink;
	}
	if (!pre) { // 第一个是
		G.nodes[head].in = G.nodes[head].in->inlink;
	}
	else {
		pre->inlink = p->inlink;
	}
	p = G.nodes[tail].out;
	pre = NULL;
	while (p && p->headvex != head) {
		pre = p;
		p = p->outlink;
	}
	if (!pre) { // 第一个是
		G.nodes[tail].out = G.nodes[tail].out->outlink;
	}
	else {
		pre->outlink = p->outlink;
	}
}

// 提供两套接口 
int FirstNeighborOut(olGraph& G,int v) {
	if (G.nodes[v].out) return G.nodes[v].out->headvex;
	return -1;
}
int FirstNeighborIn(olGraph& G, int v) {
	if (G.nodes[v].in) return G.nodes[v].in->tailvex;
	return -1;
}



int NextNeighbor_Out(olGraph& G,int v,int y) {
	arcnode* p = G.nodes[v].out;
	if (!p)
		return -1;
	while (p && p->headvex != y) {
		p = p->outlink;
	}
	
	p = p->outlink;   // 最后一个
	if (!p)
		return -1;
	return p->headvex;
}

int NextNeighbor_In(olGraph& G, int v, int y) {
	arcnode* p = G.nodes[v].in;
	if (!p) return -1;
	while (p && p->tailvex != y) {
		p = p->inlink;
	}
	p = p->inlink;
	if (!p)
		return -1;
	return p->tailvex;
}



int get_edge_value(olGraph&G,int head, int tail) {
	// 找到[head]的outlink中tailvex为tail
	arcnode* p = G.nodes[tail].out;
	while (p) {
		if (p->headvex ==head) return p->info;// 权值
		p = p->outlink;
	}
	return -1; // 假设为非法值
}

int set_edge_value(olGraph&G,int head,int tail,int info) {
	// 找到[head]的outlink中tailvex为tail
	arcnode* p = G.nodes[tail].out;
	while (p) {
		if (p->headvex == head) { 
			p->info = info; 
			return p->info;
		}// 权值
		p = p->outlink;
	}
}
void PrintInfo(olGraph&G) {
	cout << "Vertex的个数:" << G.vernum << "\n";
	cout << "Arcnum的个数:" << G.arcnum << "\n";

	for (int i = 0;i < G.nodes.size();i++) {
		if (G.nodes[i].data != -1) {
			cout << "Vertex下标: " << i << " 顶点数据: " <<
				G.nodes[i].data << "\n";
		}
	}

	for (int i = 0;i < G.nodes.size();i++) {
		if (G.nodes[i].data != -1) {
			arcnode* p = G.nodes[i].out;
			while (p) {
				cout << "<" << i << "--->" << p->headvex << ">  info: "<<p->info<<"\n";
				p = p->outlink;
			}
		}

	}
}
void CreateGraph(olGraph&G) {
	int vernum = 0;
	cout << "输入顶点的创建个数:(大于0) ";
	cin >> vernum; // 大于0的数字
	G.nodes.resize(vernum);
	G.vernum = vernum;

	cout << "输入创建vertex的data:(" << vernum << "个)";
	for (int i = 0;i < vernum;i++) {
		cin >> G.nodes[i].data;
		G.nodes[i].in = NULL;
		G.nodes[i].out = NULL;
	}

	int arcnum = 0;
	cout << "输入有向的边的个数:(可以为0) ";
	cin >> arcnum; // 
	G.arcnum = arcnum;
	cout << "Tips: 代表依附于h的入度,依附于t的出度\n";
	cout << "输入有向边的两端序号和info: \n";
	for (int i = 0;i < arcnum;i++) {
		arcnode* acn = new arcnode;
		int h, t,info;
		cin >> t >> h>>info; // 代表依附于h的入度,依附于t的出度
		acn->headvex = h;
		acn->tailvex = t;
		acn->info = info;
		// 头插法
		acn->inlink = G.nodes[h].in;
		G.nodes[h].in = acn;

		acn->outlink = G.nodes[t].out;
		G.nodes[t].out = acn;
	}
	
	PrintInfo(G);

}

void bfs(olGraph& G, int v, vector<bool>& visited, vector<index_node>& vc_copy) {
	//一个强连通图

	queue<int> q;
	q.push(v);
	visited[vc_copy[v].index] = true;


	while (!q.empty()) {
		int current = q.front();
		cout << current<<' ';
		q.pop();
		for (int w = FirstNeighborOut(G, current);w != -1;w = NextNeighbor_Out(G, current, w))
		{
			if (visited[vc_copy[w].index] == false)
			{
				visited[vc_copy[w].index] = true;
				q.push(w);
			}
		}
		for (int w = FirstNeighborIn(G, current);w != -1;w = NextNeighbor_In(G, current, w))
		{
			if (visited[vc_copy[w].index] == false)
			{
				visited[vc_copy[w].index] = true;
				q.push(w);
			}
		}
	}
	
}

void bfsTraverse(olGraph& G,vector<bool>& visited, vector<index_node>& vc_copy) {
	
	for (int i = 0;i < G.nodes.size();i++) {
		if (G.nodes[i].data != -1&&visited[vc_copy[i].index]==false) {
			bfs(G, i, visited, vc_copy);
		}
	}
}


void dfs(olGraph&G,int v,vector<bool>&visited,vector<index_node>&vc_copy) {

	visited[vc_copy[v].index] = true;
	cout<<v<<' ';
	for (int w = FirstNeighborIn(G,v);w!=-1;w = NextNeighbor_In(G,v,w)) {
		if (visited[vc_copy[w].index] == false) {
			dfs(G,w,visited,vc_copy);
		}
	}

}

void dfsTraverse(olGraph&G, vector<bool>& visited, vector<index_node>& vc_copy) {
	for (int i = 0;i < G.nodes.size();i++) {
		if (G.nodes[i].data!=-1&&visited[vc_copy[i].index]==false) {
			dfs(G,i,visited,vc_copy);
		}
	}
}

void Dijkstra_Min_Distance(olGraph&G,int u,vector<bool>&visited,vector<index_node>&vc_copy) {

	vector<int>path(visited.size());
	vector<int>dist(visited.size(),INT_MAX);
	dist[vc_copy[u].index] = 0;
	path[vc_copy[u].index] = -1;
	
	priority_queue<pair<int, int>,vector<pair<int, int>> ,greater<pair<int, int>> >pq;

	pq.push({0,u});

	while (!pq.empty()) {
		pair<int,int>cur = pq.top();
		pq.pop();

		visited[vc_copy[cur.second].index] = true;

		arcnode* p = G.nodes[cur.second].out;
		while (p) {
			int v = p->headvex;
			int w = p->info;
			if (!visited[vc_copy[v].index] &&
				dist[vc_copy[v].index] > dist[vc_copy[cur.second].index] + w)
			{
				dist[vc_copy[v].index] = dist[vc_copy[cur.second].index] + w;
				path[vc_copy[v].index] = cur.second;
				pq.push({ dist[vc_copy[v].index],v});
			}
			p = p->outlink;
			// 松驰更新周围
		}
	}
	// 打印最短路径

	for (int i = 0;i < G.nodes.size();i++) {
		if (G.nodes[i].data != -1) {
			cout << u << "~" << i << ": ";

			int root = path[vc_copy[i].index];

			if (root == -1) {
				cout << '\n';
				continue;
			}
			// 输出终点
			cout << vc_copy[i].index << "<-";
			while (path[root] != -1) {
				cout << root << "<-";
				root = path[root];
			}
			// 输出出发点
			cout << root;

			cout << "  最短路径: " << dist[vc_copy[i].index] << '\n';

		}

	}
}

// Floyd求取任意两点的最短路径
void Floyd() {

}

// 空间复杂度O(|E|+|V|)
int main() {
	olGraph G;

	CreateGraph(G);

	int a, b,num;
	// 把所有new去掉
	while (1) {

		vector<index_node>vc_copy(G.nodes.size());
		int count = 0;
		// 建立映射数组
		for (int i = 0;i < G.nodes.size();i++) {
			if (G.nodes[i].data != -1) {
				index_node n;
				n.index = count;
				vc_copy[i] = n;
				count++;
			}
		}
		vector<bool>visited(count);


		cout << "--------------------------------\n";
		cout << "1.打印图信息\n";
		cout << "2.删除顶点x\n";
		cout << "3.插入顶点x\n";
		cout << "4.添加边\n";
		cout << "5.删除边\n";
		cout << "6.返回顶点x的第一个邻接点\n";
		cout << "7.返回x的除了y的下一个出边邻接点\n";
		cout << "8.返回x的除了y的下一个入边邻接点\n";
		cout << "9.输出与x邻接的点\n";
		cout << "10.判断边(x,y)是否存在\n";
		cout << "11.获取<x,y>的权值\n";
		cout << "12.更新<x,y>的权值\n";
		//cout << "13.bfs遍历连通分量v\n";   // 不是任意两两4互通
		cout << "13.bfs遍历图\n";
		//cout << "15.dfs遍历连通分量\n";
		cout << "14.dfs遍历图\n";
		cout << "15.Dijkstra求有向图的最小带权路径:\n";
		cout << "请输入(1-15): \n";
		int num;
		cin >> num;
		int temp;
		int index = 0;
		int info;
		switch (num) {
		case 1:
			PrintInfo(G);
			break;
		case 2:
			cout << "2.输入删除下标: ";
			cin >> index;
			DeleteVertex(G, index);
			break;
		case 3:
			cout << "输入插入Vertex的data: ";
			cin >> index;
			InsertVertex(G, index);
			break;
		case 4:
			cout << "4.输入添加有向边的下标<x,y>和权值: ";
			cin >> index >> temp>>info;
			AddEdge(G, index, temp,info);
			break;
		case 5:
			cout << "5.输入删除边的下标: ";
			cin >> index >> temp;
			RemoveEdge(G, temp, index);
			break;
		case 6:
			cout << "6.输入顶点下标(返回第一个邻接点):";
			cin >> index;
			cout << "第一个出边邻接点: " <<
				FirstNeighborOut(G, index) << '\n';
			cout << "第一个入边邻接点: " <<
				FirstNeighborIn(G, index) << '\n';
			break;
		case 7:
			cout << "7.输入顶点下标和一个出边邻接点(返回后一个邻接点):";
			cin >> index >> temp;
			cout << "后一个出边邻接点: " <<
				NextNeighbor_Out(G, index, temp) << '\n';
			break;
		case 8:
			cout << "8.输入顶点下标和一个入边邻接点(返回后一个邻接点):";
			cin >> index >> temp;
			cout << "后一个入边邻接点: " <<
				NextNeighbor_In(G, index, temp) << '\n';
			break;
		case 9:
			cout << "9.输入结点x:(返回邻接点)";
			cin >> index;
			Neighbors(G, index);
			break;
		case 10:
			cout << "10.输入判定边<tail-->head>: ";
			cin >> index >> temp;
			Adjacent(G, index, temp) == 0 ? cout << "不存在" :
				cout << "存在";
			cout << '\n';
			break;
		case 11:
			cout << "11.输入获取有向边的权值: ";
			cin >> index>>temp;
			cout<<get_edge_value(G, temp, index)<<'\n';
			break;
		case 12:
			cout << "12.输入获取有向边的两端下标: ";
			cin >> index >> temp>>info;
			cout<<set_edge_value(G, temp, index,info)<<'\n';
			break;
		case 13:
			bfsTraverse(G,visited, vc_copy);
			cout << '\n';
			break;
		case 14:
			dfsTraverse(G, visited, vc_copy);
			cout << '\n';
			break;
		case 15:
		{
			// 默认是连通图
			cout << "17.请输入中心点v: ";
			cin >> index;
			//vector<int>path(G.vernum);
			//// C++自动优化移动拷贝
			//vector<int> dist = BFS_MIN_Distance(G, index, visited, vc_copy, path);
			//
			// 输出各个路径 找到祖先为止
			Dijkstra_Min_Distance(G, index, visited, vc_copy);
			break;
		}

		}
	}
	
}
*/