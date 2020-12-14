 #include <bits/stdc++.h>
using namespace std;
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.length(); ++i)
		if (s[i] == '?')
			cnt++;
	cout << cnt << endl;
	return 0;
}