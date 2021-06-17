#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("DEBUG.INP", "r", stdin);

	long long n, h;
	cin >> n >> h;
	long long t = 0, min = 0, max = 0;
	while (n--){
		char c;
		int x;
		cin >> c >> x;
		if (c == 'u') t+= x;
		if (c == 'd') t-= x;
		if (t > max) max = t;
		if (t < min) min = t;
		max += -min + 1;
	
	}
	if (max > h) 
		cout << 0 << endl;
	else 
		cout << h + 1 - max << endl;
	return 0;
}

