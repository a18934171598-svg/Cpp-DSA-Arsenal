//#include <iostream>
//#include <vector>
//#include<cmath>
//using namespace std;
//
//typedef long long ll;
//
//ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
//ll lcd(ll a, ll b) { return a / gcd(a, b) * b; }
//
//ll count1(ll x) {
//    ll cnt = 0;
//    while (x) {
//        cnt += (x & 1);
//        x >>= 1;
//    }
//    return cnt;
//}
//
//int main() {
//    ll n;
//    int k;
//    cin >> n >> k;
//    vector<ll> a(k);
//    for (int i = 0; i < k; i++) cin >> a[i];
//
//    ll ans = 0;
//
//    for (int mask = 1;mask < (1 << k);mask++) { 
//        // 遍历每一个子集,除了空集
//        int bit = count1(mask); // 算出有多少个1
//        int current_lcm = 1;
//        // 代表
//        for (int i = 0;i < k;i++) {
//            if (mask & (1 << i))  // 勘察第几位
//            {
//                current_lcm = lcd(current_lcm,a[i]);  // 求出该子集的最小公倍数
//            }
//            if (current_lcm > n) break;  // 发现超出n就不求了(与n没什么关联)
//        }
//        
//        if (current_lcm > n) continue;
//        // 奇加偶减
//        if (bit & 1) ans += current_lcm;
//        else { ans -= current_lcm; }
//    }
//
//    // __builtin_popcount
//    cout << ans << endl;
//}