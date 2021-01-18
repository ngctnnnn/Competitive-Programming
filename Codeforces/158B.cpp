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

    read(n);
    vii a(n);
    int cnt = 0;
    loopeach(i, 0, n){ 
        read(x);
        a[i].ff = x;
        a[i].ss = 1;
    }
    sort(a.begin(), a.end());
    
    loopback(i, a.size() - 1, 0, 1)
        if (a[i].ff == 4){
            cnt++;
            a[i].ss = 0;
            a.erase(a.begin() + i);
        }

    for (int i = 0; i < a.size() && a[i].ff < 4; ++i)
        if (a[i].ff == 1&&a[i].ss){
            loopeach(j, i + 1, a.size())
                if (a[j].ss ==1 && a[j].ff == 3){
                    a[i].ss = 0;
                    a[j].ss = 0;
                    cnt++;
                    break;
                }
        }
        else if (a[i].ff == 2 && a[i].ss == 1)
            loopeach(j, i + 1, a.size())
                if (a[j].ss == 1 && a[j].ff == 2){
                    a[j].ss = 0;
                    a[i].ss = 0;
                    break;
                }
                
    loopeach(i, 0, a.size())
        cout << a[i].ff << " ";
    cout << endl;
    loopeach(i, 0, a.size())  
        cout << a[i].ss << " ";
    cout << endl;

    cout << cnt << endl;
    return 0;
}