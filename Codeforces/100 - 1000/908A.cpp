#include <bits/stdc++.h>
#define loop(a, b, c) for(long long i = a; i < b; i += c)
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string s;
    cin >> s;
    long long n = s.length();
    int cnt = 0;
    loop(0, n, 1){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            cnt++;
        else if (s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9'){ 
            cnt++;
        }
    }
    cout << cnt << endl;
}