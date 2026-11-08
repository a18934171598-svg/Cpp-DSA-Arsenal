//#include<iostream>
//using namespace std;
//
//class Distance
//{
//private:
//    int feet;             // 0 到无穷
//    int inches;           // 0 到 12
//public:
//    // 所需的构造函数
//    Distance() {
//        feet = 0;
//        inches = 0;
//    }
//    Distance(int f, int i) {
//        feet = f;
//        inches = i;
//    }
//    Distance& operator=(const Distance& D)
//    {
//        feet = D.feet;
//        inches = D.inches;
//        return *this;
//    }
//    // 显示距离的方法
//    void displayDistance()
//    {
//        cout << "F: " << feet << " I:" << inches << endl;
//    }
//
//};
//
//
//int main() {
//    Distance d1(2,4),d2;
//    d2 = d1;
//
//    d2.displayDistance();
//
//}