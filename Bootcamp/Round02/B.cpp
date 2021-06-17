#include <bits/stdc++.h>
using namespace std; 

void solve(int t) { 
    long long u, v; 
    cin >> u >> v;
    for(int i = 0; i < t; ++i)
    { 
        long long x, y; 
        cin >> x >> y;
        if (x == u || y == v) {
            cout << "divisa" << endl;
            continue;
        }
        if (x > u && y < v) {
            cout << "SE" << endl;
            continue;
        }
        if (x > u && y > v) {
            cout << "NE" << endl;
            continue;
        }
        if (x < u && y < v) {
            cout << "SO" << endl;
            continue;
        }
        if (x < u && y > v) {
            cout << "NO" << endl;
            continue;
        }
    }
}

int main() {
    int t; 
    while (cin >> t)
    { 
        if (t == 0) 
            break; 
        solve(t); 
    }
    return 0;
}