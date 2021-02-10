#include <bits/stdc++.h>
using namespace std;
string s;
bool check(int cnt){
	if (cnt < 4)
		return 0;
	while (cnt > 0){
		int temp = cnt % 10;
		if (!(temp == 4 || temp == 7))
			return 0;
		cnt /= 10;
	}
	return 1;
}
void solve(){
	int cnt = 0;
	int n = s.length();
	for (int i = 0; i < n; ++i)
		if (s[i] == '4' || s[i] == '7')
			cnt++;
	if (check(cnt))
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

//	freopen("DEBUG.INP", "r", stdin);

	cin >> s;
	solve();
	return 0;
}
