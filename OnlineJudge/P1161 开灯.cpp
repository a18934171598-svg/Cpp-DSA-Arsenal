//#include<iostream>
//#include<vector>
//#include<cmath>
//#include<set>
//using namespace std;
//
//int main() {
//
//	int n;
//	cin >> n;   // n次操作 开关灯
//	// ai是实数 必须是六位小数  t是整数
//	// ai*1 *2 *3...t*ai 向下取整
//
//	// 路灯无限长     
//	//  T≤2000000   
//	// t是t次按动 ti和是2000000 n<=5000 平均是400次按动
//	// 1<=ai<=4000
//	// 1,2,3,4... 灯泡编号
//	// ti*ai<=2000000  最远编号2000000  2000000Byte 200KB
//	vector<float> v_float(n);
//	vector<int> v_int(n);
//	
//	
//	set<int> s;
//	// 一通操作之后,只剩下一个开着的
//	for (int i = 0;i < n;i++) {
//		int ti;
//		float ai;
//		cin >> ai>>ti;
//		v_float.push_back(ai);
//		v_int.push_back(ti);
//		for (int j = 1;j <= ti;j++)
//		{
//			int t = int(floor(ai * j));
//			if (s.end() != s.find(t)) {
//				s.erase(t);
//				}
//			else {
//				s.insert(t);
//			}
//		}
//	}
//	for (int num : s) {
//		cout << num;
//	}
//	
//
//}