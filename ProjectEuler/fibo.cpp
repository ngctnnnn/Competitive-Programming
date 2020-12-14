#include <bits/stdc++.h>
using namespace std;

int main () {
	long long i = 1, sum = 0;
	long long dp[10000];
	dp[0] = 0;
	dp[1] = 1;
	while (dp[i] <= 4000000){
		++i;
		dp[i] = dp[i - 1] + dp[i - 2];
		if (dp[i] % 2 == 0)
			sum += dp[i];			
	}
	cout << sum << endl;
	return 0;
}
