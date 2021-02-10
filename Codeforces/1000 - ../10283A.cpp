#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;
    set<int> a;
    for (int i = 0; i < k; ++i){
        int t;
        cin >> t;
        a.insert(t);
    }
    if (a.size() == n - 1)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}