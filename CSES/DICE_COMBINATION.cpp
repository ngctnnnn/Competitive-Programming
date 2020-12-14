#include <bits/stdc++.h>
using namespace std;
long long maxx = 1000000007;
long long divNConque(long long x, long long n){
	if (n == 1)
		return x;
	else {
		if (n % 2 == 0){ 
			long long ans = divNConque(x, n / 2);
			return (ans * ans % maxx) % maxx;
		}
		else {
			long long ans = divNConque(x, n - 1);
			return x * ans % maxx;
		}

	}
}
long long count(long long n){
	dp[6] = 32;
	
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	long long n;
	scanf("%lld", &n);
	if (n == 1 || n == 2){
		cout << n << endl;
		return 0;
	}
	if (n < 7)
		cout << divNConque(2, n - 1);
	return 0;
}