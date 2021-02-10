#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
void solve() {
	ll mid = n / 2;
	if (n % 2 == 0){
		if (k <= (n / 2)){
			cout << 2 * k - 1 << endl;
			return;
		}
		else {
			cout << (k - n/2 - 1) + (k - n/2) + 1;
			return;
		}
	}
	else {
		if (k <= (n / 2 + 1)){
			cout << 2 * k - 1 << endl;
			return;
		}
		else {
			cout << (k - n/2 - 1) + (k - n/2 - 2) + 1;
			return;
		}	
		}
}
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

//	freopen("DEBUG.INP", "r", stdin);
//	freopen("DEBUG.OUT", "w", stdout);

	scanf("%lld%lld", &n, &k);
	solve();
	return 0;
}
