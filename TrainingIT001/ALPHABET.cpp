#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("DEBUG.INP", "r", stdin);
	char c;
	while (cin >> c && c != '+'){
		c -= 32;
		cout << c << endl;
	}
	return 0;
}