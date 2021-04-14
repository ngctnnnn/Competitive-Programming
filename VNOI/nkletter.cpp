#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main () {
    // ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEUBG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl;
    int i = s1.length() - 1, j = 0;
    string tmp1 = "", tmp2 = "";
    while (tmp1 != tmp2) {
        tmp1 += s1[i--];
        tmp2 += s2[j++];
    }
    cout << tmp1 << endl;
    cout << s1.length() + s2.length() - tmp1.length() << endl;
    return 0;
}