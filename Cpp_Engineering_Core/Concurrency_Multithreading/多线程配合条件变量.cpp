//#include<iostream>
//#include<condition_variable>
//#include<queue>
//#include<mutex>
//#include<thread>
//#include<chrono>
//using namespace std;
//// 线程间通信
//
//// 全局共享资源:任务队列
//queue<int> taskQueue;
//const int MAX_QUEUE_SIZE = 5;  // 队列最大容量
//mutex mtx;    // 保护队列的互斥锁
//condition_variable cv;    // 条件变量 线程通信
//mutex cout_mtx;
//// 生产者函数:生产数据
//void producer() {
//	for (int i = 0;i < 10;i++) {
//		{
//			// 模拟生产耗时逻辑
//			{   // 注意lock_guard出作用域才会自动释放
//				lock_guard<mutex> cout_ul(cout_mtx);
//				cout << "开始生产..." << endl;
//			}
//			this_thread::sleep_for(chrono::milliseconds(1000));
//			{
//				lock_guard<mutex> cout_ul(cout_mtx);
//				cout << "生产完毕..." << endl;
//			}
//			unique_lock<mutex> ul(mtx);  //  和lock_guard一样的用法
//
//			cv.wait(ul, []() {return taskQueue.size() < MAX_QUEUE_SIZE;});
//
//			// 生产数据: 加入队列
//			taskQueue.push(i);
//			{
//				lock_guard<mutex> cout_ul(cout_mtx);
//				cout << "[生产者] 生产数据 " << i << " ,队列大小 " << taskQueue.size() << endl;
//			}
//		}
//			// 唤醒消费者
//			cv.notify_one();
//		
//
//		
//	}
//}
//// 消费者线程
//void consumer() {
//	while (true) {
//		int data;
//		{
//			unique_lock<mutex> ul(mtx);
//
//			// 等待条件:队列非空
//			// 第二个参数是[条件谓词], 避免虚假唤醒
//			cv.wait(ul, []() {return !taskQueue.empty();});
//
//			data = taskQueue.front();
//			taskQueue.pop();
//			{
//				lock_guard<mutex> cout_ul(cout_mtx);
//				cout << "[消费者] 消费数据 " << data << " ,队列大小 " << taskQueue.size() << endl;
//			}
//		}
//
//		cv.notify_one();
//
//			
//		
//		// 模拟消费耗时
//		{
//			lock_guard<mutex> cout_ul(cout_mtx);
//			cout << "消费开始..." << endl;
//		}
//		this_thread::sleep_for(chrono::milliseconds(3000));
//		{
//			lock_guard<mutex> cout_ul(cout_mtx);
//			cout << "消费结束..." << endl;
//		}
//
//		if (data == 9)break;
//
//	}
//}
//
//int main() {
//	thread proThread(producer);
//	thread ConsThread(consumer);
//
//	proThread.join();
//	ConsThread.join();
//
//	cout << "\n所有数据生产消费完成！" << endl;
//
//	return 0;
//
//}