#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct point{
	ll t;
	bool flag = 0;
};
ll m, n;
point a[101][101];
vector<ll> ans1, ans2;
void restore(){
	for (ll i = 0; i < m; ++i)
		for (ll j = 0; j < n; ++j)
			a[i][j].flag = 0;
}
void solve(){
	ans1.clear(); ans2.clear();
	ll max1 = 0, max2 = 0, temp = 1, cnt = 0;

	for (ll i = 0; i < m; ++i){
		for (ll j = 0; j < n; ++j){
			if (a[i][j].t == 1 && a[i][j].flag == 0){
				temp = 1;
				cnt++;
				a[i][j].flag = 1;
				if (a[i][j + 1].t == 0){
					a[i][j].flag = 1;
				}
				else if (a[i][j + 1].t == 1){
					a[i][j + 1].flag = 1;
					temp++;
				}
			}
			ans1.push_back(temp);
			temp = 0;
		}
	}
	restore();
	max1 = cnt;
	cnt = 0;
	for (ll j = 0; j < n; ++j){ 
		for (ll i = 0; i < m; ++i){ 
			if (a[i][j].t == 1 && a[i][j].flag == 0){
				temp = 1;
				cnt++;
				a[i][j].flag = 1;
				if (a[i + 1][j].t == 0){
					a[i][j].flag = 1;
				}
				else if (a[i + 1][j].t == 1){
					a[i + 1][j].flag = 1;
					temp++;
				}
			}
			ans2.push_back(temp);
			temp = 0;
		}

	}
	max2 = cnt;
	if (max1 >= max2){
		cout << max2 << endl;
		for (ll i = 0; i < ans2.size(); ++i)
			if (ans2[i] > 0)
				cout << ans2[i] << " ";
		cout << endl;
	}
	else {
		cout << max1 << endl;
		for (ll i = 0; i < ans1.size(); ++i)
			if (ans1[i] > 0)
				cout << ans1[i] << " ";
		cout << endl;
	}
	return;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	scanf("%lld%lld", &m, &n);
	for (ll i = 0; i < m; ++i)
		for (ll j = 0; j < n; ++j)
			scanf("%lld", &a[i][j].t);

	solve();
	return 0;
}