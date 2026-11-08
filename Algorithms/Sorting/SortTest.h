#pragma once
#include<iostream>
#include<ctime>
#include <cstdlib>
#include<vector>
using namespace std;

// 时间复杂度 本来有序 O1 逆序 O(n^2)  适用于基本有序 链表顺序表
void InsertSort(int*, int);  // 稳定的 

// 预留a[0] 作为多轮的temp O(n^1.3) 不稳定 顺序表
void ShellSort(int* ,int); //空间O(1)

//
void swap(int&,int&);   //  空间O(1)
void BubbleSort(int*,int); // 链表顺序表 O(n^2) 稳定


// 划分越均匀,递归深度越低 O
// O(n*(递归深度)) 
// 不优化 最差O(n^2) 每次枢纽都不均匀,比如有序 
// 可以随机选择枢纽 或者是 首尾中取中间值 
int Partition(int*,int,int);   // 空间最好O(log2n)  最差O(n)
void QuickSort(int*,int,int);  // 不稳定

// 简单选择排序 链表顺序表都可以 O(1) 时间永远O(n^2)
void SelectSort(int*,int);  // 不稳定

// 只能用于顺序表银牌完全二叉树
// 递增 堆排序 O(nlog2n) 时间复杂度:建堆O(n) 排序O(nlog2n) 不稳定
void HeadAdjust(int*, int, int);
void BuildMaxHeap(int*, int);
void HeapSort(int*,int);

// 归并排序 稳定的 空间O(n)辅助数组  时间O(nlog2n)
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int n) :val(n), next(NULL) {};
	ListNode() :next(NULL) {}
};
struct LinkNode{
	int data;
	LinkNode* next;
};

struct LinkQueue{
	LinkNode* front,*rear;
	LinkQueue() :front(NULL), rear(NULL) {};
};
// 链表最佳选归并
ListNode* sortList(ListNode*);
ListNode* findMid(ListNode*);
ListNode* merge(ListNode*, ListNode*);
extern vector<int> vc_b;
void Merge(int*,int,int,int);
void MergeSort(int* a, int low, int high);

// 基数排序
//  时间O(n(d+r)) 空间创建队列的空间O(r) 稳定
LinkNode* RadixSort(LinkNode*);
void PrintLink(LinkNode*);

// 计数排序
// O(n+k)  空间O(n+k)  空间换时间  稳定
void CountSort(vector<int>&, vector<int>&, int,int);