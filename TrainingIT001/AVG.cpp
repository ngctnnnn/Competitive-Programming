#include <bits/stdc++.h>
#define loop(i, a, b, c) for(__typeof(a) i=(a), _b=(b), _c=(c); i<_b; i+=_c)
#define loopeach(i, a, b) for(__typeof(a) i = (a), _b=(b); i <_b;++i)
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
const int BASE_DIGITS = 9;
const int BASE = 1000000000;
using namespace std;
int bs(vector<pii> a, int l, int r, int x){int mid = (l + r)/2;if (r >= l){if (a[mid].ff*1.0 == x/2.0){return mid;}if (a[mid].ff*1.0 > x/2.0)return (a, l, mid - 1, x);return (a, mid + 1, r, x);}return -1;}int main() {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);int t;cin >> t;while (t--){int n;cin >> n;vector<pii> a(n);loopeach(i, 0, n){int x;cin >> x;a[i].ff = x;a[i].ss = i + 1;}int cnt = 0;loopeach(i, 0, n){loopeach(k, i + 1, n){loopeach(j, k + 1, n)if (a[i].ff + a[j].ff == 2*a[k].ff && a[i].ss < a[k].ss && a[k].ss < a[j].ss)cnt++;}}cout << cnt << endl; }return 0;}