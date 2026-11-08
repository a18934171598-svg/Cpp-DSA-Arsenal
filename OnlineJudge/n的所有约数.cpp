
//#include<vector>
//using namespace std;
//vector<int> get_divisors(int n) {
//    vector<int> res;
//    for (int i = 1;i*i <= n;i++) {  // 约数不等同于质数从1开始
//        if (n % i == 0) {
//            res.push_back(i);
//            if(n/i!=i) // 避免平方数重复
//                res.push_back(n/i);
//        }
//    }
//     想有序就排个序
//    sort(res.begin(), res.end());
//    return res;
//}