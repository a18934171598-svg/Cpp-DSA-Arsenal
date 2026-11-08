//#include<iostream>
//#include<thread>
//#include<mutex>
//#include<atomic>
//#include<chrono>
//using namespace std;
///*
//// 定义原子变量 (支持int/long/bool等基本类型)
//	atomic<int> num(0);  // 初始值为0
//
//	// 原子操作(常用)
//	num++;   //原子自增
//	num--;   // 原子自减
//	num += 5;  //原子加法
//
//	int val = num; //原子读取
//
//	num = 10;   //原子写入;
//*/
//
//int normalNum = 0;
//mutex mtx;
//void add() {
//	for (int i = 0;i < 100000000;++i) {
//		lock_guard<mutex> lg(mtx);  // 保证原子性
//		normalNum++;
//	}
//}
//// 原子变量
//atomic<int> atomicNum(0);
//void add1(){
//	// 原子操作
//	for (int i = 0;i < 100000000;i++) {
//		atomicNum++;
//	}
//}
//
//int main() {
//	//	计算耗时
//	auto start1 = chrono::high_resolution_clock::now();
//	thread t1(add);
//	thread t2(add);
//
//	t1.join();
//	t2.join();
//
//	auto end1 = chrono::high_resolution_clock::now();
//	auto dur1 = chrono::duration_cast<chrono::milliseconds>(end1 - start1).count();
//	cout << normalNum <<endl;;
//	cout << "加锁耗时: " << dur1<< " ms\n";
//
//	auto start2 = chrono::high_resolution_clock::now();
//	thread t3(add1);
//	thread t4(add1);
//
//	auto end2 = chrono::high_resolution_clock::now();
//	auto dur2 = chrono::duration_cast<chrono::milliseconds>(end2 - start2).count();
//	t3.join();
//	t4.join();
//
//	cout << atomicNum << endl;
//	cout << "不加锁耗时: " << dur2 << " ms\n";
//
//
//}