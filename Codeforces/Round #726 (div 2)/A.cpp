#include <iostream>
#include <fstream>
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];
        int sum = 0;
        
        for (int i = 0; i < n; ++i)
            sum += a[i];
        if (sum < n) {
            cout << 1 << endl;
        }
        else {
            cout << sum - n << endl;
        }
    }      
    return 0;
}