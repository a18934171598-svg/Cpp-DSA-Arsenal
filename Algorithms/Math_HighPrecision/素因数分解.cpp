//#include <iostream>
//#include <vector>
//#include <map>
//#include <cstdlib>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//typedef long long ll;
//
//// 快速乘，防止 ll 溢出
//ll mul(ll a, ll b, ll mod) {
//    return (__int128)a * b % mod;
//}
//
//// 快速幂 a^b % mod
//ll qpow(ll a, ll b, ll mod) {
//    ll res = 1;
//    while (b) {
//        if (b & 1) res = mul(res, a, mod);
//        a = mul(a, a, mod);
//        b >>= 1;
//    }
//    return res;
//}
//
//// Miller-Rabin 质数判定
//bool is_prime(ll n) {
//    if (n < 2) return false;
//    if (n == 2) return true;
//    if (n % 2 == 0) return false;
//    ll d = n - 1;
//    int s = 0;
//    while (d % 2 == 0) d /= 2, s++;
//    // 固定基底，对 1e18 以内数百分百正确
//    vector<ll> base = { 2,3,5,7,11,13,17,19,23,29 };
//    for (ll p : base) {
//        if (p >= n) continue;
//        ll x = qpow(p, d, n);
//        if (x == 1 || x == n - 1) continue;
//        bool ok = false;
//        for (int i = 1; i < s; i++) {
//            x = mul(x, x, n);
//            if (x == n - 1) { ok = true; break; }
//        }
//        if (!ok) return false;
//    }
//    return true;
//}
//
//// Pollard-Rho 找 n 的一个因子
//ll pollards_rho(ll n) {
//    if (n % 2 == 0) return 2;
//    if (n % 3 == 0) return 3;
//    if (n % 5 == 0) return 5;
//
//    while (true) {
//        ll c = rand() % (n - 1) + 1;
//        auto f = [&](ll x) { return (mul(x, x, n) + c) % n; };
//        ll x = 0, y = 0, d = 1;
//        while (d == 1) {
//            x = f(x);
//            y = f(f(y));
//            d = __gcd(abs(x - y), n);
//        }
//        if (d != n) return d;
//    }
//}
//
//// 递归分解，结果存在 fac
//void factor(ll n, map<ll, int>& fac) {
//    if (n == 1) return;
//    if (is_prime(n)) {
//        fac[n]++;
//        return;
//    }
//    ll d = pollards_rho(n);
//    factor(d, fac);
//    factor(n / d, fac);
//}
//
//// 对外调用接口
//void divide_big(ll n, map<ll, int>& fac) {
//    fac.clear();
//    factor(n, fac);
//}
//
//// 测试
//int main() {
//    srand(time(0));
//    ll x;
//    cin >> x;
//    map<ll, int> res;
//    divide_big(x, res);
//    for (auto& p : res) {
//        cout << p.first << " " << p.second << endl;
//    }
//    return 0;
//}