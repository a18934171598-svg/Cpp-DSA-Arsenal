//#include<iostream>
//#include<thread>
//#include<mutex>
//using namespace std;
//int num = 0;
//
//mutex m1;
//void addNum() {
//	for (int i = 0;i < 10000;i++) {
//		//m1.lock();
//		lock_guard<mutex> l(m1);  // 智能锁 原子操作 线程池 异步任务
//		num++;
//		//m1.unlock();
//	}
//}
//
//int main() {
//	thread t1(addNum);
//	thread t2(addNum);
//
//	t1.join();
//	t2.join();
//
//	cout << num;
//
//}