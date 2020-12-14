#include <bits/stdc++.h>
using namespace std;
bool snt(long long x){
	if (x == 2 || x == 3)
		return 1;
	else if (x < 2 || x % 2 == 0)
		return 0;
	else 
		for (long long i = 3; i*i <= x; i += 2)
			if (x % i == 0)
				return 0;
	return 1;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
	freopen("DEBUG.INP", "r", stdin);

	long long l, r;
	cin >> l >> r;

	long long sum = 0;	

	for (long long i = l; i <= r; ++i)
		if (snt(i))
			sum += i;	
	cout << sum << endl;
	return 0;
}
