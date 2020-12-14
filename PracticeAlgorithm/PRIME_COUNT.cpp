#include <bits/stdc++.h>
using namespace std;
bool checkSNT(long long x){
	if (x == 2 || x == 3)
		return 1;
	else if (x < 2 || x % 2 == 0)
		return 0;
	else
		for (int i = 3; i*i <= x; i += 2)
			if (x % i == 0)
				return 0;
	return 1;
}
void solve(long long l, long long r){
	long long cnt = 0, cntEverything = 0;
	for (long long i = l; i <= r; ++i)
		if (checkSNT(i)){ 
			cnt++;
			//cntEverything++;
		}
	cout << cnt << endl;
	return;
}
int main () {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	clock_t start = clock();
	int t;
	scanf("%d", &t);

	while (t--){
		long long l, r;
		scanf("%lld%lld", &l, &r);

		solve(l, r);
	}

	printf("Time use: %.10fs\n", (float)(clock() - start)/CLOCKS_PER_SEC);
	return 0;
}
