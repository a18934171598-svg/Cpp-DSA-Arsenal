//#include<iostream>
//using namespace std;
//
//class Time {
//private:
//	int hours;
//	int minutes;
//public:
//	// 所需的构造函数
//	Time() {
//		hours = 0;
//		minutes = 0;
//	}
//	Time(int h, int m) {
//		hours = h;
//		minutes = m;
//	}
//	void displayTime() {
//		cout << "H: " << hours << "M:" << minutes << endl;
//	}
//	// 开始重载
//	Time& operator++() {
//		++minutes;
//		if (minutes >= 60) {
//			hours++;
//			minutes -= 60;
//		}
//		return *this;
//	}
//	// 重载后缀运算符++  // 有个说法是要使用引用
//	//Time operator++(int) {
//	//	// 保存原始值
//	//	Time T(hours, minutes);
//	//	++minutes;
//	//	if (minutes >= 60) {
//	//		++hours;
//	//		minutes -= 60;
//	//	}
//	//	// 返回旧的原始值
//	//	return T;
//	//}
//};
//
//int main() {
//	Time t1(0,0);
//	//++(++t1);  // 拷贝初始
//	
//	(++(++t1)).displayTime();
//	t1.displayTime();
//}