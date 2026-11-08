//#include<iostream>
//#include<chrono>
//#include<thread>
//#include<mutex>
//using namespace std;
//
//timed_mutex mtx1;
//mutex mtx2;
//
//void func2() {
//	unique_lock<timed_mutex> ul1(mtx1);
//	{    // 确保拿到锁
//		lock_guard<mutex> ul2(mtx2);
//		cout << this_thread::get_id() << "持有锁三秒"<<endl;
//
//	}
//	this_thread::sleep_for(chrono::seconds(3));
//
//
//}
//
//void func1() {
//	// 用法1:默认构造自动加锁和lock_guard一样
//	//unique_lock<mutex> ul1(mtx);  // 泛型
//	//cout << this_thread::get_id() << endl;
//
//	// 同一个作用域不能一起用,要注释另一个锁
//
//	// 用法2:手动加锁  defer_lock 创建时不加锁
//	//unique_lock<mutex> ul2(mtx,defer_lock);  
//	//ul2.lock();   // 手动加锁
//
//	//cout << this_thread::get_id() << endl;
//	//ul2.unlock();
//
//	// 用法3 自动解锁
//	//unique_lock<mutex> ul2(mtx, defer_lock);
//	//ul2.lock();   // 手动加锁
//
//	//cout << this_thread::get_id() << endl;
//	////ul2.unlock();  出作用域自动解锁
//
//	// 超时等待锁
//	unique_lock<timed_mutex> ul3(mtx1,defer_lock);
//	// 等待1秒,
//	if (ul3.try_lock_for(chrono::seconds(1))) {
//		lock_guard<mutex> ul(mtx2);
//		cout << "拿到锁" << endl;
//	}
//	else {
//		lock_guard<mutex> ul(mtx2);
//		cout<<"超时等待:1秒未拿到锁"<<endl;
//	}
//
//}
//int main() {
//	thread t2(func2);
//	this_thread::sleep_for(chrono::milliseconds(500));
//	thread t1(func1);
//
//	t1.join();
//	t2.join();
//
//}