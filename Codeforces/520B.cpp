#include <bits/stdc++.h>
using namespace std;
int n, m;
void solve(){
	int cnt = 0;
	while (n != m) {
		if (n < m)
			n *= 2;
		else 
			n--;
		cnt++;
	}
	cout << cnt << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);

	cin >> n >> m;
	solve();
	return 0;
}
