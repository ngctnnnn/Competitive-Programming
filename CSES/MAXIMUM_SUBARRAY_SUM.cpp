#include <bits/stdc++.h>
#define ll long long 
#define NMax 200025
using namespace std;
ll n;
ll a[200005], dp[200005];
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
	if (i < r) quickSort(a, i, r);
	if (l < j) quickSort(a, l, j);
}
void solve(){
	dp[0] = 0;
	ll cnt = 0;
	for (ll i = 1; i <= n; ++i){
		dp[i] = dp[i - 1] + a[i];
		if (a[i] < 0)
			cnt++;
	}
	if (cnt == n){
		quickSort(a, 1, n);
		cout << a[n] << endl;
		return;
	}
	ll maxsum = -1e9, fmin = 0;
	for (ll i = 1; i <= n; ++i){
		fmin = min(fmin, dp[i]);
		maxsum = max(maxsum, dp[i] - fmin);
	}
	cout << maxsum << endl;
	return;
}
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// freopen("DEBUG.INP", "r", stdin);
	// freopen("DEBUG.OUT", "w", stdout);

	scanf("%lld", &n);
	for (ll i = 1; i <= n; ++i)
		scanf("%lld", &a[i]);
	solve();
	return 0;
}
