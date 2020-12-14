#include <bits/stdc++.h>
using namespace std;
void solve(long long x1, long long y1, long long x2, long long y2){
	long long dist1 = abs(x1 - x2), dist2 = abs(y1 - y2);
		
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	int t;
	cin >> t;
	while (t--){
		long long x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		solve(x1, y1, x2, y2);
	}
	return 0;
}
