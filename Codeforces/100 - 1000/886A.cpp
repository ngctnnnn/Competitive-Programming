#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> a){
    int sum = 0, sum_l = 0, sum_r = 0;
    for (int i = 0; i < 6; ++i)
        if (i < 3)
            sum_l += a[i];
        else 
            sum_r += a[i];

    return (sum_l + sum_r == sum && sum_l == sum_r) ? 1 : 0;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    vector<int> a(6);
    int i = 0, j = 5;
    for (; i < 6; ++i)
        cin >> a[i];

    i = 0;
    sort(a.begin(), a.end());
    

    i = 0;
    for (; i < 6; ++i)
        cout << a[i] << " ";
    cout << endl;    
}