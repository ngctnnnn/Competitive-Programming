#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
#define oo 1e99
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
#define fb(i, a, b, c) for (int i = a; i >= b; i -=c)
using namespace std;
const int MAXX = 1000000009;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n, x;
    cin >> n >> x;
    int a[n];
    f(i, 0, n, 1) cin >> a[i];
    int sum = 0;
    f(i, 0, n, 1) {
        if ((i + 1) & 1)
            sum += a[i];
        else sum += a[i] - 1;
    }    
    cout << ((sum <= x) ? "Yes" : "No") << endl;
    return 0;
}