#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
#define oo 1e99
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
#define fb(i, a, b, c) for (int i = a; i >= b; i -=c)
using namespace std;
const int MAXX = 1000000009;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    int cnt = 0;
    string s;
    cin >> s;
    f(i,0,s.length(),1){
        // cout << s[i];
        if (s[i] == '1') {
            if (cnt % 2 == 0) { 
                cout << "Takahashi";return 0;}
            else { 
                cout << "Aoki"; return 0;}
            }
        
        ++cnt;
    }

    return 0;
}