#include <bits/stdc++.h>
using namespace std;
int n, d;
char c[101];
int dfs(int &pos, int currpos){
	for (int i = currpos + d; i > currpos; --i)
		if (c[i] == '1'){
			pos = i;
			return pos - currpos;
		}
	return -1;
}
void solve(){
	int i = 1, cnt = 0;
	while (i <= n){
		int pos;
		if (dfs(pos, i) == -1){
			cout << -1 << endl;
			return;
		}
		else {
			cnt += dfs(pos, i);
			i = pos;
		}
	}
	cout << cnt << endl;
}
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	cin >> n >> d;
	for (int i = 1; i <= n; ++i)
		cin >> c[i];
	int t = 2000;
	while(t--)
		solve();
	return 0;
}
