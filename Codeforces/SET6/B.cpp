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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string s, b;
    cin >> s >> b;
    deque<char> a;
    for (int i = 0; i < s.length(); ++i)    
        a.push_back(s[i]);
    for (int i = 0; i < b.length(); ++i){
        deque<char>::iterator itr = find(a.begin(), a.end(), b[i]);
        if (itr != a.end()){
            for (auto j = a.begin(); j != itr; ++j)
                a.pop_front();
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
    
