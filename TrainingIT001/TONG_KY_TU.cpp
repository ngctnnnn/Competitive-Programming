#include <bits/stdc++.h>
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
    map<char, int> f;
    for (int i = 0; i < s.length(); ++i)
        f[s[i]]++;

    for (auto i: f)
        cout << i.ff << " " << i.ss << endl;
    return 0;
}
