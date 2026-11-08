//#include<vector>
//using namespace std;
//int binary_search(vector<int>& a,int target) {  // 会出现重复吗
//	int l = 0, r = a.size() - 1;
//	while (l <= r) {
//		int mid = (l + r) / 2;
//		if (a[mid] == target) return mid;
//
//		if (a[mid] < target) {
//			l = mid + 1;
//		}
//		if (a[mid] > target) {
//			r = mid - 1;
//		}
//	}
//
//	return -1;
//}
//
//
//// 二分答案 找范围
//// 出现重复
//int lower_bound(vector<int>&a,int target) {  // 下届查找 没有返回-1
//	int ans = -1;
//	int l = 0,r = a.size() - 1;
//	while (l<=r){
//		int mid = (l + r) / 2;
//		if (a[mid] >= target) { // 左边可能还有,先标记,继续探索
//			ans = mid;
//			r = mid - 1;
//		}
//		else {
//			l = mid + 1;
//		}
//	}
//
//	return ans;
//}
//// 寻找最后一个<=target的
//int up_bound(vector<int>& a, int target) { // 寻找上界
//	int ans = -1;
//	int l = 0, r = a.size() - 1;
//	while (l <= r) {
//		int mid = (l + r) / 2;
//		if (a[mid] <= target) { // 右边可能还有,先标记,继续探索
//			ans = mid;
//			l = mid + 1;
//		}
//		else {
//			r = mid - 1;
//		}
//	}
//
//	return ans;
//}