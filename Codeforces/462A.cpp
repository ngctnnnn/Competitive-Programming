#include <bits/stdc++.h>
#define n 6
using namespace std;
int a[n];
void quickSort(int a[], int l, int r){
	int i = l, j = r;
	int piv = a[(l + r) / 2];
	while (i <= j){
		while (a[i] < piv) ++i;
		while (a[j] > piv) --j;

		if (i <= j){
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (l < j) quickSort(a, l, j);
	if (i < r) quickSort(a, i, r);
}
void solve() {
	quickSort(a, 0, n - 1);

	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;

	int sumLeft = a[0], sumRight = a[n - 1];
	int i = 1, j = n - 2;
	while (i <= j){
		cout << i << " " << j << endl;
		cout << sumLeft << " " << sumRight << endl;
		cout << endl;
		if (sumLeft < sumRight){
			sumLeft += a[i];
			++i;
		}
		if (sumLeft == sumRight){
			cout << "YES" << endl;
			return;
		}
		if (sumLeft > sumRight){
			sumRight += a[j];
			--j;
		}
	}
	cout << "NO" << endl;
	return;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	solve();
	return 0;
}
	
