#include <bits/stdc++.h>
using namespace std;
const long long maxx = 1e12 + 7;
bool prime[maxx];
void seive(){
    prime[0] = 0;
    prime[1] = 0;
    for (long long i = 2; i <= maxx; ++i)
        prime[i] = 1;
    for (long long i = 2; i*i <= maxx; ++i)
        if (prime[i])
            for (long long j = i*i; j <= maxx; j+=i)
                prime[j] = 0;
}
bool solve(long long x){
    if (prime[x] || x < 4)
        return 0;
    if (x == 4)
        return 1;
    if (!(x & 1))
        return 0;
    float t = sqrt(x);
    if (ceil(t) == floor(t)){ 
        if (prime[(long long)t])
            return 1;
        else 
            return 0;
    }
    return 0;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    seive();
    while (n--){
        long long x;
        cin >> x;
        cout << (solve(x) ? "YES" : "NO") << endl;
    }
    return 0;
}