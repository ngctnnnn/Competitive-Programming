#include <bits/stdc++.h>
using namespace std;
vector<long long> ans;
void permute(long long lf, long long rt){
	long long a[rt - lf];
	for (long long i = lf; i <= rt; ++i)
		a[i] = i;
	for (int i = lf; i <= rt; ++i)
		ans.push_back(a[i]);
	for (int i = rt; i >= lf; --i){
		if (a[i] > a[i - 1]){
		int j;
		for (j = rt; j >= lf; --j){
			if (a[j] > a[i - 1]){
				int temp = a[j];
				a[j] = a[i - 1];
				a[i - 1] = temp;
				break;
			}
		}
		for (j = rt; j > ((rt + i)/2); --j){
			int temp = a[i + rt - j];
			a[i + rt- j] = a[j];
			a[j] = temp;
		}
	//	cout << endl;
		for (j = lf; j < rt; ++j){ 
			cout << (char)a[j];
			ans.push_back(a[j]);	
		}
		i = rt;
		}
	}
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	long long lf, rt;
	cin >> lf >> rt;

	permute(lf, rt);
	return 0;
}	
