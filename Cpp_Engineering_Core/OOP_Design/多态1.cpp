//#include <iostream>
//using namespace std;
//
//// 基类 Animal
//class Animal {
//public:
//    // 虚函数 sound，为不同的动物发声提供接口
//    virtual void sound() const {
//        cout << "Animal makes a sound" << endl;
//    }
//
//    // 虚析构函数确保子类对象被正确析构
//    virtual ~Animal() {
//        cout << "Animal destroyed" << endl;
//    }
//};
//
//// 派生类 Dog，继承自 Animal
//class Dog : public Animal {
//public:
//    // 重写 sound 方法
//    void sound() const override {
//        cout << "Dog barks" << endl;
//    }
//
//    ~Dog() {
//        cout << "Dog destroyed" << endl;
//    }
//};
//
//// 派生类 Cat，继承自 Animal
//class Cat : public Animal {
//public:
//    // 重写 sound 方法
//    void sound() const override {
//        cout << "Cat meows" << endl;
//    }
//
//    ~Cat() {
//        cout << "Cat destroyed" << endl;
//    }
//};
//
//// 测试多态
//int main() {
//    Animal* animalPtr;  // 基类指针
//
//    // 创建 Dog 对象，并指向 Animal 指针
//    animalPtr = new Dog;
//    animalPtr->sound();  // 调用 Dog 的 sound 方法
//    delete animalPtr;    // 释放内存，调用 Dog 和 Animal 的析构函数
//
//    // 创建 Cat 对象，并指向 Animal 指针
//    animalPtr = new Cat();
//    animalPtr->sound();  // 调用 Cat 的 sound 方法
//    delete animalPtr;    // 释放内存，调用 Cat 和 Animal 的析构函数
//
//    return 0;
//}