#include <bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);
	
	long long n;
	cin >> n;
	while (n--){
		long long x;
		cin >> x;
		solve(x);
	}
	return 0;
}
