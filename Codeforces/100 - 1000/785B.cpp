#include <bits/stdc++.h>
#define ll long long
#define read(n) int n; cin >> n;
#define readln(a,n) int n; cin >> n; int a[n]; for(__typeof(a) i = 0; i < n, ++i) cin >> a[i];
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define PR(a,n) {for(__typeof(a) _ = 0; _ < n; ++_) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
const int oo = 2147483647;
typedef std::pair<int, int> pii;
typedef std::pair<long long, long long> pll;
typedef std::vector<pair<int, int>> vii;
typedef std::vector<pair<long long, long long>> vll;
using namespace std;
bool cmp(pii a, pii b){
    return a.ss < b.ss;
}
bool cmp2(pii a, pii b){
    return a.ff < b.ff;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(n);

    vii a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i].ff >> a[i].ss;
    
    read(m);
    vii b(m);
    for (int i = 0; i < m; ++i)
        cin >> b[i].ff >> b[i].ss;
    
    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end(), cmp2);
    each(it, a)
        cout << it->ff << " " << it->ss << endl;
    if (a[0].ss > b[m - 1].ff && a[n - 1].ff < b[0].ss)
        cout << 0 << endl;
    else
        cout << max(b[m-1].ff - a[0].ss, a[n - 1].ff - b[0].ss) << endl;
    return 0;
}