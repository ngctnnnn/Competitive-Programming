#include <bits/stdc++.h>
#define ll long long 
using namespace std;
string changeString(ll a){
    string s;
    while (a > 0){
        s += to_string(a % 10);
        a/= 10;
    }
    return s;
}
string operator+(string a, string b){
    string ans;
    int memo = 0;
    for (int i = 0; i < max(a.length(), b.length()); ++i){
        if (i < a.length()) memo += (int)a[i];
        if (i < b.length()) memo += (int)b[i];
        ans += changeString(memo % 10);
        memo /= 10;
    }
    if (memo == 1)
        ans += changeString(memo);
    return ans;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    long long a, b;
    cin >> a >> b;
    cout << a + b;
    return 0;
}
