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
    
    long long cnt = 0, i = 0, j = n - 1;
    while (a[i] <= a[i + 1] && i < n - 1){
        cnt++;
        ++i;
    }
    while (a[j] <= a[j - 1] && j > 0){
        cnt++;
        --j;
    }
    cnt += 2;
    if (cnt > n){
        cout << n << endl;
    }
    else 
        cout << cnt << endl;
    return 0;
}