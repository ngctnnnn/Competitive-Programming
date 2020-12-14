#include <bits/stdc++.h>
using namespace std;
#define INF 99999999999
void quickSort(long long a[], long long l, long long r){
	long long i = l, j = r;
	long long piv = a[(l + r)/2];

	while (i <= j){
		while (a[i] < piv) ++i;
		while (piv < a[j]) --j;

		if (i <= j){
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (i < r) quickSort(a, i, r);
	if (l < j) quickSort(a, l, j);
}
void executive(long long a[], long long n, long long x){
	quickSort(a, 0, n - 1);
	long long sum = 0, lidx = -1, ridx = -1;
	
	long long i = 0, j = n - 2;
	sum = abs(a[i] + a[j] - sum);
	while (i < n){
		if (i != j && abs(a[i] + a[j] - x) < sum){
			i++;
			sum = abs(a[i] + a[j] - x);
		}
		else if (abs(a[i] + a[j] - x) < sum)
			--j;
		
	}
	cout << a[lidx] << " " << a[ridx] << endl;
}
int main () {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	long long n, x;
	scanf("%lld%lld", &n, &x);

	long long a[n];
	for (long long i = 0; i < n; ++i)
		scanf("%lld", &a[i]);
	executive(a, n, x);
	return 0;
}