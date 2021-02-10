#include <bits/stdc++.h>
using namespace std;
int n;
void solve(){
	int cnt = 0;
	while (n--){
		int p, q;
		cin >> p >> q;
		cnt += (q - p >= 2) ? 1 : 0;
	}
	cout << cnt << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

//	freopen("DEBUG.INP", "r", stdin);

	cin >> n;
	solve();
	return 0;
}
