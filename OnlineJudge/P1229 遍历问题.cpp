//#include<iostream>
//using namespace std;
//// 先后序列不能保证一定能给出唯一的树 默认不出现重复值
//// 算出有多少种可能
//int howmuch(int fab) {
//	fab--;
//	if (fab == -1) return 0;
//	int a = 1;
//	while (fab--) {
//		a <<= 1;
//	}
//	return a;
//}
//
//int processing(string pre_s,string post_s) {
//	if (post_s.size() == 1) {
//		if (post_s != pre_s)
//			return 0;
//		return 1;
//	}
//		
//	int num = 0;
//	// 一直爬
//	int index_pre = 0, index_post = post_s.size() - 1;
//	// 至少是3起步 bc cb
//	while (index_post >= 0&&pre_s[index_pre]==post_s[index_post]) {
//		index_pre++;
//		index_post--;
//		num++;
//	}// 全是呢 根本就没有后代了
//	// 如果一个都没有呢
//	if (num == 0)
//		return 0;  // 说明矛盾
//	if (index_post == -1)
//		return howmuch(num);
//	// 接着跑 找到相同之处 到尽头了呢
//
//	while (index_post--) {
//		if (post_s[index_post] == pre_s[index_pre])
//			break;
//	}
//	int right_size = post_s.size() - index_post-1-num;
//	if (right_size == 0) return 0;
//	// 找到之后 abc bca
//	int left = processing(pre_s.substr(num,index_post+1), post_s.substr(0, index_post + 1));  // 左子树
//	int right = processing(pre_s.substr(index_post+1+num),post_s.substr(index_post+1, right_size)); // 右子树
//	return howmuch(num) * left * right;
//
//	
//	
//}
//
//int main() {
//	// 给出前序 后序 求中序遍历的数量 
//	// 有多少棵树
//	string pre_s,post_s;
//	cin >> pre_s>> post_s;
//
//	cout<<processing(pre_s,post_s);
//}
