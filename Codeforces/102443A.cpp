#include <bit/stdc++.h>
using namespace std;
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	int min = *min_element(a.begin(), a.end());
	for (int i = 0; i < n; ++i)
		if (a[i] & 1)
			sum += a[i]
		else 
			sum += a[i] - 1;
	
