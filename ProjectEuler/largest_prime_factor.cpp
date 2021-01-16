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
#define oo 1e99
using namespace std;
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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    long long n;
    cin >> n;
    ll mimic = n;
    for (ll i = 3; i < n; ++i){
        if (prime<ll>(n/i) && i*(n/i) == n) {
            cout << i << " " << n/i << " " << n << endl;
            cout << n/i << endl;
            return 0;
        }
    }
    return 0;
}