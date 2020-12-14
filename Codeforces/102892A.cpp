#include <bits/stdc++.h>
#define loop(i, a, b, c) for (int i = a; i < b; i += c)
#define ff first
#define ss second
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    int x[n];
    loop(i, 0, n, 1)
        cin >> x[i];
    map<int, int> a;
    for (auto const &f: x)
        a[f]++;
    int cnt = 0;
    for (auto i = a.begin(); i != a.end(); ++i)
        if (i->ss == 1)
            cnt++;
    cout << cnt << endl;
    return 0;
}