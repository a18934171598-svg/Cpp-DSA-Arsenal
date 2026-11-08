//#include<string>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//const int TABLE_SIZE = 9113;
//
//struct Node {
//	int key;
//	Node* next;
//	Node(int k):key(k),next(NULL){}
//};
//
//struct HashTable {
//	vector<Node*>table;
//	HashTable() {
//		table.resize(TABLE_SIZE,NULL);
//	}
//};
//
//typedef long long ll;
//
//
//inline int HashMod(int key){
//	return (key%TABLE_SIZE+TABLE_SIZE) % TABLE_SIZE;
//}
//
//const ll BASE = 131;
//const ll MOD = 1000000007;
//
//// 乘法哈希 自带均匀分布
//inline int hash_Mul(int key,int tableSize=1024) {
//
//	const double A = (sqrt(5.0)-1)/2.0;
//	double res = fmod(1LL*key*A,1.0);
//	return (int)(res*tableSize);
//}
//
//
//inline ll hash_String(const std::string& s)
//{
//	ll res = 0;
//	for (char c : s) {
//		res = (res * BASE + c) % MOD;
//	}
//	return res;
//}
//
//// 全域通用哈希
//inline int hash_LCG(int key) { 
//	const ll a = ;
//	const ll b = 12345;
//	const ll mod = 1LL << 31;
//	return (a * key + b) % mod;
//}
//
//
//int main() {
//
//
//}