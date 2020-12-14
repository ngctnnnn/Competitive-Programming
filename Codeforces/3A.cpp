#include <bits/stdc++.h>
using namespace std;
int chess[8][8];
queue<int> q;
int free[8];
void solve();
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	
	string a, b;
	cin >> a >> b;
	for (int i = 1; i <= 8; ++i)
		for (int j = 1; j <= 8; ++j)
			chess[i][j] = 0;
	int x1 = (int)a[0] - 'a', x2 = (int)b[0] - 'a';
	int y1 = a[1] - '0', y2 = b[1] - '0';
	chess[x1 + 1][8 - y1 + 1] = 1;
       	chess[x2 + 1][8 - y2 + 1] = 2;	
	solve();
	return 0;
}
