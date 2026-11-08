//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//// 防止退化
//int Partition(vector<int>& a, int low, int high) {
//	//int pivot = a[low]; // 待填充
//	int mid = (low + high) / 2;
//
//	if (a[low] > a[mid]) swap(a[low],a[mid]); // 两个中较小的一个
//	if (a[low] > a[high]) swap(a[low],a[high]); // 
//	if (a[mid] > a[high]) swap(a[mid],a[high]); // 
//
//	// 取三者中间值
//	int pivot = a[mid];
//	// 交换一下
//	swap(a[mid],a[low]);
//
//	// 口诀:起来待填充,填充后贴向对方,被填充者起来
//	while (low < high) {
//		while (low < high && a[high] >= pivot)
//			high--; a[low] = a[high];
//		while (low < high && a[low] <= pivot)
//			low++; a[high] = a[low];
//	}
//	a[low] = pivot;  //
//	//a[high] = pivot;  也可以
//
//	return low;
//	//return high;
//}
//void QuickSort(vector<int>& vc,int low,int high) {
//	if (low < high) {
//		int pos = Partition(vc,low,high);
//		QuickSort(vc,low,pos-1);
//		QuickSort(vc,pos+1,high);
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> vc_int;
//	vc_int.reserve(n);
//
//	for (int i = 0;i < n;i++) {
//		int a;
//		cin >> a;
//		vc_int.push_back(a);
//	}
//	sort(vc_int.begin(), vc_int.end());
//	for (int i = 0;i < n;i++) {
//		cout << vc_int[i] << " ";
//	}
//}