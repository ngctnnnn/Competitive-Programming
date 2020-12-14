#include <bits/stdc++.h>
#define ll long long 
using namespace std;
string s;
void solve() {
	long long n = s.length();
	cout << n * (n - 1) % 10000009 << endl;
}	
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(nullptr);

//	freopen("DEBUG.INP", "r", stdin);

	cin >> s;
	
	solve();
	return 0;
}
