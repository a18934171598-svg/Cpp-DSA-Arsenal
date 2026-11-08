//#include<iostream>
//#include<unordered_map>
//#include<unordered_set>
//
//
//
//using namespace std;
//
//struct node {
//	int x; // 默认是public
//	int y;
//
//	bool operator==(const node& other) const { // 成员函数的const在参数列表之后
//		return other.x == x && other.y == y;
//	}
//
//	// 哈希函数
//};
//
//namespace std {
//	template<> struct hash<node> {
//		size_t operator()(const node& p)const {
//			return hash<int>()(p.x) ^ (hash<int>()(p.y) << 1);
//		}
//	};
//
//}
//
//int main() {
//	unordered_set<int> s;
//
//	s.insert(1);
//	s.insert(1);
//	s.insert(2);
//
//	s.count(1);  // 存在返回1,不存在返回0
//	s.erase(1);
//	s.erase(1);
//
//	// 范围for循环
//	for (auto x : s) {
//		cout << x;
//	}
//
//}