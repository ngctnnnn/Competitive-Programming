#include <bits/stdc++.h>
#define ll long long 
using namespace std;
#define N 20100
long long tree[N * 4];
long long a[N];
long long n, q;
void build(long long a[], long long pos, long long left, long long right){
	if (left == right)
		tree[pos] = a[left];
	
	else {
		long long mid = (left + right)/2;
		build(a, pos * 2, left, mid);
		build(a, pos * 2 + 1, mid + 1, right);
		tree[pos] = tree[pos * 2] + tree[pos * 2 + 1];
	}
}

long long get(long long pos, long long left, long long right, long long x, long long y){
	if (left > right || left > y || right < x)
		return -1e9;

	if (x <= left && right <= y)
		return tree[pos];
	
	long long mid = (left + right)/2;
	long long p1 = get(pos * 2, left, mid, x, y);
	long long p2 = get(pos * 2 + 1, mid + 1, right, x, y);
	return max(0LL, p1) + max(0LL, p2);
}
int main () {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);
	
	scanf("%lld%lld", &n, &q);
	
	for (long long i = 0; i < n; ++i)
		scanf("%lld", &a[i]);
	
	build(a, 1, 0, n - 1);
	// for (ll i = 1; i <= n + n - 1; ++i)
	// 	cout << tree[i] << " ";
	// cout << endl;
	while (q--){
		long long x, y;
		scanf("%lld%lld", &x, &y);
		cout << get(1, 1, n, x, y) << endl;
	}
}
