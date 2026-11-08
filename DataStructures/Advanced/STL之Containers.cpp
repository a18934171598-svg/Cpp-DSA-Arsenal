///*
//序列容器
//关联容器
//无序容器
//*/
//#include<iostream>
//#include<vector>
//#include<list>
//#include<deque>
//#include<map>
//#include<set>
//#include<algorithm>
//#include<unordered_map>
//
//using namespace std;
//
//// 根本不用基数排序
//struct node {
//	int x, y;
//	bool operator<(const node& other) const {
//		if (x != other.x) return x < other.x;  // x相等 
//		return y < other.y;
//	}
//};
//
//int main() {
//	// 动态数组  随机访问效率高   中间插入删除O(n) 尾部插入删除效率高
//	vector<int> vec;
//	/*
//	vector的几个方法
//	push_back
//	begin
//	*/
//
//	vec.push_back(4);
//	vec.push_back(2);
//	vec.push_back(3);
//
//	// 下标访问
//	//vec[2] 
//
//		// 迭代器遍历
//	for (vector<int>::iterator it = vec.begin();it < vec.end();++it) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	// 尾部删除元素
//	//pop_back()
//
//	//empty() 
//
//	//size()
//
//	sort(vec.begin(), vec.end());
//
//	// 迭代器遍历
//	for (vector<int>::iterator it = vec.begin();it < vec.end();++it) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	// 双向链表  list  每个都有前后指针
//	// 中间删除插入效率高 不支持随机访问
//
//	list<int> lst = { 1,3,5,8 };
//
//	//auto  迭代器
//	list<int>::iterator it = lst.begin();
//
//	advance(it, 2);  // 移动迭代器到第3个元素
//	lst.insert(it, 9);
//
//	// 迭代器遍历
//	for (int num : lst) {
//		cout << num << " ";
//	}
//	cout << endl;
//
//	//deque 双端队列 
//	// 两端都能快速删除插入的动态数组 头尾部效率高O(1)
//	//中间O(n)
//
//	// push_front()
//	// push_back()
//	deque<int> dq = { 3,8,5,1 };
//
//	dq.pop_back();
//	// dq[0] 支持随机访问
//	for (auto num : dq) {
//		cout << num << " ";
//	}
//	//  2.关联容器
//	//  有序键值对容器 红黑树
//	// 不支持随机访问  键唯一 按键查找O(logn)
//
//	map<string, int> mp;
//	//  几种插入方式
//	// 方式1
//	mp["小明"] = 12;
//	// 方式2
//	mp.insert(pair<string, int>("小方", 13));
//	// 方式3
//	mp.emplace("小红", 17);
//
//	for (auto& it : mp) {  // 需要进行左值处理 如果是拷贝那么修改对原值无效
//		//
//		cout << it.first << " : " << it.second++ << endl;
//	}
//
//	// 覆盖问题
//
//	// 不覆盖已有键的值
//	pair<map<string, int>::iterator, bool> ret1 = mp.insert({ "小明", 90 });
//	if (ret1.second) {
//		cout << "插入成功";
//	}
//	else {
//		cout << "键已存在: " << ret1.first->first << endl;  // 返回的是迭代器要用->
//	}
//
//	for (auto& it : mp) {
//		cout << it.first << " " << it.second;
//	}
//	//   insert不覆盖
//
//	// [] 会覆盖
//	mp["小明"] = 99;
//	for (auto& it : mp) {
//		cout << it.first << " " << it.second << endl;
//	}
//
//	mp.emplace("小明", 98);   // emplace 不能覆盖
//	for (auto& it : mp) {
//		cout << it.first << " " << it.second << endl;
//	}
//
//	// 查找元素 返回迭代器
//	// 方式1  find
//	auto ret = mp.find("小明");    // 返回一个迭代器,没有就返回
//	if (ret == mp.end()) {
//		cout << "没找到元素" << endl;
//	}
//	else {
//		cout << "找到元素  " << ret->first << " : " << ret->second << endl;
//	}
//	// 方式2  [] 便捷但有坑
//
//	cout << mp["小方"] << endl;
//	cout << mp["小龙"] << endl;   // 自动插入{"赵六",0}
//
//	for (const auto& it : mp) {  // 加个只读
//		cout << it.first << " " << it.second << endl;
//	}
//
//
//	// 删除元素erase()
//	// 方式1 通过键删除
//	mp.erase("小龙");
//	// 方式2通过迭代器删除
//	auto ret2 = mp.find("小方");
//	if (ret != mp.end())   // 不是末尾
//	{
//		mp.erase(ret2);
//	}
//	cout << mp.size() << endl;
//
//	// 方式3 删除所有元素
//	/*mp.clear();
//	cout<<mp.size();*/
//
//	// size() empty()  at()
//	// at()安全访问 不会插入会抛出异常
//	try {
//		mp.at("小龙");
//	}
//	catch (const out_of_range& e) {
//		cout << "访问 小龙 失败：" << e.what() << endl;
//	}
//	catch (...) {
//		cout << "lall";
//	}
//
//	// 无序键值对容器 哈希表实现
//	// 优势 按键 查找 插入 删除效率极高 O(1)
//	// 无序存储,内存占用略高,哈希冲突影响性能
//
//
//
//	// set 有序唯一值容器 
//	// 不支持修改,只能删除再插入
//	// 自动按升序排序
//
//	set<int> st = { 4,6,3,2 };   // 自动排序
//	cout << "***********************set***********************" << endl;
//
//	for (auto& it:st) {
//		cout << it << " ";
//	}
//
//	}
//
//	
//
//	
