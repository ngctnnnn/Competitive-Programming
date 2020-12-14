#include <bits/stdc++.h>
using namespace std;
bool correct(long long a){
	string s = to_string(a);
	long long n = s.length();
	for (long long i = 0; i < n; ++i){
		if ((s[i] % 2 == 0 && (i + 1) % 2 == 1) || (s[i] % 2 == 1 && (i + 1) % 2 == 0))
				return false;
	}
	return 1;
}
long long solve(long long l, long long r){
	long long cnt = 0;
	for (long long i = l; i <= r; ++i)
		if (correct(i)){

			cnt++;
		}
	return cnt;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i){
		long long l, r;
		cin >> l >> r;
		int ans = solve(l, r);
		cout << "Case #" << i << ": " << ans << endl;
	}
	return 0;
}
