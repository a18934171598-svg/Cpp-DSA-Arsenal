//#include<iostream>
//#include<condition_variable>
//#include<queue>
//#include<mutex>
//#include<thread>
//#include<chrono>
//#include<string>
//
//using namespace std;
//
//queue<int> taskQueue;
//const int MAX_QUEUE_SIZE = 5;
//mutex mtx;
//
//// 【优化1】将一个 cv 拆分为两个明确定义的 cv
//condition_variable cv_not_empty; // 消费者等待的条件：队列不为空
//condition_variable cv_not_full;  // 生产者等待的条件：队列没满
//
//mutex cout_mtx;
//
//// 【优化3】封装线程安全的打印函数，使核心业务代码更整洁
//void safe_print(const string& msg) {
//    lock_guard<mutex> lock(cout_mtx);
//    cout << msg << endl;
//}
//
//void producer() {
//    for (int i = 0; i < 10; i++) {
//        safe_print("开始生产...");
//        this_thread::sleep_for(chrono::milliseconds(1000));
//        safe_print("生产完毕...");
//
//        {
//            unique_lock<mutex> ul(mtx);
//            // 等待直到队列不满
//            cv_not_full.wait(ul, []() { return taskQueue.size() < MAX_QUEUE_SIZE; });
//
//            taskQueue.push(i);
//
//            // 终端输出不建议放在核心队列锁里，但为了获取精准的 size()，这里勉强可以接受
//            {
//                lock_guard<mutex> cout_ul(cout_mtx);
//                cout << "[生产者] 生产数据 " << i << " ,队列大小 " << taskQueue.size() << endl;
//            }
//
//            // 【优化2】手动提前解锁，然后再唤醒，避免消费者醒来后撞锁
//            ul.unlock();
//            cv_not_empty.notify_one(); // 通知消费者：有数据啦！
//        }
//    }
//}
//
//void consumer() {
//    while (true) {
//        int data;
//        {
//            unique_lock<mutex> ul(mtx);
//
//            // 等待直到队列不为空
//            cv_not_empty.wait(ul, []() { return !taskQueue.empty(); });
//
//            data = taskQueue.front();
//            taskQueue.pop();
//
//            {
//                lock_guard<mutex> cout_ul(cout_mtx);
//                cout << "[消费者] 消费数据 " << data << " ,队列大小 " << taskQueue.size() << endl;
//            }
//
//            // 【优化2】手动提前解锁，再通知生产者
//            ul.unlock();
//            cv_not_full.notify_one(); // 通知生产者：有空位啦！
//        }
//
//        safe_print("消费开始...");
//        this_thread::sleep_for(chrono::milliseconds(3000));
//        safe_print("消费结束...");
//
//        if (data == 9) break;
//    }
//}
//
//int main() {
//    thread proThread(producer);
//    thread ConsThread(consumer);
//
//    proThread.join();
//    ConsThread.join();
//
//    safe_print("\n所有数据生产消费完成！");
//    return 0;
//}