#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(string s){
	ll n = s.length();
	for (ll i = 0; i < n; ++i)
		if (s[i] == '?')
			executive();
	cout << s ,< endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);

	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		solve(s);
	}
	return 0;
}
