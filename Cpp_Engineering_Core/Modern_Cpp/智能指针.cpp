#include<iostream>
#include<memory>
using namespace std;

void processData(){
	unique_ptr<int*> ptr = make_unique<int *>(100);
	// 栈变量自动销毁
}

int main() {



}


// 底层实现智能指针 unique_ptr<> = make_unique<>(100);

template <typename T>
class MyUniquePtr {
private:
    T* ptr; // 底层仅包装一个裸指针

public:
    // 构造函数
    MyUniquePtr(T* p = nullptr) : ptr(p) {}

    // 析构函数：负责自动释放
    ~MyUniquePtr() {
        if (ptr != nullptr) {
            delete ptr;
        }
    }

    // 拷贝构造函数 = 

    // 【关键1】禁用拷贝构造和赋值操作
    MyUniquePtr(const MyUniquePtr&) = delete;
    MyUniquePtr& operator=(const MyUniquePtr&) = delete;

    // 【关键2】允许移动构造（所有权转移）
    MyUniquePtr(MyUniquePtr&& other) noexcept {
        ptr = other.ptr;      // 接管底层指针
        other.ptr = nullptr;  // 剥夺原主人的所有权
    }
};