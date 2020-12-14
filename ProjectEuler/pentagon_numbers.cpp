#include <bits/stdc++.h>
using namespace std;
long long f(long long x){
	return x*(3 * x - 1)/2;
}
int main () {
	long long min = 1, max = 1000;
	for (long long i = min; i <= max; ++i){
		long long cnt = 1;
		if (cnt % 10 == 0)
			cout << endl;
		cout << f(i) << " ";
		cnt++;
	}

	cout << endl;
	return 0;
}
