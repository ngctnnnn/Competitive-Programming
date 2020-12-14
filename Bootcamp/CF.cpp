#include <bits/stdc++.h>
using namespace std;
stringstream ss;
int main () {
	freopen("DEBUG.INP", "r", stdin);

	string s;
	cin >> s;
	int ls = s.size();
	char c = s[ls - 1];
	if (c >= '0')
	       	c -= 32;
	s.erase(ls - 1, 1);
	float r;
	ss << s;
	ss >> r;
	if (c == 'C'){
		r = r * 1.8 + 32;
		c = 'F';
	}
	else {
		r = (r - 32)/1.8;
		c = 'C';
	}
	cout << fixed << setprecision(2) << r << c << endl;
}
