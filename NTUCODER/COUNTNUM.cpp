#include <bits/stdc++.h>
#define loop(i, a, b, c) for(__typeof(a) i=(a), _b=(b), _c=(c); i<_b; i+=_c)
#define loopeach(i, a, b) for(__typeof(a) i = (a), _b=(b); i <_b;++i)
#define loopback(i,a,b,c) for(__typeof(a) i=(a),_b=(b), _c=(c); i>=_b; i-=_c)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long
#define vii vector<pair<int, int>> 
#define vll vector<pair<long long, long long>> 
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define DEBUG(x) { cout << #x << " = "; cout << (x) << endl; }
#define PR(a,n) {loop(_, 0,n, 1) cout << a[_] << ' '; cout << endl; }
#define PR0(a,n) { cout << #a << " = "; REP(_,n) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 1e99

//Power with divide and conquer
template<typename T>
T power(T x, T y){
    if (!y)
        return 1;
    if (y == 1)
        return x;
    if (y & 1)
        return power(x, y/2) * power(x, y/2) * x;
    else
    {
        return power(x, y/2) * power(x, y/2);
    }   
}

//Binary Search
template<typename T>
T bs(T a[], T l, T r, T x){
    T mid = (l + r)/2;
    if (r >= l){
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return (a, l, mid - 1, x);
        return (a, mid + 1, r, x);
    }
    return -1;
}

//Prime check O(sqrt(n)/2)
template<typename T>
bool prime(T x){
    if (x == 2 || x == 3)
        return 1;
    if (x < 2 || !(x & 1))
        return 0;
    for (T i = 3; i*i <= x; i += 2)
        if (x % i == 0)
            return 0;
    return 1;
}

//Prime seive
const long long max_length = 1e7 + 9;
bool prime_seive[max_length]; 
template<typename T>
void seive(T x){
    prime_seive[0] = 0;
    prime_seive[1] = 0;
    loop(i, 2, x + 1, 1)
        prime_seive[i] = 1;
    for (T i = 2; i * i<= x; ++i)
        if (prime_seive[i])
            for (T j = i*i; j <= x; j +=i)
                prime_seive[j] = 0;
}

//factorial
template<typename T>
T giaithua(T n){
    T dp[n + 1];
    dp[1] = 1;
    dp[2] = 2;
    loopeach(i, 3, n + 1)
        dp[i] = dp[i - 1] * dp[i - 2];
    return dp[n + 1];
}

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string s;
    getline(cin, s);
    cin.ignore();
    int cnt = 0;
    loopeach(i, 0, s.length()){
        if (s[i] != ' ' && s[i + 1] == ' ' || s[i - 1] == ' ')
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}



