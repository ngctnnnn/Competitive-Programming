#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define ff first
#define ss second
#define oo 1e99
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
#define fb(i, a, b, c) for (int i = a; i >= b; i -=c)
using namespace std;
const int MAXX = 1000000007;
long long factorial(int n){
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i)
        dp[i] = (i * dp[i - 1]) % MAXX;
    return dp[n] % MAXX;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
    int n;
    cin >> n;
    unordered_map<int, int> dict;
    f(i,0,n,1){
        int x;
        cin >> x;
        dict[x]++;
    }
    for (auto i : dict) 
        cout << i.ff << " " << i.ss << endl;
    
    long long sum = 0;
    for (auto i : dict) {
        if (i.ss > 1)
            sum += factorial(i.ss);
    }
    cout << sum % MAXX << endl;
    return 0;
}