#include <iostream>
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    int t;
    cin >> t;
    while (t--) { 
        int n;
        cin >> n;
        if (n == 1) 
            cout << n << endl;
        else { 
            cout << 1;
            for (int i = 1; i <= n - 1; ++i)
                cout << i + 1;
            for (int i = n; i >= 2; --i)
                cout << i - 1;
            cout << endl;
        }
    }
    return 0;
}