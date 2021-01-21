#include <bits/stdc++.h>
#define loop(i, a, b, c) for(__typeof(a) i=(a), _b=(b), _c=(c); i<_b; i+=_c)
#define loopeach(i, a, b) for(__typeof(a) i = (a), _b=(b); i <_b;++i)
#define loopback(i,a,b,c) for(__typeof(a) i=(a),_b=(b), _c=(c); i>=_b; i-=_c)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long
#define read(n) int n; cin >> n
#define readln(a,n) int n; cin >> n; int a[n]; loopeach(i, 0, n) cin >> a[i];
#define vii vector<pair<int, int>> 
#define vll vector<pair<long long, long long>> 
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define DEBUG(x) { cout << #x << " = "; cout << (x) << endl; }
#define PR(a,n) {loop(_, 0,n, 1) cout << a[_] << ' '; cout << endl; }
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

    read(n);
    char c[n];
    loopeach(i, 0, n) 
        cin >> c[i];
    map<string, int>  umap;
    int maxx = -oo;
    string s = "", temp = "";
    temp += c[0]; temp += c[1];
    umap.insert({temp, 1});

    for (int i = 1; i < n - 1; ++i){
        string check;
        check +=c[i];
        check+= c[i + 1];
        if (umap.find(check) == umap.end())
            umap.insert({check, 1});
        else { 
            umap.at(check)++;
        }
    }
    int num = maxx; 
    for (auto f : umap){
        num = max(f.ss, maxx);
        if (num != maxx)
            s = f.ff;
        maxx = max(f.ss, maxx);
    }
    if (maxx == -oo)
        cout << c[0] << c[1] << endl;
    else
        cout << s << endl;
    return 0;
}