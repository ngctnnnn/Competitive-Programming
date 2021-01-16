 #include <bits/stdc++.h>
using namespace std;
template<typename T>
T power(T x, T y){
	if (!y)
		return 1;
	if (y == 1)
		return x;
	if (y & 1)
		return power(x, y/2) * power(x, y/2) * x;
	else
	{
		return power(x, y/2) * power(x, y/2);
	}   
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.length(); ++i)
		if (s[i] == '?')
			cnt++;
	cout << cnt << endl;
	cout << power<long long>(cnt, 4) << endl;
	return 0;
}