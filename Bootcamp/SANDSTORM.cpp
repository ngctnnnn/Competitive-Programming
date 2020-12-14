#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("DEBUG.INP", "r", stdin);

	int a, b, k, ans;
	cin >> a >> b;
	k = b - a;
	ans = b - k*(k + 1)/2;
	cout << ans << endl;
	return 0;
}
