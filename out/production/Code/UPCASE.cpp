#include <iostream>
using namespace std;int main() {string s;getline(cin, s);cin.ignore();for (int i = 0; i < s.length(); ++i){if (s[i] <= 'z' && s[i] >= 'a')s[i] -= 32;cout << s[i];}return 0;}