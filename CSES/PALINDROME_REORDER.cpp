#include <iostream>
#include <vector>
#include <unordered_map>
#include <deque>
#define ff first
#define ss second
#define f(i, a, b, c) for (int i = a; i < b; i +=c)
using namespace std;
int main () {
    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);
    
    string s;
    cin >> s;

    unordered_map<char, int> dict;
    for (char c : s)
        if (dict.find(c) != dict.end())
            dict.find(c)->ss++;
        else 
            dict.insert({c, 1});
    int cnt = 0;

    deque<char> ans;
    for (auto i : dict)
        if (i.ss & 1) { 
            cnt++;
            f(j, 0, i.ss, 1) ans.push_back(i.ff);
        }

    if ((!(s.length() & 1) && cnt > 0) || ((s.length() & 1) && cnt > 1)) {
        cout << "NO SOLUTION";
        return 0;
    }

    for (auto i : dict)
        if (!(i.ss & 1))
            f(j, 0, i.ss, 2) {
                ans.push_back(i.ff);
                ans.push_front(i.ff);
            }    

    while (!ans.empty()) {
        cout << ans.front();
        ans.pop_front();
    }
    
    return 0;
}