#include <iostream>
using namespace std;
int main () {
    freopen("DEBUG.INP", "w", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
    for (long long i = 1000000; i <= 1999999; ++i)
        cout << "p" << i << endl;
    for (long long i = 1111; i <= 9999; ++i)
        cout << i << endl;
}