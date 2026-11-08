//#include<iostream>
//using namespace std;
//class safearay {
//private:
//	int arr[10];
//public:
//	safearay() {  // 构造函数
//		int i;
//		for (i = 0;i < 10;i++) {
//			arr[i] = i;
//		}
//
//	}
//	int& operator[](int i) {
//		if(i >= 10) {
//			cout << "索引超过最大值" << endl;
//			return arr[0];
//		}
//		return arr[i];
//	}
//};
//
//int main() {
//	safearay a;
//	cout << a[2];
//	cout << a[10];
//}