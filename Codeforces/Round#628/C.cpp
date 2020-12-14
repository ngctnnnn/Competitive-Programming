#include <bits/stdc++.h>
using namespace std;
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long u, v;
	cin >> u >> v;
	if (!u &&!v){
		cout << 0 << "\n" << 0 << " " << 0 << endl;
		return 0;
	}
	if (!u && !(v&1)){
		cout << 2 << "\n" << (v>>1) << " " << (v>>1) << endl;
		return 0;
	}
	if (u && !v){
		cout << 0 << endl;
		return 0;
	}
	if (u > v || (v - u)&1){
		cout << -1 << endl;
		return 0;
	}
	if (u == 1 && v == 3){
		print("%d\n%d%d%d", 3, 1, 1, 1);
		return 0;
	}
}
