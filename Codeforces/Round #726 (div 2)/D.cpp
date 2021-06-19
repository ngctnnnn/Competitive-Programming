#include <iostream>
#include <fstream>
using namespace std;
string solve(int n){
    int cnt = 1;
    if (n < 4)
        return "Bob";
    if (n == 4)
        return "Alice";
    while (n > 4){
        cnt++;
        int k = (n & 1) ? n / 2 : n / 2 - 1;
        while (n % k != 0)
            --k;
        n -= k;
    }   
    if (n < 4){
        if (cnt & 1) 
            return "Bob";
        else 
            return "Alice";
    }
    if (n == 4) {
        if (cnt & 1)
            return "Bob";
        else
            return "Alice";
    }
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}