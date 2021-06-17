#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    int cnt = 0;
    while (t--){
        cnt++;
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i ) cin >> a[i];
        cout << "Case " << cnt << ": "  << *max_element(a.begin(), a.end()) << endl;
    }
}