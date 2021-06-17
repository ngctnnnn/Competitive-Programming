#include <bits/stdc++.h>
#define ff first
#define ss second 
using namespace std;
void PR(pair<char, char> x[], int s){
    for (int i = 0; i < s; ++i)
        cout << x[i].ff << " " << x[i].ss << "\n";
    // cout << endl;
}
int number(char c) {
    if ((int)('2') <= (int)(c) <= (int)('9'))
        return (int)(c) - '0';
    if (c == 'T')
        return 10;

    if (c == 'J')
        return 11;
    if (c == 'Q')
        return 12;
    if (c == 'K')
        return 13;
    if (c == 'A')
        return 14;
}
int symbol(char c) {
    if (c == 'C') return 3;
    if (c == 'B') return 2;
    if (c == 'R') return 1;
    if (c == 'N') return 0;
}
bool cmp(pair<char, char> a, pair<char, char> b){
    if (number(a.ff) > number(b.ff))
        return !1;
    if (number(a.ff) == number(b.ff) && symbol(a.ss) > symbol(b.ss))
        return !1;
    return !0;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        pair<char, char> adam[x + 1], eva[x + 1];
        for (int i = 0; i < x; ++i)
            cin >> adam[i].ff >> adam[i].ss;
        
        for (int i = 0; i < x; ++i)
            cin >> eva[i].ff >> eva[i].ss;

        sort(adam, adam + x, cmp);
        sort(eva, eva + x, cmp);
        // PR(adam, x);
        // PR(eva, x);
        int score = 0, j = 0;
        for (int i = 0; i < x; ++i) {
            // int j = i;
            while (j < x) {
                // cout << j << " " << i << endl;
                // cout << eva[j].ff << eva[j].ss << " " << adam[i].ff << adam[i].ss << endl;
                if (!cmp(eva[j], adam[i])){ 
                    score++;
                    break;
                    // cout << score << endl;
                }
                ++j;
            }
            
        }
        cout << score << endl;
        
    }
    return 0;
}
