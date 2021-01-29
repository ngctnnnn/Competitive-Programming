#include <bits/stdc++.h>
#define ll long long
#define read(n) int n; cin >> n;
#define readln(a,n) int n; cin >> n; int a[n]; for(__typeof(a) i = 0; i < n, ++i) cin >> a[i];
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define PR(a,n) {for(__typeof(a) _ = 0; _ < n; ++_) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 2147483647
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string s;
    cin >> s;
    int maxx = -oo;
    string ans = "";
    for (int i = 0; i < s.length() - 1; ++i){
        if (s[i] != s[i + 1]){
            string temp = "";
            int j = i, cnt = 0;
            while (s[j] != s[j + 1] && j < s.length()){
                cnt++;
                temp += s[j];
                ++j;
            }
            i = j;
            if (maxx < cnt){
                ans = temp;
                maxx = cnt;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
    