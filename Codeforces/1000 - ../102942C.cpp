#include <bits/stdc++.h>
#define ll long long
#define read(n) int n; cin >> n;
#define readln(a,n) int n; cin >> n; int a[n]; for(__typeof(a) i = 0; i < n, ++i) cin >> a[i];
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define PR(a,n) {for(__typeof(a) _ = 0; _ < n; ++_) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 2147483647
typedef std::pair<int, int> pii;
typedef std::pair<long long, long long> pll;
typedef std::vector<std::pair<int, int>> vii;
typedef std::vector<std::pair<long long, long long>> vll;
using namespace std;
bool cmp(int a, pair<int, bool> b){
    return a >= b.ff && b.ss != 0;
}
void solve(vector<pair<int, bool>> a, int n, int k){
    sort(a.begin(), a.end());
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        if (a[i].ff < k){
            a[i].ss = 0;
            a[upper_bound(a.begin(), a.end(), k - a[i].ff, cmp) - a.begin()].ss = 0;
            cnt++;
        }
    }
    each(it, a)
        cout << it->ff << " " << it->ss << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(t);
    while (t--){
        read(n);
        read(k);
        vector<pair<int, bool>> a(n);
        for (int i = 0; i < n; ++i){ 
            cin >> a[i].ff;
            a[i].ss = 1;
        }
        solve(a, n, k);
    }
    return 0;
}