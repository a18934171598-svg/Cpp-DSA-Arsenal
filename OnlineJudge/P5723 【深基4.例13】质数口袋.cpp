//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main() {
//	int L,sum=0,num=0;
//	bool isBreak=false;
//	cin >> L;
//	for (int i = 2;sum <= L;i++) {
//		// 判断是否是质数
//		for (int j = 2;j <= sqrt(i);j++) {    // 根号值要不要验算,要比如说9
//			if (i % j == 0) {  // 起码过一层
//				// 证明不是质数
//				isBreak = true;   //谁解开
//				break;
//			}
//		}
//		if (!isBreak)  // 没有被break才是质数,才能添加
//		{
//			sum += i;
//			if(sum<=L){
//				cout << i << endl;
//				num++;
//			}
//			
//		}
//		else {
//			isBreak = false;
//		}
//		
//		
//	}
//	cout << num;
//
//}