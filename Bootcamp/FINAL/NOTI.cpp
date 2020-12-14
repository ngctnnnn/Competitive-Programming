#include <bits/stdc++.h>
using namespace std;

struct human{
	long long ff = -1, ss = -1;
};
typedef pair<long long, long long> pll;
human hieutruong;
human hocsinh[200009], giaovien[200009];
long long n, q;
long long all[200009];
vector<long long> whosent;
void query1(long long b, long long c){
	if (all[b] == 2 && all[c] == 1){
		hieutruong.ss++;
		for (long long i = 1; i <= n; ++i){
			if (giaovien[i].ff != -1)
				giaovien[i].ss++;
		}
	}
	if (all[b] == 1 && all[c] == 2){
		hieutruong.ss++;
		for (long long i = 1; i <= n; ++i){
			if (hocsinh[i].ff == c)
				hocsinh[i].ss++;
		}
	}
}
void query2(long long b, long long c){
	if (all[b] == 0)
		hieutruong.ss--;
	if (all[b] == 1)
		for (long long i = 1; i <= n; ++i)
			giaovien[i].ss--;
	if (all[b] == 2)
		for (long long i = 1; i <= n; ++i)
			hocsinh[i].ss--;
}
void query3(long long b){
	if (all[b] == 0)
		cout << hieutruong.ss << endl;
	if (all[b] == 1)
		cout << giaovien[b].ss << endl;
	if (all[b] == 2)
		cout << hocsinh[b].ss << endl;
}
int main () {
        ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	freopen("DEBUG.INP", "r", stdin);
	cin >> n >> q;
	long long b, c;
	whosent.clear();
	for (long long i = 1; i <= n; ++i){
		long long t;
		cin >> t;
		all[i] = t;
		if (t == 0){
			hieutruong.ss = 0;
			hieutruong.ff = i;
		}
		if (t == 1){
			giaovien[i].ff = i;
			giaovien[i].ss = 0;
		}
		else {
			hocsinh[i].ff = i;
			hocsinh[i].ss = 0;
		}
	}

	while (q--){
		long long a;
		cin >> a >> b;
		if (a == 1){
			cin >> c;
			query1(b, c);
		}
		else if (a == 2){
			cin >> c;
			query2(b, c);
		}
		else 
			query3(b);
	}

	return 0;
}
