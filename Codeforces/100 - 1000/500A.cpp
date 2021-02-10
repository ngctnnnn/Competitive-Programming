#include <bits/stdc++.h>
#define ll long long 
using namespace std;
long long n, t;
long long a[30009];
void solve(){
	ll pos = 1;
//	cout << pos << " ";
	while (pos <= t){
		if (pos == t){
			cout << "YES" << endl;
			return;
		}
		pos = pos + a[pos];
	//	cout << pos << " ";
	}
//	cout << endl;
	cout << "NO" << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

//	freopen("DEBUG.INP", "r", stdin);

	cin >> n >> t;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	solve();
	return 0;
}
