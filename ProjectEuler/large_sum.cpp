#include <bits/stdc++.h>
using namespace std;
string sum(string str1, string str2) 
{ 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 

    string str = ""; 
  
    int n1 = str1.length(), n2 = str2.length(); 

    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 

        carry = sum/10; 
    } 
  
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    if (carry) 
        str.push_back(carry+'0'); 
  
    reverse(str.begin(), str.end()); 
  
    return str; 
} int main () {
	freopen("DEBUG.INP", "r", stdin);
	string s;
	cin >> s;
	vector<string> input;
	input.clear();
	for (long long i = 0; i < s.length(); i += 50){
		string num = "";
		for (long long j = i; j < i + 50; ++j) {
			 num += (int)s[j];
		}		
		input.push_back(num);
	}
	string ans;
	for (long long i = 0; i < input.size(); ++i){
		cout << input[i] << endl;
		ans = sum(ans, input[i]);
	}
//	cout << sum("1234", "5678") << endl;
	cout << ans << endl;
	return 0;
}
