#include <iostream>
#include <algorithm>
#include <vector>
#define ff first
#define ss second
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n<<1];
        f(i, 0, n<<1, 1) cin >> a[i];
        int even = 0, odd = 0;
        f(i, 0, n<<1, 1) {
            if (a[i] & 1) ++odd;
            else ++even;
        }
        cout << ((odd==even&&even==n) ? "Yes": "No") << endl;
    }        

    return 0;
}