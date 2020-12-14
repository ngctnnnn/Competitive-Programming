#include <bits/stdc++.h>
using namespace std;
int n, t;
char c[55];
void executive(){
	for (int i = 0; i < n - 1; ++i)
		if (c[i] == 'B' && c[i + 1] == 'G')
			swap(c[i], c[i++]);
}
void solve(){
	while (t--)
		executive();
	for (int i = 0; i < n; ++i)
		cout << (char)c[i];
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

//	freopen("DEBUG.INP", "r", stdin);

	cin >> n >> t;
	for (int i = 0; i < n; ++i)
		cin >> c[i];
	solve();
	return 0;
}
