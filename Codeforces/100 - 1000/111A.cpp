#include <bits/stdc++.h>
using namespace std;
int t;
void solve(){
	while (t--){
		int a, b;
		cin >> a >> b;
		if (a < b){
			cout << b - a << endl;

		}
		else if (a > b){
			cout << b - (a % b) << endl;
		}
		else 
			cout << 1 << endl;
	}
}
int main () {
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 cout.tie(NULL);

	 freopen("DEBUG.INP", "r", stdin);

	 cin >> t;
	 solve();
	 return 0;
}
