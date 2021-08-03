#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#define ff first
#define ss second
#define ll long long
#define oo 1e99
#define f(i, a, b, c) for (ll i = a; i < b; i += c)
#define fb(i, a, b, c) for (ll i = a; i >= b; i -= c)
using namespace std;
const int MAXX = 1000000009;
int main() {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    ll n, k;
    cin >> n >> k;
    ll a[n];
    f(i, 1, n+1, 1) cin >> a[i];
    ll cur = 0;
    ll result = 0;
    map<ll, ll> m;

    cin >> n >> k;
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];

    for (ll i = 1; i <= k; ++i){
        if (++m[a[i]] == 1)
            cur++;
    }
    result = cur;
    ll pos = 1;
    f(i, k + 1, n + 1, 1) { 
        if (--m[a[pos]] == 0) 
            cur--;

        if (++m[a[i]] == 1)
            cur++;
        ++pos;
        result = max(result, cur);
    }
    cout << result;
    return 0;
}