#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, x;
struct point{
	ll val;
	ll pos;
};
point a[200005];
void quickSort(point a[], ll l, ll r){
	ll i = l, j = r;
	ll piv = a[(l + r)/2].val;
	while (i <= j){
		while (a[i].val < piv) ++i;
		while (a[j].val > piv) --j;

		if (i <= j){
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (l < j) quickSort(a, l, j);
	if (i < r) quickSort(a, i, r);

}
int binSearch(point a[], ll l, ll r, ll x){
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
void solve() {
	quickSort(a, 0, n - 1);
	for (ll i = 0; i < n - 1; ++i){
		ll find = x - a[i].val, pos = binSearch(a, i + 1, n - 1, find);
		if (pos != -1){ 
			cout <<  a[i].pos << " " << pos<< endl; 
			return;
		}
	}
	cout << "IMPOSSIBLE" << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

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