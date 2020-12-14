#include <bits/stdc++.h>
using namespace std;
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	freopen("debug.inp", "r", stdin);

	long long n;	
	cin >> n;
	long long sum = 0;
	for (long long i = 3; i < n; ++i)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	cout << sum << endl;
	return 0;	
}	
