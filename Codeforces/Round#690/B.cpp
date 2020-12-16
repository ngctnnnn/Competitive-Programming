#include <bits/stdc++.h>
#define loop(i, a, b, c) for(__typeof(a) i=(a), _b=(b), _c=(c); i<_b; i+=_c)
#define loopback(i,a,b,c) for(__typeof(a) i=(a),_b=(b), _c=(c); i>=_b; i-=_c)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long
#define vii vector<pair<int, int>> 
#define vll vector<pair<long long, long long>> 
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define DEBUG(x) { cout << #x << " = "; cout << (x) << endl; }
#define PR(a,n) {loop(_, 0,n, 1) cout << a[_] << ' '; cout << endl; }
#define PR0(a,n) { cout << #a << " = "; REP(_,n) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 1e99

//Power with divide and conquer
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

//Binary Search
template<typename T>
T bs(T a[], T l, T r, T x){
    T mid = (l + r)/2;
    if (r >= l){
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return (a, l, mid - 1, x);
        return (a, mid + 1, r, x);
    }
    return -1;
}
bool check(char c[], int n){
    if (c[1] == '2' && c[2] == '0' && c[3] == '2' && c[4] == '0') 
        return 1; 
    if (c[1] == '2' && c[2] == '0' && c[3] == '2' && c[n] == '0') 
        return 1; 
    if (c[1] == '2' && c[2] == '0' && c[n-1] == '2' && c[n] == '0') 
        return 1;   
    if (c[1] == '2' && c[n-2] == '0' && c[n-1] == '2' && c[n] == '0') 
        return 1;
    if (c[n-3] == '2' && c[n-2] == '0' && c[n-1] == '2' && c[n] == '0') 
        return 1;
    return 0;

}
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        char c[n];
        loop(i, 1, n + 1, 1)
            cin >> c[i];
        cout << (check(c, n) ? "yes" : "no") << endl;
    }
    return 0;
}