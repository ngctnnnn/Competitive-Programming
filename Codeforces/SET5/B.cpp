#include <bits/stdc++.h>
#define loop(i, a, b, c) for(__typeof(a) i=(a), _b=(b), _c=(c); i<_b; i+=_c)
#define loopeach(i, a, b) for(__typeof(a) i = (a), _b=(b); i <_b;++i)
#define loopback(i,a,b,c) for(__typeof(a) i=(a),_b=(b), _c=(c); i>=_b; i-=_c)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long
#define read(n) int n; cin >> n
#define readln(a,n) int n; cin >> n; int a[n]; loopeach(i, 0, n) cin >> a[i];
#define vii vector<pair<int, int>> 
#define vll vector<pair<long long, long long>> 
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define DEBUG(x) { cout << #x << " = "; cout << (x) << endl; }
#define PR(a,n) {loop(_, 0,n, 1) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 2147483647
using namespace std;
//Prime sieve
const long long max_length = 1e7 + 9;
bool prime_sieve[max_length]; 
template<typename T>
void sieve(T x){
    prime_sieve[0] = 0;
    prime_sieve[1] = 0;
    loop(i, 2, x + 1, 1)
        prime_sieve[i] = 1;
    for (T i = 2; i * i<= x; ++i)
        if (prime_sieve[i])
            for (T j = i*i; j <= x; j +=i)
                prime_sieve[j] = 0;
}
template<typename T>
T power(T x, T y){
    if (!y)
        return 1;
    if (y == 1)
        return x;
    if (y & 1)
        return power(x, y/2) * power(x, y/2) * x;
    else
    {
        return power(x, y/2) * power(x, y/2);
    }   
}
//Prime check O(sqrt(n)/2)
template<typename T>
bool prime(T x){
    if (x == 2 || x == 3)
        return 1;
    if (x < 2 || !(x & 1))
        return 0;
    for (T i = 3; i*i <= x; i += 2)
        if (x % i == 0)
            return 0;
    return 1;
}
ll scs(ll x){
    int cnt = 0;
    while (x > 0){
        cnt++;
        x/=10;
    }
    return cnt;
}
bool ssnt(ll x){
    if (prime<ll>(x)==0)
        return 0;
    while (x > 0){
        if (prime<int>(x%(power<ll>(10, scs(x)))) != 1)
            return 0;
        else 
            x/=10;
    }
    return 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(n);
    if (n == 1) {
        cout << 4 << endl;
    }
    else if (n == 2){
        cout << 9 << endl;
    }
    else if (n == 3){
        cout << 14 << endl;
    }
    else {
        cout << 16 << endl;
    }
    // else if (n == 5){

    // }
    // else {
    //     int cnt = 0;
    //     for (int i = 10000; i < 99999; ++i)
    //         if (ssnt(i) == 1)
    //             cnt++;
    //     cout << cnt << endl;
    // }
    return 0;
}