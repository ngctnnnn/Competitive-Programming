#include <bits/stdc++.h>
using namespace std;
long long fibo(long long n){
	long long dp[n + 1];
	dp[0] = 0;
	dp[1] = 1;
	for (long long i = 2; i <= n; ++i)
		dp[i] = dp[i - 1] + dp[i - 2];
	return dp[n];
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("debug.inp", "r", stdin);

	long long n;
	cin >> n;
	cout << fibo(n) << endl;
	return 0;
}
