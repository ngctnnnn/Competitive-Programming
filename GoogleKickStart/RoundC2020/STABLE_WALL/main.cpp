#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int r, c;
const int mxn = 31;
char a[mxn][mxn];
void solve(){
	cin >> r >> c;
	for (int i = 1; i <= r; ++i)
		for (int j = 1; j <= c; ++j)
			cin >> a[i][j];
	set<char> character;
	for (int j = 1; j <= c; ++j)
		character.insert(a[0][j]);
	for (int i = 2; i <= r; ++i)
		for (int j = 1; j <= c; ++j){
			if (!(character.find(a[i][j]) != character.end())){
				cout << -1 << endl;
				return;
			}
		}
	for (auto i = character.rbegin(); i != character.rend(); ++i)
		cout << *i;
	cout << endl;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	freopen("DEBUG.INP", "r", stdin);

	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i){
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}
