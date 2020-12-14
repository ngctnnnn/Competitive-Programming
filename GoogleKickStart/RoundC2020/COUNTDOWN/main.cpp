#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
const ll mxn = 200009;
ll a[mxn];
long long checksum(ll &cnt, ll pos){
	ll curr = k, i = pos, count = 0;
	while (a[++i] == --curr && curr > 0){
		cout << a[i] << " " << curr << endl;
		count++;
	}	
	if (count + 1 == k)
		cnt++;
	pos = i;
	return pos;	
}
void solve() {
	cin >> n >> k;
	for (ll i = 0; i < n; ++i)
		cin >> a[i];

	ll i = 0, cnt = 0;
	while (i < n){
		if (a[i] == k){
			i = checksum(cnt, i);
		}
		else 
			++i;
	}
	cout << cnt << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i){
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}