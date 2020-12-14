#include <bits/stdc++.h>
using namespace std;
void sort(long long a[], long long n){
	for (long long i = 0; i < n; ++i)
		for (long long j = 0; j < n - 1; ++j)
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
}
int main () {
	freopen("DEBUG.INP", "r", stdin);
	long long n;
	cin >> n;
	long long a[n];
	for (long long i = 0; i < n - 1; ++i)
	       cin >> a[i];
	sort(a, n - 1);	
	for (long long i = 0; i < n - 1; ++i)
		if (i + 1 != a[i]){
			cout << i + 1 << endl;
			return 0;
		}
	cout << n << endl;
	return 0;
}

