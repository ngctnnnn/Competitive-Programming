#include <bits/stdc++.h>
using namespace std;
long long maxx = 1000000007;
long long divNConque(long long x, long long n){
    if (n == 1)
        return x;
    else 
        if (n % 2 == 0)
            return divNConque(x, n/2) * divNConque(x, n/2) % maxx;
        else 
            return divNConque(x, n/2) * divNConque(x, n/2) * x % maxx;
}
int main () {
    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);
    long long n;
    scanf("%lld", &n);
    cout << divNConque(2, n) << endl;
    return 0;
}