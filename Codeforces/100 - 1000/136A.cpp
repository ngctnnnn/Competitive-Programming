#include <bits/stdc++.h>
using namespace std;
int n;
int a[105];
void solve() {
	int na[105];
	for (int i = 0; i < n; ++i)
		na[a[i] - 1] = i + 1;
       	for (int i = 0; i < n; ++i)
		cout << na[i] << " ";
	cout << endl;
}	
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

//	freopen("DEBUG.INP", "r", stdin);

	cin >> n;
	for (int i = 0 ; i < n; ++i)
		cin >> a[i];
	solve();
	return 0;
}
