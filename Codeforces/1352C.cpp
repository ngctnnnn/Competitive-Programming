#include <bits/stdc++.h>
#define loop(i, a, b, c) for (long long i = a; i < b; i += c)
using namespace std;
void solve(long long  n, long double k){
    cout << (long long)k + floor(k/n) + ((n & 1) ? 1 : 0) << endl;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        long long n, k;
        cin >> n >> k;
        if (n > k)
            cout << k << endl;
        if (n == k)
            cout << k + 1 << endl;
        else 
            solve(n, k);
    }
    return 0;
}