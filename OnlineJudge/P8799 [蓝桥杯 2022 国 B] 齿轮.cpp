//#include<iostream>
//#include<unordered_set>
//#include<vector>
//using namespace std;
//typedef long long ll;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int n;
//	int Q;
//	cin >> n >> Q;
//	
//	unordered_set<int> u_set;
//	vector<int> vc(n);
//	vector<bool> q_answer(200001);
//
//	for (int i = 0;i < n;i++) { 
//		cin >> vc[i]; 
//		if (u_set.count(vc[i]) == 1) q_answer[1] = true;
//		u_set.insert(vc[i]);
//		
//	}
//	
//	for (int elm : u_set) {
//		for (int i = 2;i * elm <= 200000;i++) {
//			if(u_set.count(i * elm)==1) q_answer[i] = true;
//		}
//
//	}
//
//	vector<bool>answer(Q+1);
//
//	// 有cin做缓冲 先准备好,问到了才无妨
//	for (int i = 1;i <= Q;i++) {
//		int qi;
//		cin >> qi;
//		answer[i] = q_answer[qi];
//	}
//
//	for (int i = 1;i <= Q;i++) {
//		(answer[i] == true) ? cout<<"YES\n" : cout<<"NO\n";
//	}
//}