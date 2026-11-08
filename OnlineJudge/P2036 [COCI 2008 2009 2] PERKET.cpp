//#include<iostream>
//#include<vector>
//#include<climits>
//using namespace std;
//int min_abs = INT_MAX;
//
//bool vis[10] = {false};
//struct node {
//	int sour;
//	int bitter;
//};
//vector<node>ingredients;
//vector<node>path;
//int n;
//int k;
//// ×éºÏÔõÃ´Ð´
//void dfs(int init) {
//	if (init == k) {
//		int sum = 0,accumulate=1;
//		for (node& elm : path) {
//			sum += elm.bitter;
//			accumulate *= elm.sour;
//		}
//		int temp = sum-accumulate>0? 
//			(sum - accumulate ):(accumulate-sum);
//		if (min_abs > temp) min_abs = temp;
//		return;
//	}
//
//
//	for (int i = init;i < n;i++)
//	{	
//		path.push_back(ingredients[i]);
//		dfs(i+1);
//		path.pop_back();
//	}
//}
//
//int main() {
//	cin >> n;
//	ingredients.resize(n);
//
//	for (int i = 0;i < n;i++) {
//		int s, b;
//		cin >> s >> b;
//		ingredients[i].bitter=b;
//		ingredients[i].sour=s;
//	}
//	for (k = 1;k <= n;k++) {
//		dfs(0);
//	}
//	cout << min_abs;
//}
//
