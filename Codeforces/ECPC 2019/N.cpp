#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("equal.in", "r", stdin);
    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    while (n--){
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b || b == c || a == c)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}