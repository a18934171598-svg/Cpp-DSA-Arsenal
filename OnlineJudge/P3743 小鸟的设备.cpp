//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<iomanip>
//using namespace std;
//typedef long long ll;
//ll n, p;
//
//struct node {
//	ll a, b;
//};
//
//
//
//
//
//ll sum_ai = 0;
//
//bool rr_db(double mid, vector<node>& a) {
//	double accumulate = 0.0;
//	double mid_p = p * mid;
//	for (int i = 0;i < a.size();i++) {
//		double T_con = mid * a[i].a;
//		if (T_con > a[i].b)
//		{
//			accumulate += T_con - a[i].b;
//			if (accumulate > p * mid) return 0;
//		}
//	}
//	return 1;
//}
//
//double find_answer(double left, double right, vector<node>& a) {
//	double ans;
//	while ((right-left)>1e-4) {
//		double mid = (left + right) /2;
//		bool res = rr_db(mid, a);
//		if (res == true) {
//			// hold的住
//			ans = mid;
//			left = mid;
//		}
//		else {
//			right = mid;
//		}
//	}
//	return ans;
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cin >> n >> p; // p充能速率
//	vector<node> vc(n);
//	long long max = 2.5e9;
//	for (ll i = 0;i < n;i++) {
//		cin>>vc[i].a>>vc[i].b;
//		sum_ai += vc[i].a;
//		//sum_bi += vc[i].b;
//	}
//
//	// 共同撑过T
//
//	if (sum_ai <= p) { 
//		cout << -1; 
//		return 0;
//	}
//
//	cout<<fixed<<setprecision(15)<<
//		find_answer(0,max,vc);
//	// 10000个检测
//
//}