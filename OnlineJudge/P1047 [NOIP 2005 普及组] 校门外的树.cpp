//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//struct Zone {
//	int init;
//	int end;
//};
//int main() {
//	int l, m;
//	vector<Zone> v_zone;
//	cin >> l >> m;
//	set<int> s;
//	for (int i = 0;i <= l;i++) {
//		s.insert(i);
//	}
//	for (int i = 0;i < m;i++) {
//		int u, v;
//		cin >> u >> v;
//		static Zone z;
//		z.init = u;
//		z.end = v;
//		v_zone.push_back(z);
//	}
//	for (int i = 0;i < m;i++) {
//		for (int j = v_zone[i].init;j <= v_zone[i].end;j++) {
//			s.erase(j);
//		}
//		
//	}
//	cout << s.size();
// }