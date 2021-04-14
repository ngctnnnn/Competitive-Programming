#include <bits/stdc++.h>
#define loop(i, a, b, c) for(__typeof(a) i=(a), _b=(b), _c=(c); i<_b; i+=_c)
#define loopeach(i, a, b) for(__typeof(a) i = (a), _b=(b); i <_b;++i)
#define loopback(i,a,b,c) for(__typeof(a) i=(a),_b=(b), _c=(c); i>=_b; i-=_c)
#define rep(i,a) for(int i=0,_a=(a); i<_a; i++)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long
#define vii vector<pair<int, int>> 
#define vll vector<pair<long long, long long>> 
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define debug(x) { cout << #x << " = "; cout << (x) << endl; }
#define pr(a,n) {loop(_, 0,n, 1) cout << a[_] << ' '; cout << endl; }
#define pr0(a,n) { cout << #a << " = "; rep(_,n) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 1
const int base_digits = 9;
const int base = 1000000000;
const ll inf = (ll)(1e10);
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //freopen("debug.inp", "r", stdin);
    //freopen("debug.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> t(n + 1);
    vector<int> r(n);
    for (int i = 1; i <= n; i++) cin >> t[i];
    for (int i = 1; i <= n - 1; i++) cin >> r[i];
    vector<ll> dp(n + 1,inf);
    dp[0] = 0;
    dp[1] = t[1];
    for (int i = 2; i <= n; i++)
        dp[i] = min((ll)(dp[i - 1] + t[i]),(ll)(dp[i - 2] + r[i - 1]));
    cout << dp[n];
    return 0;

}