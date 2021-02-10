#include <bits/stdc++.h>
#define loop(i, a, b, c) for (int i = a; i < b; i += c)
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m], cnt = 0;
        loop(i, 0, n, 1)
            cin >> a[i];
        loop(i, 0, m, 1)
            cin >> b[i];
        loop(i, 0, n, 1)
            loop(j, 0, m, 1)
                if (a[i] == b[j])
                    cnt++;
        cout << cnt << endl;
    }
    return 0;
}