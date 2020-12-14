#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, x;
ll a[200005];
void quickSort(long long a[], long long l, long long r){
	long long i = l, j = r;
	long long piv = a[(l + r)/2];

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
	for (ll i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
	
	ll sum = 0, cnt = 1;
	for (ll i = 0; i < n; ++i){			
		if (sum + a[i] > x){
			cnt++;
			sum = a[i];
		}
		else 
			sum += a[i];
		cout << i + 1<< " :" << sum << endl;
	}
	cout << cnt << endl;
}
int main () {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	scanf("%lld%lld", &n, &x);
	for (ll i = 0; i < n; ++i)
		scanf("%lld", &a[i]);

	solve();
	return 0;
}