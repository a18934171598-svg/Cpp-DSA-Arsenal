//#include<iostream>
//#include<deque>
//using namespace std;
//
//int main() {
//	int n;
//	deque<int> que;
//	cin >> n;
//	que.push_front(n);
//	while(n!=1){
//		if (n & 1) {  // 奇数
//			n = n * 3 + 1;
//		}//    有个异或判断更快
//		else {
//			n = n / 2;
//		}
//		que.push_front(n);
//	}
//	for (auto&& it = que.begin();it < que.end();it++) {
//		cout << *it << " ";
//	}
//	
//}