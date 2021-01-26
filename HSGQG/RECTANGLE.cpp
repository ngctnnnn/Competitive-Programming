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
bool check(vector<pii> point){
    map<int, int> f;
    for (int i = 0; i < 4; ++i){ 
        f[point[i].ff]++;
        f[point[i].ss]++;
    }
    if (f.size() != 2)
        return 0;
    auto i = f.begin();
    if (i->ss != 4 || (++i)->ss != 4)
        return 0;
    return 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(t);
    while (t--){
        vector<pii> point(4);
        for (int i = 0; i < 4; ++i)
            cin >> point[i].ff >> point[i].ss;

        if (!check(point))
            cout << 0 << endl;
        else {
            sort(point.begin(), point.end());
            int d1 = (point[1].ff - point[0].ff) + (point[1].ss - point[0].ss),
                d2 = (point[2].ff - point[0].ff) + (point[2].ss - point[0].ss);
            cout << ((d1 * (d1 + 1))>>1) * ((d2 * (d2 + 1))>>1) << endl;
        }
    }
    return 0;
}