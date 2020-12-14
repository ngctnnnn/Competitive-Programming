#include <iostream>
#include <set>
#define loop(i, a, b, c) for (int i = a; i < b; i += c)
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n, m;
    cin >> n >> m;
    multiset<int> a;
    loop(i, 0, n , 1){
        int t;
        cin >> t;
        a.insert(t);
    }
    loop (i, 0, m, 1){
        int t;
        cin >> t;
        a.insert(t);
    }
    for (auto const &f: a)
        cout << f << " ";
    cout << endl;
    return 0;
}