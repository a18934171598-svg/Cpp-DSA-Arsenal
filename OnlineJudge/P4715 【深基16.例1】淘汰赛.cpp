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
////node calculate(int i) {
////	
////	if (i == 1)
////	{
////		node a, b;
////		cin >> a.val >> b.val;
////		a.index = count1++;
////		b.index = count1++;
////		if (i == n)
////			return a.val > b.val ? b : a;
////		else
////		return a.val > b.val ? a : b;  // 要求输出编号
////	}
////	node a = calculate(i - 1);
////	node b = calculate(i - 1);
////	if (i == n)
////		return a.val > b.val ? b : a;
////	else
////	return a.val > b.val ? a : b;
////}
//
//// 解法2
//node calculate1(int i) {
//
//	if (i == 1)
//	{
//		node a, b;
//		cin >> a.val >> b.val;
//		a.index = count1++;
//		b.index = count1++;
//		return a.val > b.val ? a : b;  // 要求输出编号
//	}
//	node a = calculate1(i - 1);
//	node b = calculate1(i - 1);
//	
//	return a.val > b.val ? a : b;
//}
//// 写两个函数就可以
//int calculate_two(int i) {
//	int a, b;
//	cin >> a>>b;
//	return a > b ? 2 : 1;
//}
//int main() {
//	cin >> n;  // 输入n 有2^n个国家
//	// 2^n个国家参赛
//	// 输入能力值
//	// n 如果很大呢 根本吃不消 空间直接炸 
//
//	if (n == 1)
//	{
//		cout << calculate_two(1);
//		return 0;
//	}
//	
//	node a = calculate1(n-1);
//	node b = calculate1(n-1);
//	cout << (a.val > b.val ? b.index : a.index);
//	
//}