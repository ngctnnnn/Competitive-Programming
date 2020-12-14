#include <bits/stdc++.h>
using namespace std;
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	freopen("DEBUG.INP", "r", stdin);

	int n;
	cin >> n;
	float a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	float sum = 0.0;
	for (int i = 0; i < n; ++i){
		sum += a[i]*1.0 / 100*1.0;
		cout << sum << endl;
	}
	cout << sum / n << endl;
	return 0;	
}
