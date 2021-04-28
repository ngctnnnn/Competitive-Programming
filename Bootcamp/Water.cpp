#include <iostream>
#include <algorithm>
#include <vector>
#define ff first
#define ss second
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.ff < b.ff;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n, m, k;
    cin >> n >> m >> k;

    vector<char> a(n);
    vector<pair<int, int>> b(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    for (int i = 0; i < m; ++i){ 
        cin >> b[i].ff;
        b[i].ss = i + 1;
    }
    
    vector<int> ans(n);
    vector<int> copy(n);
    
    sort(b.begin(), b.end(), cmp);
    int curr = 0;
    for (int i = 0; i < n; ++i) {
        bool match = false;
        
        if (a[i] == 'E') {
            if (b[curr].ff < k) {
                b[curr].ff++;
                ans[i] = b[curr].ss;
            }
            else { 
                sort(b.begin(), b.end(), cmp);
                b[0].ff++;
                ans[i] = b[0].ss;
                curr = 0;
            }
        }
        else {
            sort(b.begin(), b.end(), cmp);
            int pos = -1;
            for (int j = 0; j < m; ++j) {
                if (b[j].ff < k)
                    pos = j;
            }
            b[pos].ff++;
            ans[i] = b[pos].ss;
        }
    }
    for (int i = 0; i < n; ++i)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}