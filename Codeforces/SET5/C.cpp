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
string changeBit(int x){
    string s = "";
    while (x > 0){
        s += (x % 2) + '0';
        x/=2;
    }
    return s;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    read(a);
    read(b);
    string b1 = changeBit(a), b2 = changeBit(b);
    int cnt = 0;
    for (int i = min(b1.length() - 1, b2.length() - 1); i >= 0; --i)
        if (b1[i] != b2[i])
            cnt++;
    if (b1.length() < b2.length()){
        for (int i = b1.length(); i < b2.length(); ++i)
            if (b2[i] == '1')
                cnt++;
    }
    else {
        for (int i = b2.length(); i < b1.length(); ++i)
            if (b1[i] == '1')
                cnt++;
    }
    cout << cnt << endl;
    return 0;
}