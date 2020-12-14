#include <bits/stdc++.h>
using namespace std;
string operator+ (string a, string b){
	if (a.length() > b.length())
		swap(a, b);
	string ans = "";
	int n1 = a.length(), n2 = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int carry = 0;
	for (int i = 0; i < n1; ++i){
		int sum = ((a[i] - '0') + (b[i] - '0') + carry);
		ans.push_back(sum % 10 + '0');
		carry = sum/10;
	}
	for (int i = n1; i < n2; ++i){
		int sum = (b[i] - '0') + carry;
		ans.push_back(sum % 10 + '0');
		carry = sum/10;
	}
	if (carry)
		ans.push_back(carry + '0');
	reverse(ans.begin(), ans.end());
	return ans;
}
int main () {
	long long n = 12;
	string fibo_curr = "144", fibo_old = "89";	
	while (fibo_curr.length() < 1000){
		n++;
		string fibo_new = fibo_curr + fibo_old;
		string temp = fibo_curr;
		fibo_curr = fibo_new;
		fibo_old = temp;
	}
	cout << n << " " << fibo_curr << endl;
	return 0;
}	
