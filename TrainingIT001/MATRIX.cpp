#include <bits/stdc++.h>
#define loop(i, a, b, c) for (int i = a; i <= b; i += c)
using namespace std;
int main () {

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    if (c1 != r2){
        cout << -1 << endl;
        return 0;
    }
    int a[r1 + 1][c1 + 1], b[r2 + 1][c2 + 1];
    loop (i, 1, r1, 1)
        loop (j, 1, c1, 1)
            cin >> a[i][j];
            
    loop (i, 1, r2, 1)
        loop(j, 1, c2, 1)
            cin >> b[i][j];
            
    int ans[r1][c2];
    loop(i, 1, r1, 1)
        loop (j, 1, c2, 1){
            ans[i][j] = 0;
            loop (t, 1, r2, 1)
                ans[i][j] = a[i][t] * b[t][j];
        }
    loop(i, 1, r1, 1){ 
        loop (j, 1, c2, 1)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}