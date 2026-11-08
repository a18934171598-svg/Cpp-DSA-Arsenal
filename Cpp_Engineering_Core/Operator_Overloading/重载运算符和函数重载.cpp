//#include<iostream>
//using namespace std;
//// 函数重载 运算符重载
//class printData {
//public:
//	void print(int i) {
//		cout << "整数为: " << i << endl;
//	}
//	void print(double f) {
//		cout << "浮点数为: " << f << endl;
//	}
//	void print(char c[]) {
//		cout << "字符串为: " << c << endl;
//	}
//};
//
//class Box {
//public:
//	double getVolume() {
//		return length * breadth * height;
//	}
//	void setLength(double len) {
//		length = len;
//	}
//	void setBreadth(double bre) {
//		breadth = bre;
//	}
//	void setHeight(double hei) {
//		height = hei;
//	}
//	Box operator+(const Box& b) {
//		Box box;
//		box.length = this->length + b.length;
//		box.breadth = this->breadth + b.breadth;
//		box.height = this->height + b.height;
//		return box;
//	}
//private:
//	double length;
//	double breadth;
//	double height;
//};
//
//int main() {
//
//	printData pd;
//
//	// 输出整数
//	pd.print(5);
//
//	pd.print(3.14);
//
//	char c[] = "Hello C++";
//	pd.print(c);
//
//	// 运算符重载
//	Box box1;
//	Box box2;
//	Box box3;
//	double Volume;
//
//	box1.setBreadth(3.0);
//	box1.setLength(4.0);
//	box1.setHeight(2.0);
//
//	box2.setBreadth(3.0);
//	box2.setLength(4.0);
//	box2.setHeight(2.0);
//
//	Volume = box1.getVolume();
//	cout << "Volume of box1 is "<<Volume<<endl;
//
//	Volume = box2.getVolume();
//	cout << "Volume of box2 is " << Volume << endl;
//
//	// 是一种赋值而不是初始化拷贝
//	box3 = box1 + box2;
//
//	Volume = box3.getVolume();
//	cout << "Volume of box3 is " << Volume << endl;
//}