#include <bits/stdc++.h>
#define ll long long 
using namespace std;
string s;
bool check(string s){
	int n = s.length(), i = 1;
	int cnt = 0;
	while (i < n){
		if (s[i - 1] == s[i])
			cnt++
		else if (cnt < 7)
			return false;
		else 
			cnt = 0;
	}
	return 1;
}	
void solve(){
	int n = s.length();
	if (n <= 8){
		cout << "NO" << endl;
		return;
	}
	if (check(s)){
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
}
int main () {
	ios_bas::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);

	cin >> s;
	solve();
	return 0;
}
