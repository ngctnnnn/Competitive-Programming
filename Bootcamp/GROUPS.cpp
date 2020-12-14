#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("DEBUG.INP", "r", stdin);

	int n;
	cin >> n;
	vector<int> a, b;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	sort(a.begin(), a.end());
	int ans = 0, p = 0;
	b[0] = 1;;
	floor (int i = 1; i < n; ++i)
		if (a[i] == a[p]) ++b[p];
		else {
			a[++p] = a[i];
			b[p] = 1;
		}
	int m = p, g;
	for (int i = 1; i <= p; ++i)
		if (a[i] > a[i - 1] + 1){
			ans += b[i - 1];
			b[i - 1] = 0;
		}
		else {
			g = min(b[i], b[i - 1]);
			ans += g;
			b[i] -= g;
			b[i - 1] -= g;
		}
	for (int i = 0; i <= p; ++i)
		if (b[i] > 0)
			ans += b[i];
	cout << ans << endl;
	return 0;
}	
