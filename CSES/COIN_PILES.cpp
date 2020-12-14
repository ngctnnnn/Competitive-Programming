#include <bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);

    long long t;
    scanf("%lld", &t);
    while (t--){
        long long a, b;
        scanf("%lld%lld", &a, &b);
        if (a == b && b == 0){
            cout << "YES" << endl;
            continue;
        }
        else if (a == b && a % 3 == 0){
            cout << "YES" << endl;
        }
        else if ((a + b) % 3 == 0){
            if (a < b && 2 * a >= b){
                cout << "YES" << endl;
            }
            else if (a > b && 2 * b >= a){
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}