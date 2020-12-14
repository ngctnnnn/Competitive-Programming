#include <bits/stdc++.h>
using namespace std;
bool check(long long n){
	for (long long i = 20; i >= 2; --i)
		if (n % i != 0)
			return 0;
	return 1;
}
int main () {
	long long n = 2520;
	while (check(n) != 1){
		n++;
	}
	cout << n << endl;
	return 0;
}
