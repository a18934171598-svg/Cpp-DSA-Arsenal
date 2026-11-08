//#include<iostream>
//using namespace std;
//
//class Distance {
//private:
//	int feet;
//	int inches;
//public:
//	// 所需的构造函数
//    Distance() {
//        feet = 0;
//        inches = 0;
//    }
//    Distance(int f, int i) {
//        feet = f;
//        inches = i;
//    }
//    // << 和 >> 要使用友元函数   一个要加const 一个不能加
//    friend ostream& operator<<(ostream& output, const Distance& D)
//    {   
//        output << "F : " << D.feet << " I :" << D.inches;
//        return output;
//    }
//
//    friend istream& operator>>(istream& input, Distance& D) {
//        input >> D.feet >> D.inches;
//        return input;
//    }
//};
//
//int main() {
//    Distance d1(2,3),d2(3,5),d3;
//
//    cout << "Enter the value of object : " << endl;
//    cin >> d3;
//
//    cout << "First Distance " << d1 << endl;
//    cout << "Second Distance :" << d2<<endl;
//    cout << "Third Distance :" << d3 << endl;
//
//}