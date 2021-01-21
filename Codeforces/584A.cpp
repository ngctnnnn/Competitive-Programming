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
#define PR(a,n) {loop(_, 0,n, 1) cout << a[_]; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 1e99
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(n);
    read(t);
    if (n == 1){
        if (t < 10)
            cout << t << endl;
        else 
            cout << -1 << endl;
        return 0;
    }
    else if (n == 2){
        if (t == 2 || t == 5 || t == 10)
            cout << 10 << endl;
        else if (t == 3 || t == 6 || t == 4)
            cout << 12 << endl;
        else if (t == 7)
            cout << 14 << endl;
        else if (t == 8)
            cout << 16 << endl;
        else if (t == 9)
            cout << 18 << endl;
        return 0;
    }
    vector<int> ans(n);
    ans[0] = 1;
    for (int i = 1; i < n; ++i)
        ans[i] = 0;

    if (t == 3 || t == 6){
        ans[n - 1] = 2;
    }
    else if (t == 7){
        loopeach(i, 0, n)
            cout << 7;
        cout << endl;
        return 0;
    }
    else if (t == 8){
        ans[n - 1] = 6;
        ans[n - 2] = 1;
        ans[n - 3] = 8;
    }
    else if (t == 9){
        ans[n - 1] = 8;
    }
    PR(ans, n);
    return 0;
}
