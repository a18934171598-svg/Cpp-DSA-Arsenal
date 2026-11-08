//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int m, w1, w;  // 所需月数
//// 每月利息法和累加本金法是等价的(单利) 本题是利滚利
//
//// 题目意思是刚好12个月完成
//
////double get_pow(double mid,int times) {
////	return pow((1 + mid), times) - 1;
////}
//
//int check(double mid) {
//	double load = w;
//	int months = 0;
//	double interest = 0;
//
//	while (load>0) {
//		interest = load * mid;
//		load -= w1;
//		load += interest;
//		months++;
//	}
//
//	
//	return months;
//}
//
//	
//int main() {
//	cin >> w >> w1 >> m;
//	
//	double ans;
//	double l = 0.0, r = 3.000;
//	while (r - l > 1e-4) {
//		double mid = (l + r) / 2;
//		if (mid * w >w1) {
//			r = mid;
//			continue;
//		}
//		int months = check(mid);
//		
//		if (months <=m ) {
//			ans = mid;
//			l = mid;
//		}
//		else {
//			r = mid;
//		}
//
//	}
//	cout <<fixed<<setprecision(1)<<ans*100;
//	//check(0.028);
//}