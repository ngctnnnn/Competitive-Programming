#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        cout << (a ^ b) << endl;
    }
    return 0;
}