#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll a[100009];
void solve() {
	vector<ll> ans;
	ans.clear();
	ll lf, rt;
	long long min = -1e9;
	ll i = 0;
	while (i < n){
		ll j = i, newmin = -1e9;
		if (a[j] >= a[j - 1]){
			lf = a[j - 1];
			while (a[j] > lf){
				ans.push_back(a[j]);
				++j;
			}
			newmin = ans.size();
			if (min < newmin){
				min = newmin;
				rt = *ans.end();
			}
			i = j + 1;
		}
		else 
			++i;
	}
	cout << lf << " " << rt << " " << min << endl;
	for (ll t = 0; t < ans.size(); ++t)
		cout << ans[t] << " ";
	cout << endl;
}		

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	scanf("%lld", &n);
	for (ll i = 0; i < n; ++i)
		scanf("%lld", &a[i]);
	int step = 2000;
	while (step--)
		solve();
	return 0;
}
