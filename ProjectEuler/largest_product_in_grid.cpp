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
#define oo 1e99
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int a[20][20];
    loopeach(i, 0, 20)
        loopeach(j, 0, 20)
            cin >> a[i][j];
    
    int maxx = -oo;

    loop(i, 0, 20, 1){
        loop(j, 0, 17, 4)
            maxx = max(a[i][j] * a[i][j + 1] * a[i][j + 2] * a[i][j + 3], maxx);
    }
    loop(j, 0, 20, 1){
        loop(i, 0, 17, 4)
            maxx = max(a[i][j] * a[i + 1][j] * a[i + 2][j] * a[i + 3][j], maxx);
    }
    loop(i, 0, 17, 4){ 
        loop(j, 0, 17, 4)
            maxx = max(maxx, a[i][j] * a[i + 1][j + 1] * a[i + 2][j + 2] * a[i + 3][j + 3]);
    }
    cout << maxx << endl;
    return 0;
}
    