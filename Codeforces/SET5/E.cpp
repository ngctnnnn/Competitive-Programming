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
bool cmp(int a, int b){
    return a <= b ? 1 : 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(n);
    read(m);
    int a[n];
    loopeach(i, 0, n)  cin >> a[i];
    int b[m];
    loopeach(i, 0, m)  cin >> b[i];

    vector<int> ans(n);
    ans[0] = a[0];
    for (int i = 1; i < n; ++i)
        ans[i] = ans[i - 1] + a[i];

    for (int i = 0; i < m; ++i){
        if (b[i] < a[0])
            cout << -1 << endl;
        else 
            cout << lower_bound(ans.begin(), ans.end(), b[i], cmp) - ans.begin() << endl;
    }
    return 0;
}