//#include<iostream>
//#include<set>
//#include<vector>
//using namespace std;
//
//// 左右对撞双指针
//
//// 去重的两数之和 (答案不重复) 三数之和 四数之和
//void fun1(vector<int>& a, int target, int n) {
//    int l = 0, r = n - 1;
//    vector<pair<int, int>>res;
//    while (l < r) {
//        int sum = a[l] + a[r];
//        if (sum == target) {
//            // 存入一组答案
//            res.push_back({a[l],a[r]});
//
//            // 【去重核心】跳过左侧所有重复
//            while (l < r && a[l] == a[l + 1]) l++;
//            // 跳过右侧所有重复
//            while (l < r && a[r] == a[r - 1]) r--;
//
//            // 正常收缩
//            l++;
//            r--;
//        }
//        else if (sum < target) {
//            l++;
//        }
//        else {
//            r--;
//        }
//    }
//}
//
//// 不去重的两数之和(答案重复)  
//void fun1_(vector<int>&a,int target,int n) {
//    int l = 0, r = n - 1;
//
//    while (l < r) {
//        int sum = a[l] + a[r];
//        if (sum == target) {
//            // 记下左右坐标,向前走
//            l++;
//            r--;
//        }
//        else if (sum<target) { // 小了
//            l++;
//        }
//        else { // 大了
//            r--;
//        }
//    }
//}
//
//// 子数组、子串、最长无重复、和大于等于 target
//// 滑动窗口双指针
//
//void fun2(int n) {
//    int l = 0;
//    for (int r = 0; r < n; r++)
//    {
//        // 右指针加入窗口
//        //while (窗口不合法)
//        //{
//        //    // 左指针移出窗口
//        //    l++;
//        //}
//        // 此时 [l,r] 是合法窗口，更新答案
//    }
//}
//
//// 同向双指针
//// 去重
//
//void fun_(int n,int a[]) {
//    int j = 1;
//
//    for (int i = 1;i < n;i++) {
//        while (a[i] != a[j - 1]) {
//            a[j] = a[i]; // 保留自己 j代表预留位置 
//            j++;
//        }
//
//    }
//    // [0,j-1] 是去重后的元素 ,是预留位置
//}
//
//// 筛选 
//
//void f(int n,int *a) {
//    int j = 0;
//    for (int i = 0; i < n; i++)
//    {
//        // 满足条件就留下
//        if (a[i] % 2 == 0)
//        {
//            a[j] = a[i];
//            j++;
//        }
//    }
//    // [0,j-1] 是满足的
//}
//
//// 合并 两个有序数组
//
//void fun_(int*a,int*b,int *c,int n,int m) {
//    int i, j, k;
//    while (i < n&&j<m) {
//        if (a[i] < b[j]) {
//            c[k] = a[i];
//            i++;
//            k++;
//        }
//        else {
//            c[k++] = b[j];
//            j++;
//        }
//
//    }
//
//
//    // 剩下的
//    while (i < n) c[k++] = a[i++];
//    while (j < n) c[k++] = b[j++];
//}
//
//
//int main() {
//
//
//
//}