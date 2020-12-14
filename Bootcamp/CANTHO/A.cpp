#include <iostream>
#define loop(i, a, b, c) for (int i = a; i < b; i += c)
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << n << endl;
        if (n == 1){
            cout << 1 << endl;
            continue;
        }
        if (n & 1){
            loop(i, 1, n - 1, 1)
                cout << i << " ";
            cout << n << endl;
        }
        else {
            loop(i, 1, n, 1)
                cout << i << " ";
            cout << n << endl;
        }
    }
    return 0;
}