#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("DEBUG.INP", "r", stdin);

	char c[11], ans[11];
	for (int i = 1; i <= 10; ++i)
		cin >> c[i];
	for (int i = 1; i <= 10; ++i)
		cin >> ans[i];
	int sum = 0;
	for (int i = 1; i <= 10; ++i)
		if (c[i] == '?')
			sum += ans[i] - '0';
	cout << sum << endl;
	return 0;
}
