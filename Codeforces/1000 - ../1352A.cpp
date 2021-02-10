#include <bits/stdc++.h>
using namespace std;
int scs(int n){
	int cnt = 0;
	while (n > 0){
		n/=10;
		cnt++;
	}
	return cnt;
}
int pow(int a, int b){
	if (b == 0) return 1;
	if (b == 1) return a;
	if (b & 1)
		return pow(a, b>>1) * pow(a, b>>1) * a;
	else 
		return pow(a, b>>1) * pow(a, b>>1);
}
void solve(int n){
	int temp = n, s = 0, cnt = 0;
	vector<int> ans;
	ans.clear();
	while (temp > 0){
		if (temp % 10 != 0)
			cnt++;
		ans.push_back((temp % 10) * pow(10, s++));
		temp/=10;
	}
	cout << cnt << endl;
	for (int i = ans.size() - 1; i >= 0; --i)
		if (ans[i] != 0)
			cout << ans[i] << " ";
	cout << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		solve(n);
	}
	return 0;
}