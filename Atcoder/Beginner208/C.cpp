#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    long long n, k;     
    pair<long long, long long> a[200009]; 
    long long result[200009]; 

    cin >> n >> k; 
    for(int i = 1; i <= n; ++i) { 
        cin >> a[i].ff; 
        a[i].second = i; 
    }
    sort(a + 1, a + n + 1); 
    for(int i = 1; i <= k % n; ++i) 
        result[a[i].ss] = 1; 
    for(int i = (k % n) + 1; i <= n; ++i) 
        result[a[i].ss] = 0; 
    for(int i = 1; i <= n; ++i) 
        cout << result[i] + (k / n)<< endl;     
    return 0;
}