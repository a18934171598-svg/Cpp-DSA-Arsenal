// 1.邻接矩阵
//
//struct node{
//	int data;
//};
//
//
// 邻接矩阵的性质线性代数
// 删除边方便,改成0就好,删除顶点不方便
//struct mgraph {
//	一维数组存放节点数据
//	node nodes[10];
//	 二维数组存放图的连接情况
//	 无向图可压缩 带权图bool改为int 没有边则用∞
//	 空间复杂度o(|v|^2) 
//	 没有边就会浪费,适合稠密图(边比较多)
//	bool arc[10][10];
//	int vexnum, edgenum;
//};
//
//
// 2.邻接表法 
// 删除空间复杂度高 删除结点时,不仅要删除v 还要删除其他v对应的边
// 删除边要删除两份 十分麻烦
//
// 稀疏图
// 顺序+链式存储
// 对于有向图 空间o(|v|+|e|) 无向图 空间o(|v|+2|e|)
// 对于无向图  度 遍历链表或vector.size()即可
// 对于有向图 出度容易找到,入度需要全部遍历
//struct alcnode {
//	 int value; 边的权值
//	int index; // 所指向的顶点
//	alcnode* next;
//};
//
//struct vnode{  // 顶点
//	int data;
//	alcnode* first;  // 并不唯一可以是任意一条边
//};
//
//struct algraph {
//	vnode nodes[10];
//	int vexnum, arcnum;
//};
//
// 3.十字链表 只能存储有向图
//
//struct arcnode{
//	int arc_tail, arc_head;
//	arcnode* outnext;
//	arcnode* innext;
//	 指向出度
//	 指向入度
//	int value; // 权值
//};
//
//struct vnode{
//	int data;
//	arcnode* in; // 指向入度
//	arcnode* out;  // 指向出度
//};
//
//
// 空间复杂度o(|v|+|e|) 方便找到所有的出度和入度
//struct olgraph {
//	vnode nodes[10];
//	int vexnum, arcnum;
//};
//
//
// 4.邻接多重表 用于无向图 不唯一
// 边 依附于两个顶点的边
// 空间复杂度o(|v|+|e|)更优秀 删除方便
// 怎么删除
//
// 删除边
// 删除顶点
//struct arcnode {
//	int value; // 权值
//	int ivex, jvex; // 边的两个
//	arcnode* ilink, * jlink;
//};
//
//struct vnode
//{
//	int data;
//	arcnode* first;//指向该节点的第一条边
//};
//
//struct amlgraph{
//	vnode nodes[10];
//	int vexnum, arcnum;
//};
//
