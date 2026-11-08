#include<iostream>
using namespace std;

void target(int& val) {
	cout << "接受左值"<<endl;
}
void target(int&& val) {
	cout << "接受右值"<<endl;
}
template<typename T>
void forward_fun(T&& val) {
	target(forward<T>(val));  //forward还原左右值属性 调用的时候
}

int main() {
	// 左值引用绑定左值 T&

	int a = 10;
	int& ref_a = a;
	ref_a = 20;

	cout << "a = " << a;

	const int& ref = 30;  // 普通左值引用不能绑定右值 const左值可以绑定右值

	cout << "ref " << ref << endl;

	// 右值引用绑定右值 T&&
	int&& r_r = 40;
	cout <<"r_r = " << r_r<<endl;

	r_r = 50; 
	cout << "r_r = " << r_r << endl;

	int b = 10;
	//int&& r_b = b;  // 无法将右值引用绑定到左值

	r_r = 40;
	cout << "r_r = "<<r_r<<endl; 
	
	int&& r_b = move(b);  // 强制把左值改为右值

	r_b = 70;

	cout << "b = " << b<<endl;

	// 模板函数的使用
	// 万能引用 实现完美转发
	// T&& val = 左值 就 相当于& 
	// T&& val = 右值 就相当于&&
	//  forward<T>()    

	forward_fun(a); //左值
	forward_fun(30);  //右值

	// 自动推断
	auto&& ref1 = 100;  // 绑定右值  推断为int&&
	auto&& ref2 = a;   //绑定左值  推断为int &
}