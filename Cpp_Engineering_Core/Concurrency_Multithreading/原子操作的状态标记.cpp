//#include<iostream>
//#include<condition_variable>
//#include<queue>
//#include<mutex>
//#include<thread>
//#include<chrono>
//#include<atomic>
//using namespace std;
//
//atomic<int> consumed_count(0);
//// 原子标记
//atomic<bool> is_produce_done(false);
//
//void add() {
//	for (int i = 0;i < 100000;i++) {
//		consumed_count.fetch_add(1);  // 不可打断的加1
//	}
//}
//
//queue<int>q;
//mutex mtx;
//atomic<bool> produce_done{false};
//
//void producer() {
//	for (int i = 0;i < 5;i++) {
//		lock_guard<mutex> ul(mtx);
//		q.push(i);
//		cout << "生产:" << i << endl;
//	}
//	produce_done.store(true);  // 原子写
//	cout << "生产者: 生产完成 ";
//}
//
//void consumer() {
//	while (true) {
//		lock_guard<mutex> ul(mtx);
//		// 原子读:判断
//		if (produce_done.load() && q.empty()) {
//			break;
//		}
//		if (!q.empty()) {
//			cout << "消费：" << q.front() << endl;
//			q.pop();
//		}
//
//	}
//}
//
//
//int main() {
//	thread t1(add);
//	thread t2(add);
//
//	t1.join();
//	t2.join();
//
//	cout << consumed_count << endl;
//}