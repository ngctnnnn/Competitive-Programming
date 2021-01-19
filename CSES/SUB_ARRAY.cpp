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
//Binary Search
template<typename T>
T bs(T a[], T l, T r, T x){
    T mid = (l + r)/2;
    if (r >= l){
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return bs(a, l, mid - 1, x);
        return bs(a, mid + 1, r, x);
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(n);
    read(x);
    int a[n];
    loopeach(i, 0, n)
        cin >> a[i];
    
    sort(a, a + n);
    int cnt = 0;
    loopeach(i, 0, n - 1){
        int find = x - a[i];
        if (bs<int>(a, i + 1, n, find)!= -1)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
