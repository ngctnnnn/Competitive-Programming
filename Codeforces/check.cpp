#include <bits/stdc++.h>
using namespace std;
bool solve(int y1, int m1, int d1, int y2, int m2, int d2, int x, int y, int m, int d){
	if (y < y1 || y > y2)
		return 0;
	if (y == y1 || y == y2){
		if (m < m1 || m > m2)
			return 0;
		else{ 
			if (d < d1 || d > d2)
				return 0;
		}
	}
	int jmd = (d + ((153 * (m + 12 * ((14 - m) / 12) - 3) + 2) / 5) +
     		  (365 * (y + 4800 - ((14 - m) / 12))) +
 	          ((y + 4800 - ((14 - m) / 12)) / 4) - 
    		  ((y + 4800 - ((14 - m) / 12)) / 100) + 
                  ((y + 4800 - ((14 - m) / 12)) / 400)  - 32045) % 7;
	return (jmd + 2 == x) ? 1 : 0;
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	//freopen("DEBUG.INP", "r", stdin);
	int y1, m1, d1, y2, m2, d2, x;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2 >> x;

	int t;
	cin >> t;
	while (t--){
		int y, m, d;
		cin >> y >> m >> d;
		if(solve(y1, m1, d1, y2, m2, d2, x, y, m, d))
			cout << "VALID" << endl;
		else 
			cout << "INVALID" << endl;
	}
	return 0;
}
