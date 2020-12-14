#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll a[21];
void quickSort(ll a[], int l, int r){
	int i = l, j = r;
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
void solve(ll a[]){
	quickSort(a, 0, n - 1);
			
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%lld", &a[i]);

	solve(a);
	return 0;
}