//#include<iostream>
//using namespace std;
//
//int main() {
//	// 几位数字  0-9
//	int n;
//	cin >> n;     // 不超过100
//	//int arr[100];
//	string s;
//	cin >> s;
//	/*for (int i = 0;i < n;i++) {
//		arr[i] = s[i] - '0';
//	}*/
//	bool digital[10][5][3];
//	// false 是 X,true 是.
//	// 0
//	{
//	digital[0][0][0] = { false };
//	digital[0][0][1] = { false };
//	digital[0][0][2] = { false };
//
//	digital[0][1][0] = { false };
//	digital[0][1][1] = { true };
//	digital[0][1][2] = { false };
//
//	digital[0][2][0] = { false };
//	digital[0][2][1] = { true };
//	digital[0][2][2] = { false };
//
//	digital[0][3][0] = { false };
//	digital[0][3][1] = { true };
//	digital[0][3][2] = { false };
//
//	digital[0][4][0] = { false };
//	digital[0][4][1] = { false };
//	digital[0][4][2] = { false };
//
//
//	// 1
//	digital[1][0][0] = { true };
//	digital[1][0][1] = { true };
//	digital[1][0][2] = { false };
//
//	digital[1][1][0] = { true };
//	digital[1][1][1] = { true };
//	digital[1][1][2] = { false };
//
//	digital[1][2][0] = { true };
//	digital[1][2][1] = { true };
//	digital[1][2][2] = { false };
//
//	digital[1][3][0] = { true };
//	digital[1][3][1] = { true };
//	digital[1][3][2] = { false };
//
//	digital[1][4][0] = { true };
//	digital[1][4][1] = { true };
//	digital[1][4][2] = { false };
//
//	// 2
//	digital[2][0][0] = { false };
//	digital[2][0][1] = { false };
//	digital[2][0][2] = { false };
//
//	digital[2][1][0] = { true };
//	digital[2][1][1] = { true };
//	digital[2][1][2] = { false };
//
//	digital[2][2][0] = { false };
//	digital[2][2][1] = { false };
//	digital[2][2][2] = { false };
//
//	digital[2][3][0] = { false };
//	digital[2][3][1] = { true };
//	digital[2][3][2] = { true };
//
//	digital[2][4][0] = { false };
//	digital[2][4][1] = { false };
//	digital[2][4][2] = { false };
//
//	// 3
//	digital[3][0][0] = { false };
//	digital[3][0][1] = { false };
//	digital[3][0][2] = { false };
//
//	digital[3][1][0] = { true };
//	digital[3][1][1] = { true };
//	digital[3][1][2] = { false };
//
//	digital[3][2][0] = { false };
//	digital[3][2][1] = { false };
//	digital[3][2][2] = { false };
//
//	digital[3][3][0] = { true };
//	digital[3][3][1] = { true };
//	digital[3][3][2] = { false };
//
//	digital[3][4][0] = { false };
//	digital[3][4][1] = { false };
//	digital[3][4][2] = { false };
//
//	// 4
//	digital[4][0][0] = { false };
//	digital[4][0][1] = { true };
//	digital[4][0][2] = { false };
//
//	digital[4][1][0] = { false };
//	digital[4][1][1] = { true };
//	digital[4][1][2] = { false };
//
//	digital[4][2][0] = { false };
//	digital[4][2][1] = { false };
//	digital[4][2][2] = { false };
//
//	digital[4][3][0] = { true };
//	digital[4][3][1] = { true };
//	digital[4][3][2] = { false };
//
//	digital[4][4][0] = { true };
//	digital[4][4][1] = { true };
//	digital[4][4][2] = { false };
//
//	// 5
//	digital[5][0][0] = { false };
//	digital[5][0][1] = { false };
//	digital[5][0][2] = { false };
//
//	digital[5][1][0] = { false };
//	digital[5][1][1] = { true };
//	digital[5][1][2] = { true };
//
//	digital[5][2][0] = { false };
//	digital[5][2][1] = { false };
//	digital[5][2][2] = { false };
//
//	digital[5][3][0] = { true };
//	digital[5][3][1] = { true };
//	digital[5][3][2] = { false };
//
//	digital[5][4][0] = { false };
//	digital[5][4][1] = { false };
//	digital[5][4][2] = { false };
//
//	// 6
//	digital[6][0][0] = { false };
//	digital[6][0][1] = { false };
//	digital[6][0][2] = { false };
//
//	digital[6][1][0] = { false };
//	digital[6][1][1] = { true };
//	digital[6][1][2] = { true };
//
//	digital[6][2][0] = { false };
//	digital[6][2][1] = { false };
//	digital[6][2][2] = { false };
//
//	digital[6][3][0] = { false };
//	digital[6][3][1] = { true };
//	digital[6][3][2] = { false };
//
//	digital[6][4][0] = { false };
//	digital[6][4][1] = { false };
//	digital[6][4][2] = { false };
//
//	// 7
//	digital[7][0][0] = { false };
//	digital[7][0][1] = { false };
//	digital[7][0][2] = { false };
//
//	digital[7][1][0] = { true };
//	digital[7][1][1] = { true };
//	digital[7][1][2] = { false };
//
//	digital[7][2][0] = { true };
//	digital[7][2][1] = { true };
//	digital[7][2][2] = { false };
//
//	digital[7][3][0] = { true };
//	digital[7][3][1] = { true };
//	digital[7][3][2] = { false };
//
//	digital[7][4][0] = { true };
//	digital[7][4][1] = { true };
//	digital[7][4][2] = { false };
//
//	// 8
//	digital[8][0][0] = { false };
//	digital[8][0][1] = { false };
//	digital[8][0][2] = { false };
//
//	digital[8][1][0] = { false };
//	digital[8][1][1] = { true };
//	digital[8][1][2] = { false };
//
//	digital[8][2][0] = { false };
//	digital[8][2][1] = { false };
//	digital[8][2][2] = { false };
//
//	digital[8][3][0] = { false };
//	digital[8][3][1] = { true };
//	digital[8][3][2] = { false };
//
//	digital[8][4][0] = { false };
//	digital[8][4][1] = { false };
//	digital[8][4][2] = { false };
//
//	// 9
//	digital[9][0][0] = { false };
//	digital[9][0][1] = { false };
//	digital[9][0][2] = { false };
//
//	digital[9][1][0] = { false };
//	digital[9][1][1] = { true };
//	digital[9][1][2] = { false };
//
//	digital[9][2][0] = { false };
//	digital[9][2][1] = { false };
//	digital[9][2][2] = { false };
//
//	digital[9][3][0] = { true };
//	digital[9][3][1] = { true };
//	digital[9][3][2] = { false };
//
//	digital[9][4][0] = { false };
//	digital[9][4][1] = { false };
//	digital[9][4][2] = { false };
//}
//
//	for (int j = 0;j < 5;j++) {   // j是行 
//		for (int i = 0;i < n;i++) {  // 有几个数字不大于100
//			string s1 = ".";  // 字符串常量右值
//			string s2 = "X";
//			switch (s[i]) {
//			case '0':
//				cout << (digital[0][j][0] ? s1 : s2) << (digital[0][j][1] ? s1 : s2) << (digital[0][j][2] ? s1 : s2);
//				break;
//			case '1':
//				cout << (digital[1][j][0] ? s1 : s2) << (digital[1][j][1] ? s1 : s2) << (digital[1][j][2] ? s1 : s2);
//				break;
//			case '2':
//				cout << (digital[2][j][0] ? s1 : s2) << (digital[2][j][1] ? s1 : s2) << (digital[2][j][2] ? s1 : s2);
//				break;
//			case '3':
//				cout << (digital[3][j][0] ? s1 : s2) << (digital[3][j][1] ? s1 : s2) << (digital[3][j][2] ? s1 : s2);
//				break;
//			case '4':
//				cout << (digital[4][j][0] ? s1 : s2) << (digital[4][j][1] ? s1 : s2) << (digital[4][j][2] ? s1 : s2);
//				break;
//			case '5':
//				cout << (digital[5][j][0] ? s1 : s2) << (digital[5][j][1] ? s1 : s2) << (digital[5][j][2] ? s1 : s2);
//				break;
//			case '6':
//				cout << (digital[6][j][0] ? s1 : s2) << (digital[6][j][1] ? s1 : s2) << (digital[6][j][2] ? s1 : s2);
//				break;
//			case '7':
//				cout << (digital[7][j][0] ? s1 : s2) << (digital[7][j][1] ? s1 : s2) << (digital[7][j][2] ? s1 : s2);
//				break;
//			case '8':
//				cout << (digital[8][j][0] ? s1 : s2) << (digital[8][j][1] ? s1 : s2) << (digital[8][j][2] ? s1 : s2);
//				break;
//			case '9':
//				cout << (digital[9][j][0] ? s1 : s2) << (digital[9][j][1] ? s1 : s2) << (digital[9][j][2] ? s1 : s2);
//				break;
//			
//				
//			}
//			if (i != n - 1)
//				cout << ".";
//		}
//
//		cout << endl;
//	}
//}