#include <bits/stdc++.h>
#define ll long long 
using namespace std;
struct point{
	ll val;
	ll pos;
};
ll n, x;
point a[5005];
void quickSort(point a[], ll l, ll r){
	ll i = l, j = r;
	ll piv = (l + r)/2;
	while (i <= j){
		while (a[i].val < a[piv].val) ++i;
		while (a[j].val > a[piv].val) --j;

		if (i <= j){
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (l < j) quickSort(a, l, j);
	if (i < r) quickSort(a, i, r);
}
ll binSearch(point a[], ll l, ll r, ll x){
	if (r >= l){
		ll mid = (l + r)/2;
		if (a[mid].val == x)
			return a[mid].pos;
		if (a[mid].val > x)
			return binSearch(a, l, mid - 1, x);
		return binSearch(a, mid + 1, r, x);
	}
	return -1;
}
void solve(){
	quickSort(a, 0, n - 1);
	for (ll i = 0; i < n; ++i)
		for (ll j = i + 1; j < n; ++j)
			ll find = x - a[i].val - a[j].val;
			ll key = binSearch(a, 0, n - 1, find);
			if (key != -1 && a[i].pos != a[j].pos && a[i].pos != key && a[j].pos != key){
				cout << a[i].pos << " " << a[j].pos << " " << key << endl;
				return;
			}
		}
	cout << "IMPOSSIBLE" << endl;
	return;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	// freopen("DEBUG.INP", "r", stdin);
	// freopen("DEBUG.OUT", "w", stdout);

	scanf("%lld%lld", &n, &x);
	for (ll i = 0; i < n; ++i){
		scanf("%lld", &a[i].val);
		a[i].pos = i + 1;
	}
	solve();
	return 0;
}