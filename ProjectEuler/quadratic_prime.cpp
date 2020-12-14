#include <bits/stdc++.h>
using namespace std;
bool snt(long long n){
	if (n == 2 || n == 3)
		return 1;
	if (n < 2 || n % 2 == 0)
		return 0;
	for (long long i = 3; i*i <= n; ++i)
		if (n % i == 0)
			return 0;
	return 1;
}
long long quadratic_formula(long long a, long long b){
	long long n = 0;
	while (snt(n*n + a*n + b))
		n++;
	return n;
}
int main () {
	long long a_max, b_max, max_val = -1e9;
	for (long long a = -1000; a <= 1000; ++a){
		for (long long b = -1000; b <= 1000; ++b){
			long long curr = quadratic_formula(a, b);
			cout << a << " " << b << " " << curr << endl;
			if (max_val < curr){
				max_val = curr;
				a_max = a;
				b_max = b;
			}
		}
	}
	cout << a_max << " " << b_max << " " << max_val << endl;
	cout << a_max * b_max << endl;
	return 0;
}
