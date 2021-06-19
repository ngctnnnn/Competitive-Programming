#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        ll i, j;
        ll u1, v1;
        ll u2, v2;
        cin >> n >> m >> i >> j;
        vector<pair<ll, pair<pair<ll, ll>, pair<ll, ll> > > > dp;
        // up
        dp.push_back({i + m, {{1, 1}, {1, m}}});
        // down
        dp.push_back({n - i + 1 + m, {{n, 1}, {n, m}}});
        // left
        dp.push_back({j + n, {{1, 1}, {n, 1}}});
        // right
        dp.push_back({m - j + 1 + n, {{1, n}, {n, m}}});
        // 1
        dp.push_back({i + j + (n - i + 1) + (m - j + 1), {{1, 1}, {n, m}}});
        // 2
        dp.push_back({i + (m - j + 1) + j + (n - i + 1), {{n, 1}, {1, m}}});
        sort(dp.begin(), dp.end());
        cout << dp[5].second.first.first << " " << dp[5].second.first.second;
        cout << " ";
        cout << dp[5].second.second.first << " " << dp[5].second.second.second;
        cout << endl;
    }
}