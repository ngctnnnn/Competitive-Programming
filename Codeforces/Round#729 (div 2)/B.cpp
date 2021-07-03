#include <iostream>
#include <vector>
#include <algorithm>
#define ff first
#define ss second
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
using namespace std;
const int maxn = 1000009;
vector<bool> sieve(1000009, 1);
void snt(){
    sieve[1] = 0;
    for (int i = 2; i*i<=maxn; ++i)
        if (sieve[i])
            for (int j = i*i; j <= maxn;j+=i)
                sieve[j]=0;
}
int exec(int n){
    if (n == 1)
        return 2;
    for (int i = 2; i<=maxn;++i){
        if (sieve[i] && n % i != 0)
            return i;
    }
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    int cnt = 0;
    for (int i = 1; i <= maxn; ++i) {
        cnt++;
        cout << exec(i) << " ";
        if (cnt%10==0)cout << endl;
    }
    

    return 0;
}