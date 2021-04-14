#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string a;
    cin >> a;

    vector<string> ans;    

    vector<char> st(a.length());
    for (int i = 0; i < a.length(); ++i)
        st[i] = a[i];
    sort(st.begin(), st.end());
    do {
        string tmp = "";
        for (int i = 0; i < st.size(); ++i)
            tmp += st[i];
        ans.push_back(tmp);
        // cout << endl;
    } while(next_permutation(st.begin(), st.end()));
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i)
        cout << ans[i] << endl;
    return 0;
}