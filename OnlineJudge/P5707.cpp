//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main() {
//
//	int s, v;
//	cin >> s >> v;
//
//	int minutes = ceil((double)s / v)+10;
//
//	// 如果超过8小时就要反向轮回 8*60 = 480
//
//	// 怎么轮回
//	// -8) %24 
//
//	//  24*60 = 1...
//	int m, h,res;
//	if (minutes > 480) {
//		res = (24 * 60) - ((minutes - 480) % (24 * 60));
//		
//	}
//	else {
//		res = 480 - minutes;
//	}
//	
//	m = res % 60;  
//	h = res / 60;
//	string Zero = "0";
//	if (h < 10) { cout << Zero ; }
//	cout<< h << ":";
//	if (m < 10) {
//		cout << Zero;
//	}
//	cout << m;
//
//
//	
//
//
//}