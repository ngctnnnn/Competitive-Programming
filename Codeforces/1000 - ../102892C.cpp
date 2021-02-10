#include <bits/stdc++.h>
#define loop(i, a, b, c) for (int i = a; i < b; i += c)
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
 
    int n;
    cin >> n;
    int cnt = 0;
    char c[n];
    loop(i, 0, n, 1)
        cin >> c[i];
    loop(i, 0, n, 1){
        if (c[i] != 'b' && (c[i - 1] == 'a' || c[i + 1] == 'a'))
            c[i] = 'a';
        if (c[n - i - 1] != 'b' && (c[n - i - 2] == 'a' || c[n - i] == 'a'))
            c[n - i - 1] = 'a';
    }
 
    loop(i, 0, n, 1)
        if (c[i] == 'a')
            cnt++;
    cout << cnt << endl;
    return 0;
}