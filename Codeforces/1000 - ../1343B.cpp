#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(long long n){
	ll init_even = 2, sum_even = 0, sum_odd = 0;
	for (ll i = 1; i <= n/2; ++i){
		sum_even += init_even;
		cout << init_even << " ";
		init_even+=2;
	}
	ll init_odd = 1;
	for (ll i = 1; i < n/2; ++i){
		sum_odd += init_odd;
		cout << init_odd << " ";
		init_odd += 2;
	}
	cout << sum_even - sum_odd;
	cout << endl;
}
bool check(long long n){
	if (n < 4)
		return 0;
	if (n % 4 != 0)
		return 0;
	return 1;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	//freopen("DEBUG.INP", "r", stdin);
	//freopen("DEBUG.OUT", "w", stdout);

	long long t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		if (!check(n)){
			cout << "NO" << endl;
			
		}
		else {
			cout << "YES" << endl;
			solve(n);
		}
	}
	return 0;
}