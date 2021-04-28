#include <iostream>
#include <vector>
#include <fstream>
#define ll long long
using namespace std;

struct node{
    long long val = 0;
    long long lazy = 0;
};

long long n, q;
vector<node> tree(n<<2 + 9);

void update(ll node, ll st, ll end, ll l, ll r, ll x){
    if (tree[node].lazy > 0) {
        tree[node].val += tree[node].lazy;
        if (st != end) {
            tree[node<<1].lazy += tree[node].lazy;
            tree[(node<<1) + 1].lazy += tree[node].lazy;
        }
        tree[node].lazy = 0;
    }

    if (st > end || st > r || end < l) 
        return;

    if (l <= st && end <= r) {
        tree[node].val += x;
        
        if (st != end) {
            tree[node<<1].lazy += x;
            tree[(node<<1) + 1].lazy += x;    
        }
        return;
    }
    update(node<<1, st, (st + end)>>1, l, r, x);
    update((node<<1) + 1, ((st + end)>>1) + 1, end, l, r, x);
    tree[node].val = max(tree[node<<1].val, tree[(node<<1) + 1].val);
}

ll get(ll node, ll st, ll end, ll l, ll r){
    if (st > end || st > r || end < l)
        return -1e18;
    if (tree[node].lazy > 0) {
        tree[node].val += tree[node].lazy;
        if (st != end) {
            tree[node<<1].lazy += tree[node].lazy;
            tree[(node<<1) + 1].lazy += tree[node].lazy;
        }
        tree[node].lazy = 0;
    }
    if (l <= st && end <= r)
        return tree[node].val;

    ll p1 = get(node<<1, st, (st + end)>>1, l, r);
    ll p2 = get((node<<1)+1, ((st + end)>>1) + 1, end, l, r);
    return max(p1, p2);
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    cin >> n >> q;
    while (q--) {
        int b;
        cin >> b;
        if (!b) {
            int x, y, value;
            cin >> x >> y >> value;
            update(1, 1, n, x, y, value);
        }
        else {
            int x, y;
            cin >> x >> y;
            cout << get(1, 1, n, x, y) << endl;
        }
    }
    for (int i = 0; i < (n<<2); ++i)
        cout << tree[i].val << " ";
    cout << endl;
    return 0;
}