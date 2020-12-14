#include <bits/stdc++.h>
using namespace std;
int main () {
	long long maxx = 503, i = 2, sum = 1;
	while (maxx > 1){
		maxx--;
		sum += i;
		i++;
	}
	cout << sum << endl;
	return 0;
}
