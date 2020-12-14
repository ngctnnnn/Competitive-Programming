#include <bits/stdc++.h>
using namespace std;
int main () {
    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);

    long long n;
    scanf("%lld", &n);
    if (n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    long long even = 2, odd = 1, cnt = 0;
        while(cnt < n){
            if (even <= n){ 
                cout << even << " ";
                even += 2;
            }
            else if (odd <= n){
                cout << odd << " ";
                odd += 2;
            }
        ++cnt;
        }
    cout << endl;
    return 0;
}