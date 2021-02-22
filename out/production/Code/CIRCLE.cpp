#include <bits/stdc++.h>
#define pi 3.141592653589793238462643383279
using namespace std;
int main () {
	freopen("DEBUG.INP", "r", stdin);

	long long r;
	while (cin >> r)
		if (r > 0){
			cout << fixed << setprecision(4) << pi * r * r << endl;
			break;
		}
		else 
			cout << "Ban kinh khong ton tai. Moi nhap lai." << endl;
	return 0;
}
