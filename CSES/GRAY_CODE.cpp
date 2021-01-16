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
template<typename T>
T power(T x, T y){
    if (!y)
        return 1;
    if (y == 1)
        return x;
    if (y & 1)
        return power(x, y/2) * power(x, y/2) * x;
    else
    {
        return power(x, y/2) * power(x, y/2);
    }   
}
void solve(int a[], int n){
    loopeach(i, 0, n){
        if (a[i] != 1){
            loopback(i, n - 1, 0, 1)
                if (a[i] == 0){
                    a[i] = 1;
                    PR(a, n);
                    return;
                }
        }
        else {
            loopback(i, n - 1, 0, 1)
                if (a[i] == 1){
                    a[i] = 0;
                    PR(a, n);
                    return;
                }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(n);
    int a[n];
    loopeach(i, 0, n)
        a[i] = 0;
    PR(a, n);
    int cnt = 1, pwr = power<int>(2, n);
    while (cnt++ < pwr){
        solve(a, n);
    }
    return 0;
}