#include <bits/stdc++.h>
using namespace std;
void quickSort(long long a[], long long l, long long r){
    long long i = l, j = r;
    long long piv = a[(l + r)/2];
    while (i <= j){
        while (a[i] < piv) ++i;
        while (a[j] > piv) --j;

        if (i <= j){
            swap(a[i], a[j]);
            ++i;
            --j;
        }
    }
    if (i < r) quickSort(a, i, r);
    if (l < j) quickSort(a, l, j);
}
bool binary_search(long long arr[], long long l, long long r, long long x, long long k){
	if (r >= l) { 
        	long long mid = (l + r)/2;

        	if (x - k <= arr[mid] && arr[mid] <= x + k){ 
        		return 1;
        	}
	        if (arr[mid] > x + k)
        		return binary_search(arr, l, mid - 1, x, k);
        	if (arr[mid] < x - k)
       			return binary_search(arr, mid + 1, r, x, k);
    	}
    return -1;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("DEBUG.INP", "r", stdin);


    long long n, m, k;
    scanf("%lld%lld%lld", &n, &m, &k);

    long long a[n];
    for (long long i = 0; i < n; ++i)
        scanf("%lld", &a[i]);

    long long cnt = 0;
    quickSort(a, 0, n - 1);

    while (m--){
        long long t;
        scanf("%lld", &t);
        if (binary_search(a, 0, n - 1, t, k) == 1){ 
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
