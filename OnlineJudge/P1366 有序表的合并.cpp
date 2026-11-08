//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	int T;
//	cin >> T;
//	vector<int> answer;
//
//	int round = T;
//
//	while (round--) {
//		int n, m;
//		cin >> n >> m;
//
//		vector<unsigned long long>a(n);
//		vector<unsigned long long>b(m);
//
//		for (int i = 0;i < n;i++) {
//			cin >> a[i];
//		}
//		for (int j = 0;j < m;j++) {
//			cin >> b[j];
//		}
//
//		int i = 0, j = 0;
//		int xor_sum = 0;
//
//		while (i < n&&j<m) {
//			if (a[i] == b[j]) {
//				int count = 1;
//				while (j + 1 < m && b[j] == b[j + 1]) 
//				{ 
//					j++;
//					count++;
//				}
//				xor_sum ^= count;
//				i++;
//			}
//			else if (a[i] < b[j]) {
//				i++;
//			}
//			else {
//				j++;
//			}
//		}
//
//		
//		answer.push_back(xor_sum);
//
//	}
//
//
//	for (int i = 1;i <= T;i++) {
//		cout << answer[i - 1]<<'\n';
//	}
//}