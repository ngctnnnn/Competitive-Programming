#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
#define oo 1e99
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
#define fb(i, a, b, c) for (int i = a; i >= b; i -=c)
using namespace std;
const int MAXX = 1000000007;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
    int n;
    cin >> n;

    long long cnt = 0; 
    long long result = 1; 

    vector<long long> a(n); 
    f(i, 0, n, 1) cin >> a[i];
    
    sort(a.begin(), a.end()); 
    
    f(i, 0, n, 1) {  
        if (a[i] - cnt <= 0) { 
            cout << 0 << endl; 
            return 0; 
        }

        result = result * (a[i] - cnt);
        result = result % MAXX; 
        cnt += 1; 
    }
    cout << result;

    return 0;
}