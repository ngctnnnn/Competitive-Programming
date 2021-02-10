#include <bits/stdc++.h>
using namespace std;
int a, b;
void solve(){
	int cnt = 1;
	while (a <= b){
		a *= 3;
		b *= 2;
		cnt++;
	}
	cout << cnt - 1 << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

//	freopen("DEBUG.INP", "r", stdin);

	cin >> a >> b;
	solve();
	return 0;
}
