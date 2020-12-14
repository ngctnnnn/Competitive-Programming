#include <bits/stdc++.h>
using namespace std;
int main () {
//	freopen("DEBUG.INP", "r", stdin);

	long long n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	int min = *min_element(a.begin(), a.end());
	long long sum = 0;
	for (int i = 0; i < n; ++i)
		sum += (a[i] & 1) ? a[i] : a[i] - 1;	
	if (n & 0)
		sum -= min;
	cout << sum << endl;
	return 0;
}
