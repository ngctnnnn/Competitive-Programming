#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    long long s, n;
    cin >> s >> n;
    vector<pair<long long, long long>> a(n);
    for (ll i = 0; i < n; ++i){
        long long x, y;
        cin >> x >> y;
        a[i] = make_pair(x, y);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i){
        if (s <= a[i].ff){
            cout << "NO" << endl;
            return 0;
        }
        else 
            s += a[i].ss;
    }
    cout << "YES" << endl;
    return 0;
}