#include <bits/stdc++.h>
#define ll long long
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
typedef std::pair<int, int> pii;
typedef std::pair<long long, long long> pll;
typedef std::vector<std::pair<int, int>> vii;
typedef std::vector<std::pair<long long, long long>> vll;
using namespace std;
bool ok = 1;
const int oo = 2147483647;
inline void PR(int a[], int n){
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
}
inline void read(int &n){
    cin >> n;
}
inline void read(int a[], int n){
    for (int i = 0; i < n; ++i)
        cin >> a[i];
}
//Prime sieve
const long long max_length = 1e7 + 9;
bool prime_sieve[max_length]; 
template<typename T>
void sieve(T x){
    prime_sieve[0] = 0;
    prime_sieve[1] = 0;
    for (T i = 2; i < x + 1; ++i)
        prime_sieve[i] = 1;
    for (T i = 2; i * i<= x; ++i)
        if (prime_sieve[i])
            for (T j = i*i; j <= x; j +=i)
                prime_sieve[j] = 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, cnt = 0, maxx = -oo;
    read(n); read(m);
    int a[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m;++j){
            read(a[i][j]);
            maxx = max(maxx, a[i][j]);
        }   
    sieve<int>(maxx);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j){
            if (prime_sieve[a[i][j]])
                cnt++;
        }
    cout << cnt << endl;

    return 0;
}
    
