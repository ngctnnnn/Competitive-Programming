#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
#define oo 1e99
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
#define fb(i, a, b, c) for (int i = a; i >= b; i -=c)
using namespace std;
const int MAXX = 1000000009;
int bs(vector<pair<int, bool>> a, int l, int r, int x, int k){
    if (r >= l){
        int mid = (l + r)>>1;
        if (x - k <= a[mid].ff && a[mid].ff <= x + k && a[mid].ss)
            return mid;
        if (x - k < a[mid].ff)
            return bs(a, l, mid - 1, x, k);
        return bs(a, mid + 1, r, x, k);
    }
    return -1;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
    int n, m, k;
    cin >> n >> m >> k;
    int cnt = 0;
    int a[n];
    f(i, 0, n, 1) cin >> a[i];

    vector<pair<int, bool>> b(m, {0, true});
    f(i, 0, m, 1) cin >> b[i].ff;
    sort(b.begin(), b.end());

    f(i, 0, n, 1){ 
        int x = a[i];
        int pos = bs(b, 0, m, x, k);
        cout << x << " " << b[pos].ff << endl;
        if (b[pos].ss) {
            cnt++;
            b[pos].ss=0;
        }
    }
    f(i, 0, m, 1) cout << b[i].ff << " ";
    cout << endl;
    cout << cnt << endl;
    return 0;
}