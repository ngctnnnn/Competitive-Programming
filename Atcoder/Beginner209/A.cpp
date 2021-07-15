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

    int a, b;
    cin >> a >> b;
    if (b >= a)
    cout << (b - a) + 1 << endl;    
    else cout << 0 << endl;
    return 0;
}