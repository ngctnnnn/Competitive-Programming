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
bool cmp(pii a, pii b){
    return a.ff > b.ff && a.ss < b.ss;
}

bool cmp1(pii a, int b){
    return a.ff <= b  ? 1 : 0;
}

void solve(int n, int m, vector<int> c, vector<int> b){
    vii a(n);
    loopeach(i, 0, n){ 
        a[i].ff = c[i];
        a[i].ss = b[i];
    }
    sort(a.begin(), a.end(), cmp);

    each(it, a)
        cout << it->ff << " " << it->ss << endl;
    
    int sum = a[0].ff, cnt = a[0].ss;
    a.erase(a.begin());
    while (sum < m){
        if (a.empty()){
            cout << -1 << endl;
            return;
        }
        int pos = lower_bound(a.begin(), a.end(), m - sum, cmp1) - a.begin(); 
        sum += a[pos].ff;
        cnt += a[pos].ss;
        a.erase(a.begin() + pos);
    }
    cout << cnt << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(t);
    while (t--){
        read(n); read(m);
        vector<int> a(n), b(m);
        loopeach(i, 0, n) cin >> a[i];
        loopeach(i, 0, n) cin >> b[i];

        solve(n, m, a, b);
    }
    return 0;
}