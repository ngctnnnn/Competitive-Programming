#include <bits/stdc++.h>
#define ll long long
#define loop(i, a, b, c) for (long long i = a; i < b; i += c)
using namespace std;
void solve(char c[], long long n){
    ll curr = 0, maxx = -1e9, i = 0;
    while (i < n){ 
        while (c[i] < c[++i]){
            curr++;
        }
        maxx = max(maxx, curr);
    }
    cout << maxx << endl;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

   // freopen("collectingofficer.in", "r", stdin);
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        char c[n];
        loop(i, 0, n, 1)
            cin >> c[i];
        solve(c, n);
    }
    return 0;
}
