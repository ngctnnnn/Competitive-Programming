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

    int n, a, x, y; 
    int sum = 0;

    cin >> n >> a >> x >> y; 
    f(i, 1, n + 1, 1) { 
        if (i <= a)
            sum += x; 
        else 
            sum += y;
    }
    cout << sum;

    return 0;
}