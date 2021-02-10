#include <bits/stdc++.h>
#define loop(i, a, b, c) for(int i = a; i < b; i += 1)
using namespace std;
void solve(int a[], int b[], int n){
    int cnt = 0;
    loop (i, 0, n, 1)
        if (a[i] != b[i]){ 
            cnt = abs(a[i] - b[i]);
            break;
        }
    int ok = 2;
    for (int i = 0; i < n - 1 && ok > 0; ++i){
        if (a[i] != b[i] && abs(a[i] - b[i]) == cnt){ 
            if (a[i + 1] != b[i + 1])
                ok;
            else
                ok--;
        }
        else if (abs(a[i] - b[i]) != cnt){
            cout << "NO" << endl;
            return;
        }
        if (a[i] == b[i])
            continue;
    }
    cout << (ok > 1 ? "YES" : "NO") << endl;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n], b[n];
        loop(i, 0, n, 1)
            cin >> a[i];
        loop(i, 0, n, 1)
            cin >> b[i];
        solve(a, b, n);
    }
    return 0;
}