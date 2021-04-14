#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
using namespace std;
void PR(vector<pair<int, int>> a, int n){
    for (int i = 0; i < n; ++i)
        cout << a[i].ff << " ";
    cout << endl;
    for (int i = 0; i < n; ++i)
        cout << a[i].ss << " ";
    cout << endl;
}
bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
    if (a.ff.ss < b.ff.ss) 
        return 1;
    if (a.ff.ss == b.ff.ss && a.ff.ff > b.ff.ff)
        return 1;
    return 0;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i].ff.ff;
    int tmp = 1;
    for (int i = 0; i < n; ++i) { 
        cin >> a[i].ff.ss;
        a[i].ss = tmp++;
    }
    sort(a.begin(), a.end(), cmp);    
    
    int day = 1, total = 0;
    // PR(a, n);
    for (int i = 0; i < n; ++i){ 
        total += a[i].ff.ff * ((day - 1) + a[i].ff.ss);
        // cout << a[i].ff << " * " << day - 1 + a[i].ss << endl; 
        day+=a[i].ff.ss;
    }
    cout << total << endl;
    for (int i = 0; i < n; ++i)
        cout << a[i].ss << " ";
    cout << endl;
    return 0;
}