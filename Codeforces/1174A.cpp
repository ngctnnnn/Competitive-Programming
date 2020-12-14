#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll n;
ll a[2001];
set<ll> b;
void solve(){
    cin >> n;
    for (ll i = 0; i < 2*n; ++i){
        cin >> a[i];
        b.insert(a[i]);
    }
    ll s1 = 0, s2 = 0;
    for (ll i = 0; i < n; ++i){
        s1 += a[i];
        ll j = n + i;
        s2 += a[j];
    }
    if (s1 != s2){
        for (ll i = 0; i < 2 * n; ++i)
            cout << a[i] << " ";
            cout << endl;
            return;
    }
    if (b.size() == 1){
        cout << -1 << endl;
        return;
    }
    ll ptr_x = 0, ptr_y = 2 * n - 1;
    while (a[ptr_x] == a[ptr_y] && ptr_x != n){
        ptr_x++;
    }
    if (ptr_x == ptr_y){
        cout << -1 << endl;
        return;
    }
    else 
        swap(a[ptr_x], a[ptr_y]);
    for (ll i = 0; i < 2 * n; ++i)
        cout << a[i] << " ";
    cout << endl;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    solve();
    return 0;
}