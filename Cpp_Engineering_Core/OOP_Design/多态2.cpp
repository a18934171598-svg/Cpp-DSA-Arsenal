//#include<iostream>
//using namespace std;
//class Shape {
//public:
//	virtual int area() = 0;
//};
//
//class Rectangle :public Shape {
//private:
//	int width, height;
//public:
//	Rectangle(int w,int h):width(w),height(h){}
//	int area() override {
//		return width * height;
//	}
//};
//
//int main() {
//	Shape* shape = new Rectangle(10, 5);
//	cout << "Rectangle Area: " << shape->area() << endl;
//
//	delete shape;
//
//}