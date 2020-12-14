#include <bits/stdc++.h>
using namespace std;
long long row = -1e9, col = -1e9;
int puzzle[1001][1001];
long long solve(long long n, vector< pair<long long, long long>> coord){
	for (long long i = 1; i <= row; ++i)
		for (long long j = 1; j <= col; ++j)
			puzzle[i][j] = 0;
	puzzle[1][1] = 1;
	puzzle[5][4] = 1;
	for (long long i = 1; i <= row; ++i){
		for (long long j = 1; j <= col; ++j)
			cout << puzzle[i][j] << " ";
		cout << endl;
	}
	return 0;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	int t;
	cin >> t;

	for (long long i = 1; i <= t; ++i){
		long long n;
		cin >> n;
		vector< pair<long long, long long>> coord(n);
		for (int i = 1; i <= n; ++i){
			long long x, y;
			cin >> x >> y;
			row = max(row, x);
			col = max(col, y);
			coord.push_back({x, y});
		}
		long long ans = solve(n, coord);
		cout << "Case #" << i << ": " << ans << endl;
	}
	return 0;
}
