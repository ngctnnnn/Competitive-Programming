#include <bits/stdc++.h>
using namespace std;
int solve(string s){
	int year = 10 * (s[0] - '0') + (s[1] - '0');
	int now = 1000*(s[4] - '0') + 100*(s[5] - '0') + 10*(s[6] - '0') + (s[7] - '0');
	return now + (year - 15)*10000;
}
int main () {
	freopen("DEBUG.INP", "r", stdin);
	string s;
	while (cin >> s && s != "-1"){
		if (s.length() != 8)
			cout << "NO" << endl;
		else {
			cout << "YES" << " - ";
			cout << solve(s) << endl;
		}
	}
	return 0;
}
