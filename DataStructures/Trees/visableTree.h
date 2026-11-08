#pragma once
#include<string>
#include<iostream>
const int NULL_NODE = INT_MIN;  // 假设取不到

typedef int ElemType;
struct TreeNode {
	ElemType val;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode(int v,TreeNode* l,TreeNode* r) :val(v),left(l),right(r){};
	TreeNode();
};

struct x_y {
	ElemType val;
	int line;
	int col;
};
struct null_pos {
	int x;
	int y;
};
std::string adjust_number(int);
int getLevel(int);
int getpos(int, int);
int getPower(int);
int getDepth(TreeNode*);
void PrinTree(TreeNode*);