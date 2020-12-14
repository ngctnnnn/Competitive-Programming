#include <bits/stdc++.h>
using namespace std;
int n;
void solve(){
	int sum = 0, max = -9999999;
	while (n--){
		int a, b;
		cin >> a >> b;
		sum -= a;
		sum += b;
		if (sum > max)
			max = sum;	
	}
	cout << max << endl;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen("DEBUG.INP", "r", stdin);

	cin >> n;
	solve();
	return 0;
}
