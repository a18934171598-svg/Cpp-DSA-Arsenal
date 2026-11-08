//#include<iostream>
//#include<thread>
//#include<future>
//#include<chrono>
//
//using namespace std;
//
//int add(const int&a,const int& b) {
//	this_thread::sleep_for(chrono::seconds(1));
//	return a + b;
//}
//int main() {
//	future<int> fut = async(launch::async, add, 3, 4);
//
//	
//
//
//	cout << "异步结果执行";
//	int result = fut.get();
//
//	cout << result;
//}
