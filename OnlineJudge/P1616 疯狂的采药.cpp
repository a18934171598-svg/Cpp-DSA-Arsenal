//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//
//struct medicine{
//	long long val;
//	long long time;
//};
//
//int main() {
//	long long t, m;
//	cin >> t >> m;
//	vector<medicine> vc_medicine(m);
//
//	for (long long i = 0;i < m;i++) {
//		cin >> vc_medicine[i].time >> vc_medicine[i].val;
//	}
//
//	vector<long long> vc(t+1);
//
//	for (long long i = 0;i < m;i++) {
//
//		for (long long j = vc_medicine[i].time;j<=t;j++) {
//			vc[j] = max(vc[j],vc[j-vc_medicine[i].time]+
//				vc_medicine[i].val);
//		}
//	}
//
//
//	cout << vc[t];
//}