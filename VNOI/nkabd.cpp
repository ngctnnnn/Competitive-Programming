#include <iostream>
#include <fstream>
using namespace std;
int divisor(int x){
    int sum = 0;
    for (int i = 1; i < x; ++i)
        if (x % i == 0) {   
            sum += i; 
            // cout << i << " + ";
        }
    return sum;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int l, r;
    cin >> l >> r;
    int cnt = 0;
    for (int i = l; i <= r; ++i)
        if (divisor(i) > i){ 
            cnt++;
            // cout << i << endl;
            // cout << divisor(i) << endl;
        }
    cout << cnt << endl;
}