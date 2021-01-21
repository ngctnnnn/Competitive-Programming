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
vii a[2309];
int n, m;
int d[2309];
void dijkstra(){
    priority_queue<pii, vii, greater<pii>> pq;
    for (int i = 1; i <= n; ++i)
        d[i] = oo;
    d[1] = 0;
    pq.push(pii(0, 1));

    while (pq.size()){
        int u = pq.top().ss;
        int du = pq.top().ff;
        pq.pop();

        if (du != d[u])
            continue;
        
        for (int i = 0; i < a[u].size(); ++i){
            int v = a[u][i].ss;
            int uv = a[u][i].ff;
            if (d[v] > du + uv){
                d[v] = du + uv;
                pq.push(pii(d[v], v));
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

    scanf("%d%d", &n, &m);
    int p, q, w;
    while (m--){
        cin >> p >> q >> w;
        a[p].push_back(pii(w, q));
        a[q].push_back(pii(w, p));
    }
    dijkstra();
    cout << d[1] << endl;
}