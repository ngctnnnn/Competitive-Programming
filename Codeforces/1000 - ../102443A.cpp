#include <bits/stdc++.h>
#define loop(i, a, b, c) for(int i= a; i< b; i+= c)
#define loopback(i,a,b,c) for(int i=(a),_b=(b); i>=_b; i-=c)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long
#define vii vector<pair<int, int>> 
#define vll vector<pair<long long, long long>>
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define DEBUG(x) { cout << #x << " = "; cout << (x) << endl; }
#define PR(a,n) { cout << #a << " = "; loop(_,1,n) cout << a[_] << ' '; cout << endl; }
#define PR0(a,n) { cout << #a << " = "; REP(_,n) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x))
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
	int n;
	cin >> n;
	vector<int> a(n); 
	int sum = 0;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	loop(i, 0, n, 1)
		sum += (a[i] & 1 ? a[i] : a[i] - 1);
	cout << (sum & 1 ? sum : sum - 1) << endl;
	return 0;
}	
