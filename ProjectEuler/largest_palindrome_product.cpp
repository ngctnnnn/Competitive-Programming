#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s){
	long long n = s.length() - 1;
	for (long long i = 0; i < n; ++i)
		if (s[i] != s[n - i])
			return 0;
	return 1;
}
string change_to_string(long long n){
	string s;
	while (n > 0){
		s += n % 10;
	        n /= 10;
	}
	return s;
}	
int main () {
	long long ans = -1e9, imax, jmax;
	long long a = 999, b = 999;
	for (long long i = 999; i >= 100; --i)
		for (long long j = 999; j >= 100; --j)	
			if (palindrome(change_to_string(i * j)))
				ans = max(ans, i*j);
	cout << ans << endl;
	return 0;
}

