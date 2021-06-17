#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n, t, id;
    cin >> n >> t >> id;
    vector<int> point(n);
    int point_task = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            if (!x)
                point_task++;
        }
        point[i] = point_task;
    }
    sort(point.begin(), point.end());
    for (int i = 0; i < n; ++i) {
        
    }
}