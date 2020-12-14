#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("names.txt", "r", stdin);
	vector<string> name;
	string s;
	while (1){
		getline(cin, s);
		cin.ignore();
		if (s == ", ")
			continue;
		if (s == "0")
			break;
		else 
			name.push_back(s);
	}
	cout << name.size() << endl;
	return 0;
}
