#include <bits/stdc++.h>
#define ll long long
#define L [i][j - 1]
#define R [i][j + 1]
#define U [i - 1][j]
#define D [i + 1][j]
using namespace std;
ll m, n, st, en;
char c[1001][1001];
bool satisfy(ll i, ll j){
	return (c[i][j] == 'B') ? 1 : 0;
}
void solve() {

}
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	scanf("%lld%lld", &m, &n);

	for (ll i = 0; i < m; ++i)
		for (ll j = 0; j < n; ++j)
			cin >> c[i][j];

	for (ll i = 0; i < m; ++i){ 
		for (ll j = 0; j < n; ++j)
			cout << c[i][j] << " ";
		cout << endl;
	}
	cout << st << " " << en << endl;
	solve();
	return 0;
}