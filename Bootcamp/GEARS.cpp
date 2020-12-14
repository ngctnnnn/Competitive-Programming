#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("DEBUG.INP", "r", stdin);

	long long a, b;
	cin >> a >> b;
	long long x;
	if (a >= b)
		x = a - b;
	else 
		x = b - a;
	cout << x << endl;
	return 0;
}

