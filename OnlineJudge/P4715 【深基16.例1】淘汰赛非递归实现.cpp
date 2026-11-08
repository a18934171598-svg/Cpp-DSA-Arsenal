//#include<iostream>
//using namespace std;
//
//// 作用域的使用
//int n;
//int count1=1;   // 默认为0
//
//struct node {
//	int val;
//	int index;
//};
//// 解法一
//node calculate(int i) {
//	
//	if (i == 1)
//	{
//		node a, b;
//		cin >> a.val >> b.val;
//		a.index = count1++;
//		b.index = count1++;
//		if (i == n)
//			return a.val > b.val ? b : a;
//		else
//		return a.val > b.val ? a : b;  // 要求输出编号
//	}
//	node a = calculate(i - 1);
//	node b = calculate(i - 1);
//	if (i == n)
//		return a.val > b.val ? b : a;
//	else
//	return a.val > b.val ? a : b;
//}
//
//int main() {
//	cin >> n;  // 输入n 有2^n个国家
//	// 2^n个国家参赛
//	// 输入能力值
//	// n 如果很大呢 根本吃不消 空间直接炸 
//	//cout<<calculate(n).index;
//
//	// 解法二  各种遍历的
//	for () {
//
//	}
//}