#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#define ff first
#define ss second
#define pii pair<int, int>
#define f(i, a, b, c) for (int i = a; i < b; i += c)
using namespace std;
bool cmp(pii a, pii b){
    return a.ff < b.ff;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);

    int n, m, k;
    cin >> n >> m >> k;

    vector<char> a(n);
    vector<pii> b(m);

    f(i, 0, n, 1) 
        cin >> a[i];
    
    f(i, 0, m, 1){ 
        cin >> b[i].ff;
        b[i].ss = i + 1;
    }

    vector<int> ans;
    f(i, 0, n, 1)
        if (a[i] == 'E') {
            int curr = 0;
            if (b[curr].ff < k) {
                b[curr].ff++;
                ans.push_back(b[curr].ss);
                continue;
            }
            else { 
                sort(b.begin(), b.end(), cmp);
                b[0].ff++;
                ans.push_back(b[0].ss);
                curr = 0;
                continue;     
            }
        }

        else {
            sort(b.begin(), b.end(), cmp);
            int curr = b.size() - 1;
            while (b[curr].ff == k)
                --curr;
            b[curr].ff++;
            ans.push_back(b[curr].ss);
        }
    f(i, 0, ans.size(), 1) cout << ans.at(i) << " "; cout << "\n";
    return 0;
}