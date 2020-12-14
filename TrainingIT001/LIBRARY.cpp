#include <bits/stdc++.h>
using namespace std;
long long check(string s, string a[], long long n){
	for (long long i = 0; i < n; ++i)
		if (a[i] == s)
			return i;
	return -1;
}
int main () {
	freopen("DEBUG.INP", "r", stdin);
	long long n, t;
	cin >> n >> t;

	string a[n], b[t];
	for (long long i = 0; i < n; ++i)
		cin >> a[i];

	for (long long i = 0; i < t; ++i){
		cin >> b[i];
		long long ans = check(b[i], a, n);
		if (ans != -1)
			cout << ans + 1 << endl;
		else 
			cout << -1 << endl;	
	}
	return 0;
}

	
