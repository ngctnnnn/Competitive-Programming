#include <bits/stdc++.h>
using namespace std;
bool snt(int x){
	if (x == 2 || x == 3)
		return 1;
	if (x % 2 == 0 || x < 2)
		return 0;
	for (int i  = 3; i*i <= x; ++i)
		if (x % i == 0)
			return 0;
	return 1;
}

int main () {
	bool dp[21];
	for (int i = 3; i <= 21; i+=2){
		if (snt(i++) != 0)
			dp[++i] = 0;
		else 
			dp[--i] = 1;
	}
	for (int i = 0; i <= 21; i -=-1)
		cout << dp[i] << " ";
	cout << endl;
	return 0;
}
