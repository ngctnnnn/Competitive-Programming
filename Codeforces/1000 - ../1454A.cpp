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
        int n;
        cin >> n;
        if (n & 1){
            loop(i, 0, n - 3, 2)
                cout << i + 2 << " " << i + 1 << " ";
            cout << n << " " << n - 2 << " " << n - 1 << endl; 
        } 
        else {
            loop(i, 0, n, 2)
                cout << i + 2 << " " << i + 1 << " ";
            cout << endl;
        }
    }
    return 0;
}