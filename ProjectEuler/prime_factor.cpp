#include <bits/stdc++.h>
using namespace std;
bool snt(long long n){
	if (n == 2 || n == 3)
		return 1;
	if (n < 2 && n % 2 == 0)
		return 0;
	for (long long i = 3; i*i <= n; i += 2)
		if (n % i == 0)
			return 0;
	return 1;
}
int main () {
	long long cnt = 10000, sum = 2, max = 2000000;
	long long init = 3;
	while (init + 2 < max){
		if (snt(init)){
			cnt--;
			sum += init;
		//	cout << init << "  ";
			init+=2;
		}
		else 
			init+=2;
	}
	cout << init << endl;
	cout << sum << endl;
	return 0;
}
