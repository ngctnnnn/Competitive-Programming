#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	long long n = s.length() - 1;
	for (long long i = 0; i <= n; ++i)
		if (s[i] != s[n - i])
			return 0;
	return 1;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	string s;
	cin >> s;

	if (check(s))
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}
