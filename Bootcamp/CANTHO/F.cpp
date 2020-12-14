#include <bits/stdc++.h>
#define loop(i, a, b, c) for (int i = a; i < b; i += c)
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
    int n;
    cin >> n;
    char c[n];
    loop (i, 0, n, 1)
        cin >> c[i];
    
    int cnt =0;
    loop(i, 1, n, 1)
        cnt += (c[i] == c[i - 1] ? 1 : 0);
    cout << cnt << endl;
    return 0;
}