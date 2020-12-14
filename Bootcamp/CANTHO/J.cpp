#include <bits/stdc++.h>
#define ll long long
#define loop(i, a, b, c) for (long long i = a; i < b; i += c)
using namespace std;
void createvector(long long m, vector<long long> &a){
    int curr = 1;
    loop(i, 1, m , 1){
        a.push_back(curr); 
        if (curr <= i)
            curr += i;
        else 
            curr-=i;
    }
    a.push_back(curr);
    sort(a.begin(), a.end());
    loop(i, 0, a.size(), 1)
        cout << a[i] << " ";
    cout << endl;
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){
        long long m, n;
        cin >> m >> n;
        vector<long long> a;
        createvector(m, a);
    }
    return 0;
}