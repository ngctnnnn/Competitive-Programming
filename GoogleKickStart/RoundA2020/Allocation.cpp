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
int solve(int n, int b, int a[]){
    sort(a, a + n);
    vector<int> ans(n);
    ans[0] = a[0];
    for (int i = 1; i < n; ++i)
        ans[i] = ans[i - 1] + a[i];
    return lower_bound(ans.begin(), ans.end(), b, cmp) - ans.begin();
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(t);
    for (int x = 1; x <= t; x++){
        read(n);
        read(b);
        int a[n];
        loopeach(i, 0, n)
            cin >> a[i];
        cout << "Case #" << x << ": " << solve(n, b, a) << endl;
    }
    return 0;
}