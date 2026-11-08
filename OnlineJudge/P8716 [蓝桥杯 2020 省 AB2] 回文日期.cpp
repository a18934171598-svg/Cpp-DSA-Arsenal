//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//vector<string> arr(366);
//vector<string> arr2(12);
//
//void res(int& start,int n,int m) {
//	for (int i = start;i < start + n;i++) {
//		string s = to_string(m * 100 + i-start+1);
//		if (s.size() < 4) s.insert(0, 1, '0');
//		string right = s;
//		reverse(s.begin(), s.end());
//		string left = "";
//		left += s;
//		left += right;
//		arr[i] = left;
//	}
//	start += n;
//}
//
//int main() {
//	string s;
//	cin >> s;
//	int start = 0;
//	for (int i = 1;i <= 12;i++) {
//		// 4,6,9,11
//		// 2
//		// 1,3,5,7,8,10,12
//		if (i == 2 ) {
//			res(start, 29,i);
//		}
//		else if (i == 4 || i == 6 || i == 9 || i == 11) {
//			res(start,30,i);
//		}
//		else {
//			res(start,31,i);
//		}
//
//	}
//
//	sort(arr.begin(), arr.end());
//
//	for (int i = 0;i < 366;i++) {
//		if (arr[i] > s) {
//			cout << arr[i] << '\n';
//			break;
//		}
//	}
//
//	for (int i = 1;i <= 12;i++) {
//		string s1 = to_string(i * 100 + i);
//		if (s1.size() < 4) s1.insert(0, 1, '0');
//		string right = s1;
//		reverse(s1.begin(), s1.end());
//		string left = "";
//		left += s1;
//		left += right;
//		arr2[i - 1] = left;
//	}
//
//	sort(arr2.begin(), arr2.end());
//
//	for (int i = 0;i < 12;i++) {
//		if (arr2[i] > s) {
//			cout << arr2[i];
//			break;
//		}
//	}
//}