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
const int N = 100005;
vector<int>  a[N];
int visited[N], parent[N], cnt = 0;

void visit(int u){
    visited[u] = ++cnt;
    for (int i = 0; i < a[u].size(); ++i){
        int v = a[u][i];
        if (v != parent[u])
            if (!visited[u]){
                parent[v] = u;
                visit(v);
            }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    read(t);
    while (t--){
        int n, m;
        read(n, m);
        for (int i = 1; i <= m; ++i){
            int p, q;
            read(p, q);
            a[p].push_back(q);
            a[q].push_back(p);
        }
        for (int i = 1; i <= n; ++i)
            if (!visited[i])
                visit(i);
        for (int i = 1; i <= n; ++i)
            cout << visited[i] << " ";
        cout << endl;
    }        

    return 0;
}
    
