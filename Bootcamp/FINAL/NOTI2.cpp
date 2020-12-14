#include <bits/stdc++.h>
using namespace std;
struct human{
	long long ff = 0, ss = 0;
};
human all[200009];
typedef pair<long long, long long> pll;
human whosent[200009];
long long n, q;
void query1(long long b, long long c){
	if (all[b].ff == 2 && all[c].ff == 1)
		for (long long i = 1; i <= n; ++i)
			if (all[i].ff == 0 || all[c].ff == 1)
				all[i].ss++;
	if (all[b].ff == 1 && all[c].ff == 2){
		for (long long i = 1; i <= n; ++i)
			if (all[i].ff == 0)
				all[i].ss++;
		all[c].ss++;
	}

}
void query2(long long b, long long c){
	if (all[b].ff == 0 || all[b].ff == 2)
		all[b].ss--;
	else {

		if (whosent[c].ff == 1 && all[whosent[c].ss].ff == 2 && all[b].ff == 1){
			for (long long i = 1; i <= n; ++i)
				if (all[i].ff == 1)
					all[i].ss--;
		}
		else 
			all[b].ss--;

	}
}
void query3(long long b){
	cout << all[b].ss << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

//	freopen("DEBUG.INP", "r", stdin);
	long long t = 1;
	cin >> n >> q;
	for (long long i = 1; i <= n; ++i)
		cin >> all[i].ff;

	while (q--){
		long long a, b;
		cin >> a >> b;
		if (a == 1){
			long long c;
			cin >> c;
			whosent[t].ff = a;
			whosent[t++].ss = b;
			query1(b, c);
		}
		else if (a == 2){
			long long c;
			cin >> c;
			whosent[t].ff = a;
			whosent[t++].ss = b;
			query2(b, c);
		}
		else {
			whosent[t].ff = a;
			++t;
			query3(b);
		}
	}
	return 0;
}
	
