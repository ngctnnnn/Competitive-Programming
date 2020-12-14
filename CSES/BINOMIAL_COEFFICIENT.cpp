#include <bits/stdc++.h>
#define ll long long 
#define NMAX 1000000007
using namespace std;
ll t;
ll giaiThua(ll n, ll dp[]){
	dp[0] = 1;
	dp[1] = 1;
	if (n < 2)
		return 1;
	for (ll i = 2; i <= n; ++i){
		dp[i] = (dp[i - 1] * i) % NMAX;
	//	cout << dp[i] << endl;
	}
	return dp[n] % NMAX;
}
void solve(ll a, ll b){
	ll ts = giaiThua(a);
	ll d = giaiThua(b);
	ll c = giaiThua(a - b);
	ll ms = (ts / (c * d)) % NMAX;
	cout << ms << endl;
}
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	// freopen("DEBUG.INP", "r", stdin);
	// freopen("DEBUG.OUT", "w", stdout);
	ll dp[10000007];
	scanf("%lld", &t);
	while (t--){
		ll a, b;
		
		scanf("%lld%lld", &a, &b);
		solve(a, b, dp);	
	}
	// cout << giaiThua(t) << endl;
	return 0;
}