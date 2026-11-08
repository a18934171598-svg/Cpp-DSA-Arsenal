//#include <iostream>
//using namespace std;
//
//
//class Time {
//private:
//    int hours;
//    int minutes;
//public:
//    Time(int h = 0, int m = 0) : hours(h), minutes(m) {
//        cout << "Time构造：H=" << h << ", M=" << m << endl;
//    }
//    ~Time() {
//        cout << "Time析构：释放Time对象内存" << endl;
//    }
//    void showTime() {
//        cout << "当前时间：H:" << hours << " M:" << minutes << endl;
//    }
//    void addMin(int m) {
//        minutes += m;
//        if (minutes >= 60) { hours += minutes / 60; minutes %= 60; }
//    }
//};
//
//
//class TimePtr {
//private:
//    Time* p; 
//public:
//   
//    TimePtr(Time* ptr = nullptr) : p(ptr) {}
//
//    
//    ~TimePtr() {
//        if (p != nullptr) {
//            delete p;
//            p = nullptr;  // 最好这样
//            cout << "TimePtr析构：自动释放了原生指针的堆内存" << endl;
//        }
//    }
//
//    
//    Time* operator->() {
//        return this->p; 
//    }
//
//   
//    Time& operator*() {
//        return *(this->p);
//    }
//};
//
//
//int main() {
//   
//    TimePtr t_ptr(new Time(10, 20));
//
//  
//    t_ptr->showTime();
//    t_ptr->addMin(50);
//    t_ptr->showTime();
//
//   
//    (*t_ptr).showTime();
//
//    return 0;
//}