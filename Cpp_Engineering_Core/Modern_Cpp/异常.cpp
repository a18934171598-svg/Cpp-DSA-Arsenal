////try {
////	// 保护代码
////}
////catch ()
////{
////	// catch 块
////}
////catch (...) {
////	// catch 块
////}
//#include <iostream>
//#include<stdexcept>// 必须包含：std::exception的头文件
//#include <string>    // 可选：用来拼接错误信息
//using namespace std;
//class MyException :public exception {
//private: int error_code;
//	   string error_msg;
//public:
//	// 构造函数
//	MyException(int code, const string& msg) :error_code(code), error_msg(msg) {};
//
//	const char* what() const noexcept override {
//		static string full_msg;
//		full_msg = "[" + to_string(error_code) + "]" + error_msg;
//		return full_msg.c_str();   // string转c_string
//	}
//	int getErrorcode() const  {  // 后面的const什么意思
//		return error_code;
//	}
//};
//// 写工程代码框满各种异常,这样不用慢慢调整了, 在存疑问的地方
//int main() {
//	try {
//		int a = 0;
//		if (a == 0)
//			throw MyException(10086,"孙珊珊fuck you!");
//	}
//	catch (const MyException& e) {
//		cout << "捕获自定义异常：" << endl;
//		// 调用重写的what()：获取错误信息（const char*）
//		cout << "错误信息：" << e.what() << endl;
//		// 调用自定义方法：获取错误码
//		cout << "错误码：" << e.getErrorcode() << endl;
//	}
//}
//
//try {
	//	// 有些不是手动throw的,是系统自己的,空指针等
	//}
	//catch(const exception& e){

	//}
	//catch (...) {

	//}
	//