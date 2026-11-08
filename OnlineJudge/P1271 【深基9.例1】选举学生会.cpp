//#include<iostream>
//#include<vector>
//using namespace std;
//
//int Partition(vector<short>& a, int low, int high) {
//	int pivot = a[low]; // 待填充
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
//void QuickSort(vector<short>& vc_m, int low, int high) {
//	// 递归
//	if (low < high)
//	{
//		int pos = Partition(vc_m, low, high);
//		QuickSort(vc_m, low, pos - 1);
//		QuickSort(vc_m, pos + 1, high);
//	}
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	
//	vector<short> vc_m;
//	vc_m.reserve(m);
//	for (int i = 0;i < m;i++) {
//		short ai;
//		cin >> ai;
//		vc_m.push_back(ai);
//	}
//	
//	QuickSort(vc_m,0,m-1);
//
//	for (int i = 0;i <m ;i++) {
//		cout << vc_m[i]<<" ";   //O(m)
//	}
//	
//}
