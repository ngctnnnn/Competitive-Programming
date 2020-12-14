#include <bits/stdc++.h>
using namespace std;
string s;
void quickSort(int a[], int l, int r){
	int i = l, j = r;
	int piv = a[(l + r)/2];
	while (i <= j){
		while (a[i] < piv) ++i;
		while (a[j] > piv) --j;
		
		if (i <= j){
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (l < j) quickSort(a, l, j);
	if (i < r) quickSort(a, i, r);
}
void solve(){
	int cnt = 1;
	int a[10];
	vector<int> ans;
	ans.clear();
	for (int i = 0; i < s.length(); ++i)
		a[i] = s[i];

	quickSort(a, 0, s.length() - 1);
	
	int n = s.length();
	for (int i = 0; i < n; ++i)
		ans.push_back(a[i]);
	for (int i = n - 1; i > 0; --i){
		if (a[i] > a[i - 1]){
		int j;
		for (j = n - 1; j >= i; --j){
			if (a[j] > a[i - 1]){
				int temp = a[j];
				a[j] = a[i - 1];
				a[i - 1] = temp;
				break;
			}
		}
		for (j = n - 1; j > ((n - 1 + i)/2); --j){
			int temp = a[i + n - 1 - j];
			a[i + n - 1 - j] = a[j];
			a[j] = temp;
		}
	//	cout << endl;
		for (j = 0; j < n; ++j){ 
		//	cout << (char)a[j];
			ans.push_back(a[j]);	
		}
		cnt++;
		i = n;
		}
	}
	cout << cnt << endl;
	int ccc = 0;
	for (int i = 0; i < ans.size(); ++i){
		if (ccc == s.length()){ 
			cout << endl;
			ccc = 0;
		}
		cout << (char)ans[i];
		ccc++;
	}
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// freopen("DEBUG.INP", "r", stdin);
	// freopen("DEBUG.OUT", "w", stdout);
	
	cin >> s;
	solve();
	return 0;
}
