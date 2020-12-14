#include <bits/stdc++.h>
using namespace std;
long long maxx = 1000000007;
long long divNConque(long long x, long long n){
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    else 
        if (n % 2 == 0){ 
            long long ans = divNConque(x, n/2);
            return (ans * ans % maxx) % maxx;
        }
        else {
            long long ans = divNConque(x, n - 1);
            return x * ans % maxx;
        }
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);

    long long t;
    scanf("%lld", &t);
    while (t--){
        long long a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        long long expo = divNConque(b, c);
        cout << divNConque(a, expo) << endl;
    }
}