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
inline void read(int a[], int n){
    for (int i = 0; i < n; ++i)
        cin >> a[i];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j){ 
            long long x;
            cin >> x;
            long long t = sqrt(x);
            if (trunc(t) * trunc(t) == x)
                cnt++;    
        }
    cout << cnt << endl;
    return 0;
}
    
