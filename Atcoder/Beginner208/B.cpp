#include <iostream>
#include <vector>
#define ff first
#define ll long long
#define ss second
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    int dp[11];

    long long value = 1; 
    for(int i = 1; i <= 10; ++i) { 
        value = value * i; 
        dp[i] = value;  
    } 
    
    long long i = 0;
    long long pos = 10; 
    while (n != 0 && pos > 0) {  
        while (n - dp[pos] >= 0) { 
            n -= dp[pos]; 
            ++i; 
        } 
        --pos; 
    }  
    cout << i; 
    return 0;
}