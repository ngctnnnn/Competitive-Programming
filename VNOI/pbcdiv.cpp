#include <iostream>
#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i += c)
using namespace std;
ll count(ll n){
        return n/12 + n/30 - 2 * (n/60);
}
int main () {
        int t;
        cin >> t;
        while (t--) {
               ll x, y;
               cin >> x >> y;
               cout << count(y) - count(x - 1) << endl;
        }
        return 0;
}
