//#include<iostream>
//using namespace std;
//#include<set>
//int main(){
//	int n,count=0;
//	cin >> n; //n<=100 
//
//	set<int> s;
//	int temp;
//
//	for (int i = 0;i < n;i++) {
//		// 不超过10000 不相同
//		cin >> temp;
//		s.insert(temp);
//	}
//	for (auto it = s.begin();it != s.end();it++) { // 被减数
//		auto next_it = it;
//		for (auto itt = s.begin();itt != s.end();itt++) {
//			if (it == itt)continue; // 不是自己
//			
//			// 小于不用减了
//			if ((*itt) > (*it)) {
//				continue;
//			}
//			else{ 
//				auto tp = s.find((*it) - (*itt));
//				if (tp != s.end() && (*tp) != (*itt)) {
//					count++;
//					break;
//				}
//				
//			}
//		}
//		
//	}
//
//	cout << count;
//}