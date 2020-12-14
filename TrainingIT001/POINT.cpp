#include <bits/stdc++.h>
#define ll long long
#define pff pair<float, float>
#define loop(i, a, b, c) for (long long i = a; i < b; i += c)
#define ff first
#define ss second
using namespace std;
bool check(pff x, pff y, pff z){
    return (x.ff + y.ff == (z.ff*2) && x.ss + y.ss == (z.ss*2)) ? 1 : 0;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    long long t;
    cin >> t;
    while (t--){
        vector<pair<float, float>> a;
        a.clear();
        loop (i, 0 , 3, 1){
            float x, y;
            cin >> x >> y;
            a.push_back(make_pair(x, y));   
        }      
        cout << (check(a[0], a[1], a[2]) || check(a[0], a[2], a[1]) || check(a[1], a[2], a[0]) ? "YES" : "NO") << endl;
    }
    return 0;
}