#include <iostream>
using namespace std;
int main () {
    int c, n;
    cin >> c >> n;
    int a[n], maxx = -99999999999;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int mask = 0; mask < (1 << n); ++mask) {
        int tmp = 0;
        for (int i = 0; i < n; ++i) {
            if ((mask>>i) & 1)
                tmp += a[i];
        }
        if (tmp <= c)
            maxx = max(maxx, tmp);
    }
    cout << maxx;
}