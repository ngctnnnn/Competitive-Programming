#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<long long, long long> p, pair<long long, long long> q){
	return p.first < q.first || p.first == q.first && p.second < q.second;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	long long n;
	cin >> n;
	
	vector<pair<long long, long long>> polygon;
	for (long long i = 0; i < n; ++i){
		long long x, y; 
		cin >> x >> y;
		polygon.push_back(make_pair(x, y));
	}
	for (long long i = 0; i < n; ++i)
		cout << polygon[i].first << " " << polygon[i].second << endl;
	return 0;
}

