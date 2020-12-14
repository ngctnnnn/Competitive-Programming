#include <bits/stdc++.h>
using namespace std;
bool check(long long n){
	while (n > 10){
		int x = n % 10;
		if (x != 2 && x != 3 && x != 5 && x != 7)
			return 0;
		n /= 10;
	}
	if (n != 3 && n != 7)
		return 0;
	return 1;
}
int main () {
	long long n = 100;
	for (long long i = 11; i <= n; ++i){
	//	cout << i << endl;	
		if (check(i)){
			cout << i << endl;
		}
	}
	return 0;
}
