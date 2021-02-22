#include <bits/stdc++.h>
using namespace std;
int scs(long long n){
	int cnt = 0;
	while (n > 0){
		cnt++;
		n /= 10;
	}
	return cnt;
}
long long luythua(long long a, long long b){
	if (b == 0)
		return 1;
	if (b == 1)
		return a;
	long long sum = 1;
	for (long long i = 1; i <= b; ++i)
		sum *= a;
	return sum;
}
long long change_to_int(long long n){
	long long ans = 0, numLength = scs(n);
	for (long long i = 0; i < numLength; ++i){
		ans += luythua(2, i) * (n % 2);
		n /= 10;
	}
	return ans;
}
void change_to_binary(long long n){
	string ans;
	while (n > 0){
		ans += to_string(n % 2);
		n /= 2;
	}
	for (long long i = ans.length() - 1; i >= 0; --i)
		cout << ans[i];
	cout << endl;
}
void solve(long long n, long long s){
	if (n == 2)
		cout << change_to_int(s) << endl;
	else 
		change_to_binary(s);
}
int main () {
	freopen("DEBUG.INP", "r", stdin);

	long long t;
	cin >> t;
	while (t--){
		long long n, s;
		cin >> n >> s;
		solve(n, s);
	}
	return 0;
}
