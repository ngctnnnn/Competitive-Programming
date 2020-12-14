#include <bits/stdc++.h>
using namespace std;
int main () {
	long long maxx = 1e9, space = 10001;
	vector<bool> seive(1e9);
	for (long long i = 0; i <= 1e9; ++i)
		seive[i] = 1;
	seive[0] = 0;
	seive[1] = 0;
	long long pos = 0;
	while (seive.size() < 10001){
		for (long long i = 2; i*i <= maxx; ++i){
			if (seive[i] == 1)
				for (long long j = i*i; j <= maxx; j+=i)
					seive[i] = 0;
			pos = i;
		}
	}
	cout << seive[pos] << endl;	
	return 0;
}

