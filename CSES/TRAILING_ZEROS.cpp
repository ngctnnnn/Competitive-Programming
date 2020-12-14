#include <bits/stdc++.h>
using namespace std;
long long trailingZeros(long long n){
    long long cnt = 0;
    for (long long i = 5; n / i >= 1; i *= 5)
        cnt += n/i;
    return cnt;
}
int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("DEBUG.INP", "r", stdin);
    //freopen("DEBUG.OUT", "w", stdout);

    long long n;
    scanf("%lld", &n);
    cout << trailingZeros(n) << endl;
    return 0;
}