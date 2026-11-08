//#include<iostream>
//using namespace std;
//// [](int x,int y){ return x < y;}  捕获 参数列表 函数体
//int main() {
//	// 最简Lambda 
//	auto print_lam = []() {
//		cout << "最简Lambda hello Lambda "<<endl;
//		};
//	print_lam();
//
//	// 带参数列表
//	auto add = [](int a, int b) {
//		return a + b;
//		};
//	cout<<"带参数的Lambda,结果是: "<<add(3, 4)<<endl;
//
//	int x = 10;
//	// 捕获列表[] 分4种
//	// 1.值捕获
//	double y = 0;
//	//        值捕获x
//  // 值捕获默认副本是不可修改的 要加上mutable
//	auto func1 = [x]()mutable {
//		x += 2;
//		cout << "Lambda 内的x 是:" << x << endl;
//		};
//	func1();
//	cout << "Lambda 外的x 是:" << x << endl;
//
//	// 2.引用捕获 不需要加上mutable 本来就可以修改
//	auto func2 = [&x]() {
//		x += 2;
//		cout << "Lambda 内的x 是:" << x << endl;
//		};
//	func2();
//	cout << "Lambda 外的x 是:" << x << endl;
//
//	// 3.全部值捕获 [=]
//	auto func3 = [=]() {
//		cout << "x + y = " << x + y;
//		};
//
//
//	// 4.全部引用捕获
//	auto func4 = [&]() {
//
//		};
//
//  // 加个,可以部分捕获
//	auto func5 = [](int x, double y) ->double {
//		return x + y;
//		};
//
//}