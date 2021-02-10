#include <bits/stdc++.h>
#define loop(i, a, b, c) for (int i = a; i < b; i += c)
#define ff first
#define ss second
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string s;
    cin >> s;
    map<char, int> a;
    int n = s.length();
    for (auto const &f: s)
        a[f]++;
    
    int maxx = -1e9; char cmaxx;
    auto i = a.rbegin();
    cmaxx = i->ff;
    maxx = i->ss;
    while (maxx--)
        cout << cmaxx;
    cout << endl;
    return 0;
}