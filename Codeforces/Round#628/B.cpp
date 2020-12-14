#include <bits/stdc++.h>
using namespace std;
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	long long t;
	cin >> t;
	while (t--){
		long long n; 
		cin >> n;
		set<long long> a;
		for (long long i = 0; i < n; ++i){
			long long x;
			cin >> x;
			a.insert(x);
		}
		cout << a.size() << endl;
	}
	return 0;
}
