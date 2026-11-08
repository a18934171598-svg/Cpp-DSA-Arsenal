//#include <iostream>
//#include <csignal>
//using namespace std;
//
//// 1. 自定义信号处理函数：格式固定 void + 单个int参数
//void signalHandler(int sig) {
//    // sig参数接收的是触发的信号编号
//    cout << "\n>>>> 捕获到信号！信号编号 = " << sig << endl;
//    cout << ">>>> 信号名称：SIGINT (Ctrl+C)，程序不会退出，继续运行 <<<<" << endl;
//}
//
//int main() {
//    // 2. 注册信号处理函数：给SIGINT信号绑定自定义处理函数
//    signal(SIGINT, SIG_IGN);
//
//    
//    
//
//    return 0;
//}