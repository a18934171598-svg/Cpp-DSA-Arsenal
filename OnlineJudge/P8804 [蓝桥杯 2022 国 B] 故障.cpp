//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_set>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//struct node {
//	double num;
//	int index;
//	bool operator>(const node& other)const {
//		if (fabs(this->num - other.num)<1e-9)
//			return this->index < other.index;
//
//			return this->num > other.num;
//	}
//};
//int main() {
//
//	int m, n;
//	cin >> n >> m;
//	cout << fixed << setprecision(2);
//	vector<vector<double>> matrix(n + 1, vector<double>(m + 1));
//	// 概率
//	vector<double>probability_n(n + 1);
//
//	for (int i = 1;i <= n;i++) { 
//		cin >> probability_n[i]; 
//		//probability_n[i]*=0.01 ;
//	}
//
//	for (int i = 1;i <= n;i++) {
//		for (int j = 1;j <= m;j++) {
//			cin >> matrix[i][j];
//			//matrix[i][j]*=0.01 ;
//		}
//	}
//
//	// 出现的故障现象数量 K
//	int pro_count = 0;
//	cin >> pro_count;
//
//
//	unordered_set<int>u_set;
//	for (int i = 1;i <= pro_count;i++) {
//		int index;
//		cin >> index;
//		u_set.insert(index);
//	}
//
//	vector<double> pro_up(n + 1);
//	double P_down = 0;
//	for (int i = 1;i <= n;i++) {
//		double res = 1;
//		res *= (probability_n[i]*0.01);
//		for (int j = 1;j <= m;j++) {
//			if (u_set.count(j) == 0)
//				res *= (1 - (double)(matrix[i][j]/100));
//		} // 大量连续乘法 会变成float 安全要用*1.0/100
//		for (int elm : u_set) res *= (matrix[i][elm]/100);
//
//		pro_up[i] = res;
//
//		P_down += res;
//	}
//
//	// 然后呢
//	
//	vector<node>probability(n + 1);
//
//	for (int i = 1;i <= n;i++){
//		probability[i].num = pro_up[i]/P_down*100;
//		probability[i].index = i;
//	}
//
//	sort(probability.begin()+1,probability.end(),greater<node>());
//	
//	for (int i = 1;i <= n;i++) {
//		cout << probability[i].index<<' '<<probability[i].num<<'\n';
//	}
//
//}