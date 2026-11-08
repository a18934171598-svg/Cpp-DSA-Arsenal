//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct apple {
//	int high, energy;
//};
//
//bool cmp(const apple& a, const apple& b) {
//	return a.energy < b.energy;
//}
//
//int main() {
//
//	int n, s,a,b;
//	cin >> n >> s >> a >> b;
//
//	int hand_chair = a + b;
//
//	vector<apple> tree;
//
//	for (int i = 0;i < n;i++) {
//		int high, energy;
//		cin >> high >> energy;
//		if (high <= hand_chair) {
//			apple app;
//			app.high = high;
//			app.energy = energy;
//			tree.push_back(app);
//		}
//	}
//
//	// ÅÅ³ýµô¹»²»×ÅµÄ
//
//	sort(tree.begin(), tree.end(), cmp);
//	int count=0;
//	for (int i = 0;i < tree.size();i++) {
//		if (tree[i].energy <= s) {
//			s -= tree[i].energy;
//			count++;
//		}
//	}
//
//
//	cout << count;
//}