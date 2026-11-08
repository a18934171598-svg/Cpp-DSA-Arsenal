//#include<iostream>
//#include<mutex>
//#include<thread>
//#include<queue>
//#include<chrono>
//#include<functional>
//#include<atomic>
//#include<condition_variable>
//using namespace std;
//class ThreadPool {
//public:
//	// 构造函数 
//	ThreadPool(int threadNum) :isRunning(true){
//		for (int i = 0;i < threadNum;i++) {
//			workers.emplace_back([this]() {
//				while (true) {
//					function<void()> task;
//					// 加锁取任务
//					{
//						unique_lock<mutex> lu(mtx1);
//						                     // false           false
//						cv.wait(lu, [this]() { return !isRunning || tasks.empty();});
//						     // true         true
//						if (!isRunning && tasks.empty()) { cout << "线程结束\n";return; }
//						task = move(tasks.front());  // 更快所有权转移
//						tasks.pop();
//
//					}
//					task();
//				}  // while
//				});
//				
//		}
//		
//	}
//	template<typename T>
//	void addTask(T&& task) {
//		lock_guard<mutex> lg(mtx2);
//		tasks.emplace(forward<T>(task));  // 完美转发,避免拷贝
//
//		cv.notify_one();
//	}
//
//
//	~ThreadPool() {
//		cout << "即将析构\n";
//		isRunning = false;
//		cv.notify_all();  // 主程序即将结束
//		for (auto& worker : workers) {
//			worker.join();
//		}
//	}
//private:
//	// 无参返回类型
//	vector<thread> workers ;
//	queue<function<void()>> tasks;
//	mutex mtx1, mtx2;
//	atomic<bool> isRunning;
//	condition_variable cv;
//};
//
//int main(){
//	ThreadPool Pool(4);
//	for (int i = 1;i < 6;i++) {
//		Pool.addTask([&i]() {
//			this_thread::sleep_for(chrono::seconds(2));
//			});
//	}
//
//
//}