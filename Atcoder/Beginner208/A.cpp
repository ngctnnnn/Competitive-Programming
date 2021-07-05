#include <iostream>
#include <vector>
#define ff first
#define ss second
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int a, b;
    cin >> a >> b;
    int sum = 0;
    if (a<=b&&b<=6*a)
        cout << "Yes" << endl;
    else 
        cout << "No";

    return 0;
}