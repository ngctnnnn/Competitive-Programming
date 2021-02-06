#include <bits/stdc++.h>
#define ll long long
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
typedef std::pair<int, int> pii;
typedef std::pair<long long, long long> pll;
typedef std::vector<std::pair<int, int>> vii;
typedef std::vector<std::pair<long long, long long>> vll;
using namespace std;
bool ok = 1;
const int oo = 2147483647;
inline void PR(int a[], int n){
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
}
inline void read(int &n){
    cin >> n;
}
inline void read(int &n, int &m){
    cin >> n >> m;
}
inline void read(int &n, int &m, int &x){
    cin >> n >> m >> x;
}
inline void read(int a[], int n){
    for (int i = 0; i < n; ++i)
        cin >> a[i];
}
bool cmp(pll a, pll b){
    return a.ff < b.ff;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n; cin >> n;
    vll ans(n);
    for (ll i = 0; i < n; ++i){
        cin >> ans[i].ff;
        ans[i].ss = i + 1;
    }
    ll l = -1, r = -1, min = oo;
    sort(ans.begin(), ans.end(), cmp);
    for (ll i = 0; i < n; ++i){
        ll t = abs(ans[i].ff - ans[i + 1].ff);
        if (min > t) {
            min = t;
            l = ans[i].ss;
            r = ans[i + 1].ss;
        }
    }
    if (l < r)
        cout << l << " " << r << endl;
    else 
        cout << r << " " << l << endl;
    return 0;
}
    
