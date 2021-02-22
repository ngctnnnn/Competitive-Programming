#include <bits/stdc++.h>
#define ll long long
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
typedef std::pair<int, int> pii;
typedef std::pair<long long, long long> pll;
typedef std::vector<std::pair<int, int>> vii;
typedef std::vector<std::pair<long long, long long>> vll;
using namespace std;
bool ok = 1;
const int oo = 2147483647;
inline void PR(int a[], int n){
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
}
inline void read(int &n){
    cin >> n;
}
inline void read(int &n, int &m){
    cin >> n >> m;
}
inline void read(int &n, int &m, int &x){
    cin >> n >> m >> x;
}
inline void read(int a[], int n){
    for (int i = 0; i < n; ++i)
        cin >> a[i];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll a, b, u, v;
    cin >> a >> b >> u >> v;
    bool ok = (u*2 == a) && (v*2== b);     
    long double temp = (a*1.0 * b*1.0)/2;
    cout << fixed << setprecision(1) << temp << " " << ok << endl;
    return 0;
}
    
