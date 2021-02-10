#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; ++i)
        a[i] = 0;
    for (int i = 1; i <= n; ++i){
        int t;
        cin >> t;
        a[t]++;
    }
    for (int i = 1; i <= n; ++i)
        if (a[i] > 0)
            while (a[i]--)
                cout << i << " ";
    cout << endl;
    return 0;
}