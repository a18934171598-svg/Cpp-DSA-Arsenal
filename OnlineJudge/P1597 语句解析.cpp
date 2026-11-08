//#include<iostream>
//#include<sstream>
//using namespace std;
//
//int main() {
//	string s;
//	getline(cin, s);
//	int a = 0, b=0, c=0;
//	// 输出a,b,c的值
//	// a:=1;b:=2;c:=3;
//
//	// 可以是值也可以是变量 一位数字 没写就是0
//	// 有顺序要求吗
//	// 长度不超过255
//
//	// ;前面是什么
//	// 是变量
//
//	// 一开始就是了
//	// 后面的只能用前面的
//
//	// 如果后面是一个: 跳两个
//
//
//	// 看看按顺序可以不
//	
//	// 应该是固定格式不用跳
//	// 每四个一跳
//	for (int i = 3;i < s.size();i += 5) {
//		int *t1 = NULL;
//		switch (s[i - 3]) {
//		case 'a':
//			t1 = &a;
//			break;
//		case 'b':
//			t1 = &b;
//			break;
//		case 'c':
//			t1 = &c;
//			break;
//		}
//		if (s[i] >= '0' && s[i] <= '9') {
//			//是数字
//			*t1 = (s[i] - '0');
//		}
//		else {  // 是变量
//			switch (s[i]) {
//			case 'a':
//				*t1 = a;
//				break;
//			case 'b':
//				*t1 = b;
//				break;
//			case 'c':
//				*t1 = c;
//				break;
//			}
//		}
//	}
//	cout << a << ' ' << b << ' ' << c;
//}