#include <bits/stdc++.h>
#define loop(i, a, b, c) for(long long i = a; i < b; i += c)
#define ff first
#define ss second
#define pll pair<long long, long long>
using namespace std;
long long n;
pll binsearch(vector<pll> point, pll a, pll b){
    loop(i, 0, n, 1)
        if (point[i].ff == (a.ff + b.ff)>>1 && point[i].ss == (a.ss + b.ss)>>1)
            return point[i];
    return {-1, -1};
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    cin >> n;
    vector<pair<long long, long long>> point(n);
    loop(i, 0, n, 1){
        long long x, y;
        cin >> x >> y;
        point[i] = make_pair(x, y);
    }
    long long cnt = 0;
    pll none = {-1, -1};
    loop(i, 0, n, 1)
        loop(j, 1, n, 1){
            pll key = binsearch(point, point[i], point[j]);
            if (key != none && point[i] != point[j] && key != point[i] && key != point[j]){ 
                cnt++;
                cout << binsearch(point, point[i], point[j]).ff << " " << binsearch(point, point[i], point[j]).ss << endl;
            }
        }
    cout << cnt << endl;
    return 0;
}