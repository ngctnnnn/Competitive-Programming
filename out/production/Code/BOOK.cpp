#include <bits/stdc++.h>
using namespace std;
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	long long n;
	cin >> n;
	if (n == 0){
		cout << -1 << endl;
		return 0;
	}
	long long max_pos = -1e9, max_val = -1e9;
	for (long long i = 1; i <= n; ++i){
		long long t;
		cin >> t;
		max_val = max(max_val, t);
	       	if (max_val == t)
			max_pos = i;
	}
	cout << max_pos << endl;
	return 0;
}
