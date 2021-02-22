#include <bits/stdc++.h>
using namespace std;
int main () {
	long long n;
	cin >> n;
	long long t, sum = 0;
	for (long long i = 0; i < n; ++i){
		cin >> t;
		if (t > 0 && t % 2 == 0)
			sum += t;
	}
	cout << sum << endl;
	return 0;
}
	
