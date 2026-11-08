//#include<iostream>
//#include<sstream>
//#include<limits>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;  // 表示n*n
//	//cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
//	// 如果不是\n是空格呢
//	// 3≤N≤200
//	string s1;
//	getline(cin, s1);
//	istringstream iss(s1);
//
//	int num, arr[200] = {0},index=0;
//	while (iss >> num) {
//		arr[index++] = num;
//	}
//	int init = 0,count=0;
//	bool isOpen = false;
//	while (init < index) {
//		while (arr[init]--) {
//			isOpen ? cout << 1 : cout << 0;
//			count++;
//			if (count == n) {
//				cout << endl;
//				count = 0;
//			}
//		}
//		isOpen = !isOpen;
//		init++;
//
//	}
//	
//
//}