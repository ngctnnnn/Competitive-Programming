#include <bits/stdc++.h>
#define loop(i, a, b, c) for(__typeof(a) i=(a), _b=(b), _c=(c); i<_b; i+=_c)
#define loopeach(i, a, b) for(__typeof(a) i = (a), _b=(b); i <_b;++i)
#define loopback(i,a,b,c) for(__typeof(a) i=(a),_b=(b), _c=(c); i>=_b; i-=_c)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
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
#define PR0(a,n) { cout << #a << " = "; REP(_,n) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 1e99
using namespace std;
void executive(int n, int &sum, int &scs){
    while (n > 0){
        sum += n % 10;
        scs++;
        n/=10;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    readln(a, n);
    sort(a, a + n);
    int maxsum = 0, maxscs = 0;
    vector<int> ans;
    ans.clear();
    executive(a[--n], maxsum, maxscs);
    ans.push_back(a[n]);
    while (n > 0){
        --n;
        int sum = 0, scs = 0;
        executive(a[n], sum, scs);
        if (sum < maxsum || scs < maxscs)
            break;
        else 
            ans.push_back(a[n]);
    }
    for (int i = ans.size() - 1; i >= 0; --i)
        cout << ans[i] << " ";
    return 0;
}
