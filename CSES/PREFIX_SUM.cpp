#include <bits/stdc++.h>
using namespace std;
int main () {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		for (int i = s.length() - 1; i >= 0; --i)
			cout << s[i];
		cout << endl;
	}
	return 0;
}