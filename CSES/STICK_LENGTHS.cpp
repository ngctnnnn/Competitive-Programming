#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll a[200005];
void quickSort(ll a[], ll l, ll r){
	ll i = l, j = r;
	ll piv = a[(l + r)/2];
	while (i <= j){
		while (a[i] < piv) ++i;
		while (a[j] > piv) --j;

		if (i <= j){
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (l < j) quickSort(a, l, j);
	if (i < r) quickSort(a, i, r);
}
void solve(){
	quickSort(a, 0, n - 1);
	ll mid = a[n /2];
	ll cost = 0;
	for (ll i = 0; i < n; ++i)
		cost += abs(mid - a[i]);
	cout << cost << endl;
	return;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// freopen("DEBUG.INP", "r", stdin);
	// freopen("DEBUG.OUT", "w", stdout);

	scanf("%lld", &n);
	for (ll i = 0; i < n; ++i)
		scanf("%lld", &a[i]);
	solve();
	return 0;
}