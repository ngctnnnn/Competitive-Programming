#include <bits/stdc++.h>
#define loop(i, a, b, c) for (int i = a; i < b; i += c)
using namespace std;
int maxn = 1e5+9;
vector<int> tree(maxn<<2);
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
    } 
    else {
        int tm = (tl + tr)>>1;
        build(a, v<<1, tl, tm);
        build(a, (v<<1)+1, tm+1, tr);
        tree[v] = tree[v<<1] + tree[(v<<1)+1];
    }
}
void update(int v, int tl, int tr, int l, int r, int add) {
    if (l > r)
        return;
    if (l == tl && r == tr) {
        tree[v] += add;
    } 
    else {
        int tm = (tl + tr)>>1;
        update(v<<1, tl, tm, l, min(r, tm), add);
        update((v<<1)+1, tm+1, tr, max(l, tm+1), r, add);
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n, q, x;
    cin >> n >> q;
    int a[n];
    loop(i, 0, n, 1)
        cin >> a[i];
    
    build(a, n, 0, n - 1);
    while (q-- && cin >> x){
        update(n, 0, q - 1, 0, n - 1, -1);
    }
    loop(i, 0, n, 1)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}