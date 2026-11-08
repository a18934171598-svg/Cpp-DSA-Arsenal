//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void swap(int& a, int& b) {
//    int t = a;a = b;b = t;
//}
//// 推导太久了
//int quick_select(vector<int>&a,int k,int low,int high) {
//    if (low == high) return a[k];
//
//    int mid = (low + high)>>1;  // 有待优化 mid永远偏左
//    int pivot = a[mid];
//    int i = low-1, j = high+1;
//    
//
//    // 对称的话i==j,不对称的话 i>j
//    while (i<j) {  // 满足相等互补对称性
//        do i++; while (a[i]<pivot);  
//        do j--; while (a[j]>pivot);
//        if (i < j)  swap(a[i], a[j]);  // 换完绿灯之后两个人不相等了
//    }
//
//    //if (k == i || k == j) return a[k];
//
//    if (k <= j) return quick_select(a,k,low,j);
//    else return quick_select(a,k,j+1,high);
//
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    int n, k;
//    cin >> n >> k;
//    vector<int> a(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//
//    // 输出第 k 小（题目从 0 开始）
//    cout << quick_select(a, k, 0, n-1) << endl;
//    return 0;
//}