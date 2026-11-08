//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//
//
//int  main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	long long  T;
//	cin >> T;
//	vector<bool>answer;
//
//	for (long long  i = 0;i < T;i++) {
//		long long  n;
//		cin >> n;
//		vector<long long > pep(n);
//		long long sum = 0;
//		int max = -1;
//		for (long long  i = 0;i < n;i++) {
//			cin >> pep[i];
//			if (max < pep[i]) max = pep[i];
//			sum += pep[i];
//
//		}
//		
//
//		if (n<5&&sum>0) {
//			answer.push_back(false);
//			continue;
//		}
//			
//		if (sum % 5 != 0) {
//			answer.push_back(false);
//			continue;
//		}
//		long long k = sum / 5;
//		if (max > k) {
//			answer.push_back(false);
//			continue;
//		}
//		
//		
//		answer.push_back(true);
//
//	}
//
//	for (long long  i = 0;i < T;i++) {
//		if (answer[i] == false) cout << "F\n";
//		else cout << "T\n";
//	}
//}
