#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll n, k;
void solve(){
	while (k--){
		if (n % 10 == 0)
			n /= 10;
		else 
			n--;
	}
	cout << n << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen("DEBUG.INP", "r", stdin);

	cin >> n >> k;
	solve();
	return 0;
}
