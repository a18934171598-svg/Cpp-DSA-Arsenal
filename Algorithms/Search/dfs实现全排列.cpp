//#include<iostream>
//#include<vector>
//using namespace std;
//
//int a[] = { 1,2,3 };
//int n = 3;
//vector<int> path;
//bool vis[10];
//
//void dfs() {
//    // 结束条件：选够 n 个数
//    if (path.size() == n) {
//        for (int x : path) cout << x << " ";
//        cout << endl;
//        return;
//    }
//
//    // 枚举每一个数
//    for (int i = 0; i < n; i++) {
//        if (!vis[i]) {
//            vis[i] = 1;    
//            path.push_back(a[i]);
//            dfs();         
//            path.pop_back(); 
//            vis[i] = 0;   
//        }
//    }
//}
//
//int main() {
//    dfs();
//    return 0;
//}