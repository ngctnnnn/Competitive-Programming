#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
void solve(int a[], int n){
    unordered_map<int, pair<int, int>> previous;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j){
            int tmp = a[i] + a[j];
            unordered_map<int, pair<int, int>>::iterator x = previous.find(tmp);
            if (x != previous.end()){
                if (i != x->ss.ff && j != x->ss.ss
                    && i != x->ss.ss && j != x->ss.ff){
                    cout << "YES" << endl;
                    cout << x->ss.ff + 1 << " " << x->ss.ss + 1 << " " << i + 1 << " " << j + 1 << endl;
                    return;
                }
            }
            else {
                previous.insert({tmp, {i, j}});
            }
        }
    cout << "NO" << endl;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    solve(a, n);
    return 0;
}
