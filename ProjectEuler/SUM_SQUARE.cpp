#include <bits/stdc++.h>
using namespace std;
int main () {
	long long b = ((100 * 101) /2) * ((100 * 101) /2);
	long long a = 1, sum = 0, i = 3, round = 100;
	while (round--){
		cout << a << " ";
		sum += a;
		a += i;
		i += 2;
	}
	cout << endl;
	cout << - sum + b << endl;
	return 0;
}
