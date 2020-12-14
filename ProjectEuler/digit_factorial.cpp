#include <bits/stdc++.h>
using namespace std;
long long dp[101];
string operator+(string a, string b){
	if (a.length() > b.length())
		swap(a, b);
	string ans = "";
	int n1 = a.length(), n2 = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int carry = 0;
	for (int i = 0; i < n1; ++i){
		int sum = (a[i] - '0') + (b[i] - '0') + carry;
		ans.push_back(sum % 10 + '0');
		carry = sum/10;
	}
	for (int i = n1; i < n2; ++i){
		int sum = (b[i] - '0') + carry;
		ans.push_back(sum % 10 + '0');
		carry = sum / 10;
	}
	if (carry)
		ans.push_back(carry + '0');
	reverse(ans.begin(), a.end());
	return ans;
}
bool correct(long long n){
	long long sum = 0, curr = n;
	while (n > 0){
		sum = sum + dp[n % 10];
		n /= 10;
	}
	cout << curr << " " << sum << endl;
	return curr == sum ? 1 : 0;
}
int main () {
	dp[1] = 1;
	for (int i = 2; i <= 11; ++i)
		dp[i] = dp[i - 1] * i;
	long long i = 12;
	while (i <= 100000000){
		if (correct(i))
			cout << i << endl;
		++i;
	}
	return 0;
}
