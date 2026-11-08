//#include<iostream>
//#include<vector>
//#include<climits>
//using namespace std;
//int n;
//vector<int> a;
//vector<int> d;
//
//int times = 0;
//
//inline void processing(int start,int end) {
//	if (start > end) return;
//	// 找到这个区间内的最小值
//	
//	vector<int> vc_index;
//	int min = INT_MAX;
//	for (int i = start;i <= end;i++) {
//		if (min > a[i]) {
//			min = a[i]; 
//			vc_index.clear();
//			vc_index.push_back(i);
//			continue;
//		}
//		else if(min==a[i]) {
//			vc_index.push_back(i);
//		}
//	}
//	
//	for (int i = start;i <= end;i++) {
//		a[i] -= min;  
//	}
//
//	times += min;
//
//	d[start] -= min;
//	if(end+1<=n)
//	d[end+1] += min;
//
//	// [l,R]
//	//[start,1] [tail,end]
//	processing(start,vc_index[0]-1);
//	for (int i = 0;i < vc_index.size()-1;i++) {
//		processing(vc_index[i]+1,vc_index[i+1]-1);
//	}
//	processing(vc_index[vc_index.size()-1]+1,end);
//}
//
//int main() {
//	cin >> n;
//	a.resize(n + 1);
//	d.resize(n + 1);
//
//	for (int i = 1;i <= n;i++) {
//		cin >> a[i];
//	}
//
//	d[1] = a[1];
//
//	for (int i = 2;i <= n;i++) {
//		d[i] = a[i] - a[i - 1];
//	}
//
//	// 拿到不为0的区间 
//
//	processing(1,n);
//	cout << times;
//}