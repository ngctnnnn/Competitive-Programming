#include <bits/stdc++.h>
using namespace std;
int n;
void solve(){
	if (n % 2 == 1){
		cout << -1 << endl;
		return;
	}
	for (int i = 1; i <= n; i+= 2)
		cout << i + 1 << " " << i << " ";
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen("DEBUG.INP", "r", stdin);

	cin >> n;
	solve();
	return 0;
}
