#include <bits/stdc++.h>
using namespace std;
long long solve(long long n, long long k, long long s){
	long long c1 = n + k;
	long long c2 = (n - s) + (2*k - s);
	return c1 <= c2 ? c1 : c2;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

   	long long t;
 	cin >> t;
    	for (long long i = 1; i <= t; ++i){
        	long long n, k, s;
        	cin >> n >> k >> s;
        	long long ans = solve(n, k, s);
        	cout << "Case #" << i << ": " << ans << endl; 
    	}
}
