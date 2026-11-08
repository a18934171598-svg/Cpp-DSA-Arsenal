//#include<iostream>
//using namespace std;
//
//class Box
//{
//public:
//	static int objectCount;  // 静态成员变量
//	// 构造函数定义
//	Box(double l=2.0,double b=2.0,double h =2.0) {
//		cout << "Constructor called." << endl;
//		length = l;
//		breadth = b;
//		height = h;
//		objectCount++;
//	}
//	Box(const Box& box) {  // 拷贝构造函数
//		cout << "Constructor called." << endl;
//		length = box.length;
//		breadth = box.breadth;
//		height = box.height;
//		objectCount++;
//	}
//	double Volume() {
//		return length * breadth * height;
//	}
//	static int getCount() {
//		return objectCount;
//	}
//private:
//	double length;
//	double breadth;
//	double height;
//};
//
//// 没理它的话会在第一个时初始化为0
//// 不能在类里初始化
//
//// 静态成员函数 : 没有this指针,只能访问静态成员
//
//int Box::objectCount = 0;
//int main(){
//	Box box1(3.9, 2, 1);
//	Box box2(box1);
//	cout<<"体积是 "<<box2.Volume()<<endl;
//
//	cout << "总共有" << Box::objectCount << "个盒子";
//}