#include <bits/stdc++.h>
using namespace std;
struct man{
	int val;
	bool visited = false;
};
int n, m;
man a[105], b[105];
void quickSort(man a[], int l, int r){
	int i = l, j = r;
	int piv = a[(l + r)/2].val;
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
void solve(){
	quickSort(a, 1, n);
	quickSort(b, 1, m);
	int cnt = 0;
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= m; ++j)
			if (abs(a[i].val - b[j].val) <= 1 && a[i].visited == false && b[j].visited == false){
				cnt++;
//				cout << a[i].val << " " << a[j].val << endl;
				a[i].visited = true;
				b[j].visited = true;
			}
	}
	cout << cnt << endl;
}	
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

//	freopen("DEBUG.INP", "r", stdin);

	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> a[i].val;

	cin >> m;
	for (int i = 1; i <= m; ++i)
		cin >> b[i].val;
	solve();
	return 0;
}
