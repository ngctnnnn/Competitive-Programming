#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("DEBUG.INP", "r", stdin);

	int n, m;
	cin >> n;
	vector<pair<int, string>> tx(n), pz(n), fr(n);
	string name;
	int taxi, pizza, friends;
	int max_tx = 0, max_pz = 0, max_fr = 0;
	auto get_type = [&](string s){
		if (s[0] == s[1] && s[1] == s[3] && s[3] == s[4] && s[4] == s[6] && s[6] == s[7])
			return 0;
		if(s[0] > s[1] && s[1] > s[3] && s[3] > s[4] && s[4] > s[6] && s[6] > s[7])
				return 1;
		return 2;
	};

	auto get_static = [&](){
		cin >> m >> name;
		taxi = 0; pizza = 0; friends = 0;
		vector<string> ds(m);
		for (string &x:ds) cin >> x;
		sort(ds.begin(), ds.end());

		int it;
		it = unique(ds.begin(), ds.end()) - ds.begin();
		ds.resize(it);

		for (string x:ds){
			int t = get_type(x);
			if (t == 0) 
				++taxi;
			else 
				if (t == 1)
					++pizza;
				else 
					++friends;
		}
	};
	
	for (int i = 0; i < n; ++i){
		get_static();
		tx[i] = {taxi, name};
		pz[i] = {pizza, name};
		fr[i] = {friends, name};
		max_tx = max(max_tx, taxi);
		max_pz = max(max_pz, pizza);
		max_fr = max(max_fr, friends);
	}

	cout << "Taxi: ";
	int k = 0;
	for (auto x:tx)
		if (x.first== max_tx){
			if (k++)
				cout << ", ";
			cout << x.second;
		}
	cout << "." << endl;
	cout << "Pizza: ";
	k = 0;
	for (auto x:pz)
		if (x.first == max_pz){
			if (k++) 
				cout << ", ";
			cout << x.second;
		}
	cout << "." << endl;
	k = 0;
	cout << "Friends: ";
	for (auto x:fr)
		if (x.first == max_fr){
			if (k++)
				cout << ", ";
			cout << x.second;
		}
	cout << "." << endl;
	return 0;
}