#include <bits/stdc++.h>
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;//participant
    cin >> n;

    int b;//budget
    cin >> b;
    
    int h;//hotel
    cin >> h;
    
    int w; // week
    cin >> w;
    
    int min_sum = 1e9;
    for (int i = 0; i < h; ++i){
        int p; //price
        cin >> p;
        // cout << "Price: " << p << endl;
        int tmp = 0;

        bool flag = 1;
        for (int j = 0; j < w; ++j){ 
            int a;
            cin >> a; //available bed
            if (j + 1 == w) { 
                if (a < n) {
                    flag = 0;
                }
            }
        }
        tmp = p * n;
        // cout << tmp << endl;
        if (tmp > 0 && tmp <= b && flag)
            min_sum = min(min_sum, tmp);
    }
    if (min_sum == 1e9){
        cout << "stay home" << endl;
    }
    else {
        cout << min_sum << endl;
    }
    return 0;
}