#include <bits/stdc++.h>
using namespace std;
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("DEBUG.INP", "r", stdin);

	int t;
	cin >> t;
	while (t--){
		int d;
		string m;
		cin >> d >> m;

		if (m == "Mar"){
			if (d >= 21)
				cout << "Aries" << endl;
				
			
			else 
				cout << "Pisces" << endl;
				
			
		}
		if (m == "Apr"){
			if (d >= 21)
				cout << "Taurus" << endl;
							
			else 
				cout << "Aries" << endl;
						
		}
		if (m == "May"){
			if (d >= 21)
				cout << "Gemini" << endl;
			else 
				cout << "Taurus" << endl;
				
			
		}
		if (m == "Jun"){
			if (d >= 22)
				cout << "Cancer" << endl;
				
			
			else
				cout << "Gemini" << endl;
						
		}
		if (m == "Jul"){
			if (d >= 23)
				cout << "Leo" << endl;
							
			else 
				cout << "Cancer" << endl;
			
			
		}
		if (m == "Aug"){
			if (d >= 23)
				cout << "Virgo" << endl;
				
			
			else 
				cout << "Leo" << endl;
							
		}
		if (m == "Sep"){
			if (d >= 22)
				cout << "Libra" << endl;
			
			
			else 
				cout << "Virgo" << endl;
		}
		if (m == "Oct"){
			if (d >= 23)
				cout << "Scorpio" << endl;
							
			else 
				cout << "Libra" << endl;
						
		}
		if (m == "Nov"){
			if (d >= 23)
				cout << "Sagittarius" << endl;
						
			else 
				cout << "Scorpio" << endl;
							
		}
		if (m == "Dec"){
			if (d >= 22)
				cout << "Capricorn" << endl;
							
			else 
				cout << "Sagittarius" << endl;
						
		}
		if (m == "Jan"){
			if (d >= 21)
				cout << "Aquarius" << endl;
			
			else 
				cout << "Capricorn" << endl;
			
		}
		if (m == "Feb"){
			if (d >= 20)
				cout << "Pisces" << endl;
				
			else 
				cout << "Aquarius" << endl;
				
		}
	}
	return 0;
}


