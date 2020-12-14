#include <bits/stdc++.h>
using namespace std;
long long sqr(long long a){
	return a*a;
}
int main () {
	long long a = 1, b = 1;
	for (long long a = 1; a <= 1000; ++a)
		for (long long b = a; b <= 1000; ++b)
			if (a < b && b < 1000 - a - b && sqr(a) + sqr(b) == sqr(1000 - a - b)){
				cout << a * b * (1000 - a- b) << endl;
				return 0;
			}
	cout << -1 << endl;
	return 0;
}	
