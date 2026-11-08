#pragma once
#include<iostream>
#include<stack>
#include<queue>
#include<string>  //
using namespace std;
const int NULL_NODE = INT_MIN;  // 假设取不到

typedef int Elemtype;  // 21亿
typedef short S_Elemtype;
struct AVLNode {
	S_Elemtype height;
	Elemtype data;
	AVLNode* lchild;
	AVLNode* rchild;
	AVLNode(Elemtype key, AVLNode* a1, AVLNode* a2, Elemtype h) :data(key), lchild(a1), rchild(a2), height(h) {}
};

struct x_y {
	Elemtype data;
	int line;
	int col;
};
struct null_pos {
	int x;
	int y;
};

int getTreeDepth(AVLNode*);
void processing(stack<AVLNode*>&, AVLNode*&, Elemtype);
void updateHeight(AVLNode*);
int getHeight(AVLNode*);
int insert_bt(AVLNode*&, Elemtype);
AVLNode* LastNode(AVLNode*&);
int getTreeDepth(AVLNode*);
int delete_Node(AVLNode*&, Elemtype);
AVLNode* balance_search_tree(AVLNode*, Elemtype);
void verification(AVLNode*&);


string adjust_number(int);
int getLevel(int);
int getpos(int, int);
int getPower(int);
int getDepth(AVLNode*);
void PrinTree(AVLNode*);