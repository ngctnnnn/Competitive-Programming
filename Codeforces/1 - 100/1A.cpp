#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    long long n, m, a;
    cin >> n >> m >> a;
    cout << n * m / (a * a) << endl;
    cout << (n * m) / (a * a) + 1 << endl;
    return 0;
}