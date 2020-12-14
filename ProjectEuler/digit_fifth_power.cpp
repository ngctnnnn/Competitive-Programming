#include <bits/stdc++.h>
using namespace std;
long long power(long long a, long long b){
	if (b == 0)
		return 1;
	if (b == 1)
		return a;
	if (b % 2 == 0)
		return power(a, b/2) * power(a, b/2);
	else 
		return power(a, b/2) * power(a, b/2) * a;
}
bool check(long long n){
	long long sum = 0, curr = n;
	while (n > 0){
		sum += power((n % 10), 5);
		n /= 10;
	}
	return sum == curr ? 1 : 0;
}
int main () {
	long long a = 2, b = 9999999, cnt = 0;
	for (long long i = a; i <= b; ++i)
		if (check(i)){
			cnt+= i;
			cout << i << " ";
		}
	cout << endl;
	cout << cnt << endl;
	return 0;
}
