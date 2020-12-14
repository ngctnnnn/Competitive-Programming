#include <bits/stdc++.h>
#define ll long long
#define loop(i, a, b, c) for (long long i = a; i < b; i += c)
using namespace std;
bool check(string s){
    ll n = s.length();
    loop(i, 1, n, 1)
        if ('A' > s[i] || s[i] > 'Z')
            return 0;
    return 1;
}
void change(string &s){
    ll n = s.length();
    if ('A' <= s[0] && s[0] <= 'Z')
        s[0] += 32;
    else   
        s[0] -= 32;
    loop (i, 1, n, 1)
        s[i] += 32;    
    cout << s << endl;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string s;
    cin >> s;

    if (check(s))
        change(s);
    else 
        cout << s << endl;
    return 0;
}