#include <bits/stdc++.h>
using namespace std;
bool cmp(long long a, long long b){
	return a > b;
}
void solve(long long n, vector<long long> a){
	sort(a.begin(), a.end(), cmp);
	long long ans = -1e9;
	for (long long i = 0; i < n/2; ++i)
		for (long long j = n - 1; j >= n/2 - 1; --j)
			ans = max(ans, __gcd(a[i], a[j]));
	cout << ans << endl;
	return;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);
	long long n;
	cin >> n;
	vector<long long> a(n); 
	for (long long i = 0; i < n; ++i)
		cin >> a[i];
	solve(n, a);
	return 0;
}
