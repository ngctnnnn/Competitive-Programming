#include <bits/stdc++.h>
#define loop(i, a, b, c) for (int i = a; i < b; i += c)
#define ff first 
#define ss second
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int array[n];
        loop(i, 0, n, 1) cin >> array[i];
        map<int, int> a;
        for (auto const &f: array)
            a[f]++;
        bool ok = 1; int ans;
        for (auto i = a.begin(); i != a.end(); ++i)
            if (i->ss == 1){
                ans = i->ff;
                ok = 0;
                break;
            }
        if (ok)   
            cout << -1 << endl;    
        else 
            loop(i, 0, n, 1)
                if (array[i] == ans)
                    cout << i + 1<< endl;
    }
    return 0;
}