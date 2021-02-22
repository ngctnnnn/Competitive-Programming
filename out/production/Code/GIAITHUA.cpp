#include <bits/stdc++.h>
using namespace std;
long long mul(long long a, long long b){
	long long sum = a;
	for (long long i = 1; i < b; ++i)
		sum += a;
	return sum;
}
long long giaithua(long long n){
	long long sum = 1;
	for (long long i = 2; i <= n; ++i)
		sum = mul(sum, i);
	return sum;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	long long n;
	cin >> n;
	cout << giaithua(n) << endl;
	return 0;
}
