#include <bits/stdc++.h>
using namespace std;
long long rule(long long maxx){
	long long cnt = 0;
	while (maxx != 1){
		if (maxx & 1)
			maxx = maxx * 3 + 1;
		else 
			maxx >>= 1;
		cnt++;
	}
	return cnt;
}
int main () {
	long long maxx = -1e9, max_i;
	for (long long i = 1000; i <= 1000000; ++i){
			if (maxx < rule(i)){
			maxx = rule(i);
			max_i = i;
		}
	}
	cout << max_i << " " << maxx << endl;
	return 0;
}
