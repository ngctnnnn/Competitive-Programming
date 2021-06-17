#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
struct key{
	ll val;
	ll pos;
};
key a[1000009];
bool correct(key x, key y){
	return (x.val + x.pos < y.val + y.pos) ? 1 : 0;
}
void quickSort(key a[], ll l, ll r){
	ll i = l, j = r;
	ll piv = a[(l + r)/2].val;

	while (i <= j){
		while (a[i].val < piv) ++i;
		while (a[j].val > piv) --j;

		if (i <= j){
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (l < j) quickSort(a, l, j);
	if (i < r) quickSort(a, i, r);
}
long long binarySearch(key a[], long long l, long long r, key curr){
	if (r >= l){
		long long mid = (l + r) / 2;
		long long checksum = curr.val + curr.pos - a[mid].val - a[mid].pos;
		if (checksum < 0)
		       return curr.pos;
		
		if (checksum >= 0)
			return binarySearch(a, l, mid - 1, curr);
		return binarySearch(a, mid + 1, r, curr);
	}
	return -1e9;
}
void solve(){
	quickSort(a, 0, n - 1);
	vector<long long> ans;
	ans.clear();
	for (ll i = 0; i < n; ++i)
	{
		long long checksum = binarySearch(a, i, n - 1, a[i]);
		if (checksum != -1e9){
			if (binary_search(ans.begin(), ans.end(), checksum) == false){ 
				ans.push_back(checksum);	
				ans.push_back(a[i].pos);
			}
		}
	}
	for (long long i = 0; i < ans.size(); ++i)
		cout << ans[i] << "  ";
	cout << endl;

	cout << ans.size() << endl;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);

	cin >> n;
	for (long long i = 0; i < n; ++i){
		cin >> a[i].val;
		a[i].pos = i;
	}
	solve();
	return 0;
}
