#include <bits/stdc++.h>
#define MAXN 150005
#define ll long long
using namespace std;
ll a[MAXN];
ll st[4*MAXN];
void build(long long a[], int pos, int left, int right){
	if (left == right)
		st[pos] = a[left];
	else {
		long long mid = (left + right)/2;
		build(a, pos * 2, left, mid);
		build(a, pos * 2 + 1, mid + 1, right);
		st[pos] = max(st[pos * 2], st[pos * 2 + 1]);
	}
}
long long get(long long pos, long long left, long long right, long long x, long long y){
	if (left > right || left > y || right < x)
		return -1e9;
	if (x <= left && right <= y)
		return st[pos];

	long long mid = (left + right) / 2;
	long long p1 = get(pos * 2, left, mid , x, y);
	long long p2 = get(pos * 2 + 1, mid + 1, right, x, y);
	return max(0LL, p1) + max(0LL, p2);
}
void solve(long long n){
	long long cnt = 0;
	build(a, 1, 0, n - 1);
	for (long long i = 0; i < n ; ++i)
		if (a[i] < get(1, 0, n - 1, 1, n))
			cnt++;
	cout << cnt << endl;	
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);

	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (long long i = 0; i < n; ++i)
			cin >> a[i];
		solve(n);
	}
	return 0;
}
