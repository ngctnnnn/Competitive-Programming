#include <bits/stdc++.h>
using namespace std;
int scs(long long a){
    int cnt = 0;
    while (a > 0){
        cnt++;
        a/=10;
    }
    return cnt;
}
bool check(long long a, long long s){
    if (scs(a) != scs(s))
        return 0;
    set<char> digit_origin, digit_diff;
    while (a > 0 && s > 0){
        digit_origin.insert(a % 10);
        digit_diff.insert(s % 10);
        a/=10; s/=10;
    }
    if (digit_origin.size() != digit_diff.size())
        return 0;
    set<char> finale;
    for (auto i = digit_origin.begin(); i != digit_origin.end(); ++i)
        finale.insert(*i);
    for (auto i = digit_diff.begin(); i != digit_diff.end(); ++i)
        finale.insert(*i);
    return (finale.size() == digit_origin.size()) ? 1 : 0;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    long long a, s;
    cin >> a >> s;
    long long checksum = s - a;
    if (check(a, checksum))
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}