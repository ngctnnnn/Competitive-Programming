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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    int a[n + 1][n + 1];
    loopeach(i, 0, n + 1)
        loopeach(j, 0, n + 1)
            a[i][j] = 0;
    loopeach(i, 0, n){
        int x;
        cin >> x;
        a[i][0] = i + 1;
        if (x != -1){
            a[i][x] = 1;    
            a[x][i] = 1;
        }
    }
    int cnt = 0;
    loopeach(i, 1, n + 1)
        loopeach(j, 1, n + 1){
            if (a[j][i] == 1){ 
                cnt++;
                break;
            }
        }
    cout << cnt << endl;



    loopeach(i, 0, n + 1)
        cout << i << " ";
    cout << endl;
    loopeach(i, 0, n){  
        loopeach(j, 0, n + 1)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
            