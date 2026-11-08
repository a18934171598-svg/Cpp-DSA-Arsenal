//#include<iostream>
//#include<iomanip>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//
//
//struct node {
//	int l, r;
//};
//double a, b, c, d;
//
//void swap(double& a, double& b) {
//	double t = a;a = b;b = t;
//}
//
//double getAnswer(double i) {
//	return a* i* i* i + b * i * i + c * i + d;
//}
//
//// 判断在哪一格
//double find(node zone){
//	// 100格
//	// 二分
//	int left = 0, right = 100;
//	while (left <= right) {
//		double mid = (left + right) / 2 * 0.01;
//		// 每个格子 
//		// 如果边界是根呢
//		double l_init = left * 0.01;
//		if (fabs(getAnswer(zone.l+ l_init) * getAnswer(zone.l + mid) - 0) < 1e-9
//			||(fabs(l_init -mid))<1e-9) {
//			// 左边一定不会是
//			return zone.l + mid;  // 弹道偏左
//		}
//		if (getAnswer(zone.l+ l_init)  * getAnswer(zone.l + mid)<0) {
//			right = mid*100;
//		}
//		else {
//			left = mid*100;
//		}
//	}
//}
//
//
//int main() {
//	
//	cin >> a >> b >> c >> d;
//
//	vector<node>vc_zone;
//	vector<double> solve;
//	int init_sol = 0;
//	int init_zone = 0;
//	// ax^3+ bx^2+ cx + d =f(x) 询问ai浮点练习
//	for (int i = -100,j=-99;i < 100&&j<=100;j++,i++) {
//		
//		double left = a * i * i * i + b * i * i + c * i + d;
//		double right = a * j * j * j + b * j * j + c * j + d;
//		
//		if (fabs(left * right - 0) < 1e-9)
//		{
//			if (fabs(left - 0) < 1e-9) { 
//				solve.resize(++init_sol);
//				solve[init_sol-1] = i;
//			}
//
//		}
//
//		else if(left * right<0){
//			//  根在其间
//			vc_zone.resize(++init_zone);
//			vc_zone[init_zone-1].l = i;
//			vc_zone[init_zone-1].r = j;
//		}
//
//	}
//	// 根据区域的数量size()
//	for (int i = 0;i < vc_zone.size();i++) {
//		solve.resize(++init_sol);
//		solve[init_sol - 1] = find(vc_zone[i]);
//	}
//
//	// 按顺序输出
//
//	for (int j = 0;j < 2;j++) {
//		for (int i = 2;i > j;i--) {
//			if (solve[i] < solve[i - 1]) {
//				swap(solve[i], solve[i - 1]);
//			}
//		}
//	}
//
//	for(int i=0;i<3;i++)
//	cout << fixed<<setprecision(2)<<solve[i]<<" ";
//}