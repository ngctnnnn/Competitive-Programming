#include <iostream>
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) 
        cin >> a[i];

    int i = 0, maxx = 0;
    while (i < n) {
        if (a[i] >= a[i + 1]) {
            int j = i, cnt = 0;
            while (a[j] >= a[j + 1]){ 
                cnt++;
                ++j;
            }
            i = j;
            maxx = max(cnt + 1, maxx);
        }
        ++i;
    }
    cout << maxx << endl;
}