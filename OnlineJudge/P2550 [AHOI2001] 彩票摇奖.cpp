//#include<iostream>
//#include<set>
//using namespace std;
//
//int main() {
//	int n;
//	cin>>n;  // 表示张数
//	int arr[1000][8];
//	// 7个中奖号码 1-33 各不相同
//	int result[7] = { 0 };
//	set<int> s;
//	for (int i = 0;i < 7;i++) {
//		int k;
//		cin >> k;
//		s.insert(k);
//	}
//	for(int i=0;i<n;i++){
//		// 彩票号码
//		arr[i][7] = 0;
//		for (int j = 0;j < 7;j++) {
//			cin>>arr[i][j];
//			if (s.find(arr[i][j]) != s.end())
//				arr[i][7]++;
//		}
//		switch(arr[i][7]) {
//		case 1:
//			result[6] += 1;
//			break;
//		case 2:
//			result[5] += 1;
//			break;
//		case 3:
//			result[4] += 1;
//			break;
//		case 4:
//			result[3] += 1;
//			break;
//		case 5:
//			result[2] += 1;
//			break;
//		case 6:
//			result[1] += 1;
//			break;
//		case 7:
//			result[0] += 1;
//		}
//		
//	}
//
//	for (int i = 0;i < 7;i++) {
//		cout << result[i] << " ";
//
//	}
//}
