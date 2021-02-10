#include <bits/stdc++.h>
using namespace std;
void solve(long long n, long long k){
    if (n < k || n <= 0 || k <= 0){
        cout << "NO" << endl;
        return;
    }
    long long temp1 = ceil(n*1.0/ k), last = n - (temp1 * (k - 1)), temp2 = floor(n*1.0/k), last2 = n - (temp2 * (k - 1));
    //cout << temp1 << " " << temp2 << endl;
    if ((temp1 & 1 && last & 1)||(!(temp1 & 1)&&!(last & 1))&&last>0&&temp1>0){
        cout << "YES" << endl;
        while (--k)
            cout << temp1 << " ";
        cout << last << endl;
    }
    else if ((temp2 & 1 && last2 & 1) || (!(temp2 & 1) && !(last2 & 1)) && last2 > 0 && temp2 > 0){
        cout << "YES" << endl;
        while (--k)
            cout << temp2 << " ";
        cout << last2 << endl;
    }
    else 
        cout << "NO" << endl;
    
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        long long n;
        long long k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}