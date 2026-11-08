//#include<iostream>
//#include<string>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//const int TABLE_SIZE = 10013;
//
//typedef long long ll;
//
//struct Node {
//	string key;
//	Node* next;
//}; // 拉链法
//
//struct HashTable {
//	vector<Node*>table;
//	HashTable() {
//		table.resize(TABLE_SIZE,NULL);
//	}
//};
//
//ll Hash_String(const string& s) {
//	const int BASE = 131;
//	const int MOD = 1000000007;
//	ll res = 0;
//	for (char c : s) {
//		// 哈希函数
//		res = (res * BASE + c)%MOD; 
//	}
//	return res;
//}
//
//
//bool insert(HashTable&ht,const string&key) {
//	int index = Hash_String(key)%TABLE_SIZE;
//	Node* p = ht.table[index];
//
//	// 判断有没有重复
//
//	while (p) {
//		if (p->key == key) return false;
//		p = p->next;
//	}
//
//	// 头插法 新节点
//	Node* n = new Node;
//
//	n->key = key;
//	n->next = ht.table[index];
//	ht.table[index] = n;
//
//	return true;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n;
//	cin >> n;
//	/*HashTable ht;
//	
//	int ans = 0;
//
//	for (int i = 1;i <= n;i++) {
//		string s;
//		cin >> s;
//		if (insert(ht, s)) ans++;
//	}
//
//	cout << ans;*/
//	unordered_set<string>u_set;
//	for (int i = 1;i <= n;i++) {
//		string s;
//		cin >> s;
//		u_set.insert(s);
//	}
//
//	cout << u_set.size();
//}