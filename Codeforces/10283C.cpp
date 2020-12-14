#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; ++i)
        cin >> a[i];
    
    sort(a, a + n);
    long long med = a[n>>1], cnt = 0;
    for (long long i = 0; i < n; ++i)
        cnt += abs(med - a[i]);
    cout << cnt << endl;
    return 0;
}