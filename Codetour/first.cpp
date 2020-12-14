#include <bits/stdc++.h>
using namespace std;
struct stud{
	float val;
	long long pos;
};
void quickSort1(stud a[], long long l, long long r){
	long long i = l, j = r;
	float piv = a[(l + r)/2].val;
	
	while (i <= j){
		while (a[i].val > piv) ++i;
		while (a[j].val < piv) --j;

		if (i <= j){
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (l < j) quickSort1(a, l, j);
	if (i < r) quickSort1(a, i, r);
}
void quickSort2(stud a[], long long l, long long r){
	long long i = l, j = r;
	float piv = a[(l + r)/2].val;
	
	while (i <= j){
		while (a[i].val < piv) ++i;
		while (a[j].val > piv) --j;

		if (i <= j){
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (l < j) quickSort2(a, l, j);
	if (i < r) quickSort2(a, i, r);
}
long long binSearch(stud a[], long long l, long long r, float x){
	if (r >= l){
		long long mid = (l + r) / 2;

		if (a[mid].val == x)
			return mid;
		if (a[mid].val < x)
			return binSearch(a, l, mid - 1, x);
		return binSearch(a, mid + 1, r, x);
	}
	return -1;
}
int main () {
	freopen("DEBUG.INP", "r", stdin);

	long long n, k;
	cin >> n >> k;

	stud a[n], b[n];
	for (long long i = 0; i < n; ++i){
		cin >> a[i].val;
		a[i].pos = i + 1;
	}
	float curr = a[k - 1].val;

	for (long long i = 0; i < n; ++i){
		cin >> b[i].val;
		b[i].pos = i + 1;
	}
	
	quickSort1(a, 0, n - 1);
	quickSort2(b, 0, n - 1);



	long long poss = binSearch(a, 0, n - 1, curr);

	cout << b[poss].pos << " " << b[poss].val << endl;
	return 0;
}	
	

