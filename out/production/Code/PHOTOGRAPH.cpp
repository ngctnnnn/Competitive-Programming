#include <bits/stdc++.h>
using namespace std;
void sort(long long a[], long long n){
	for (long long i = 0; i < n; ++i)
		for (long long j = 0; j < n; ++j)
		       if (a[i] < a[j])
			swap(a[i], a[j]);
}	
int main () {
	freopen("DEBUG.INP", "r", stdin);

	long long n, t;
	cin >> n >> t;
	while (t--){
		long long a[n];
		for (long long i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, n);
		for (long long i = 0; i < n; ++i)	
			cout << c[i] << " ";
		cout << endl;
	}
	return 0;
}
