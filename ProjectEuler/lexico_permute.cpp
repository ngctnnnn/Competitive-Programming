#include <bits/stdc++.h>
using namespace std;
long long dp[101];
long long giaiThua(long long n, long long dp[]){
	dp[0] = 0;
	dp[1] = 1;
	for (long long i = 2; i <= n; ++i)
		dp[i] = dp[i - 1] + dp[i - 2];
	return dp[n];
}
int main () {
	long long sum = 0;
	for (int i = 1; i <= 10; ++i)
		sum += giaiThua(i, dp);
	cout << sum + 1 << endl;
	return 0;
}
