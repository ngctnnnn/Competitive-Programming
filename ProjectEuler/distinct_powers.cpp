#include <bits/stdc++.h>
using namespace std;
string add(string a, string b){
	if (a.length() > b.length())
		swap(a, b);
	string ans = "";
	int n1 = a.length(), n2 = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int carry = 0;
	for (int i = 0; i < n1; ++i){
		int sum = (a[i] - '0') + (b[i] - '0') + carry;
		ans.push_back(sum % 10 + '0');
		carry = sum / 10;
	}
	for (int i = n1; i < n2; ++i){
		int sum = (a[i] - '0') + (b[i] - '0') + carry;
		ans.push_back(sum % 10 + '0');
		carry = sum / 10;
	}
	if (carry)
		ans.push_back(carry + '0');
	reverse(ans.begin(), ans.end());
	return ans;
}
string multiply(string nums1, string nums2) 
{ 
    int n = nums1.size();
   int m = nums2.size();
   string ans(n + m, '0');
   for(int i = n - 1; i>=0; i--){
      for(int j = m - 1; j >= 0; j--){
         int p = (nums1[i] - '0') * (nums2[j] - '0') + (ans[i + j + 1] - '0');
         ans[i+j+1] = p % 10 + '0';
         ans[i+j] += p / 10 ;
      }
   }
   for(int i = 0; i < m + n; i++){
      if(ans[i] !='0')return ans.substr(i);
   }
   return "0"; 
}
string divide(string number, int divisor){
string ans; 
  
    // Find prefix of number that is larger 
    // than divisor. 
    int idx = 0; 
    int temp = number[idx] - '0'; 
    while (temp < divisor) 
        temp = temp * 10 + (number[++idx] - '0'); 
  
    // Repeatedly divide divisor with temp. After 
    // every division, update temp to include one 
    // more digit. 
    while (number.size() > idx) { 
        // Store result in answer i.e. temp / divisor 
        ans += (temp / divisor) + '0'; 
  
        // Take next digit of number 
        temp = (temp % divisor) * 10 + number[++idx] - '0'; 
    } 
  
    // If divisor is greater than number 
    if (ans.length() == 0) 
        return "0"; 
  
    // else return ans 
    return ans; 
} 
string power(string a, string b){
	if (b == "0")
		return "1";
	if (b == "1")
		return a;
	if (((int)b[b.length() - 1] - 48) % 2 == 0)
		return multiply(power(a, divide(b, 2)), power(a, divide(b, 2)));
	else 
		return multiply(multiply(power(a, divide(b, 2)), power(a, divide(b, 2))), a);
}
int main () {
	set<string> ans;
	string a = "2", b = "2";
	cout << add("1234", "5678") << endl;
	for (int i = 2; i <= 100; ++i){
		for (int j = 2; j <= 100; ++j){
			string curr = power(a, b);
			long long siz = ans.size();
			ans.insert(curr);
			if (siz < ans.size())
				cout << i << " " << j << endl;
			b = add(b, "1");

		}
		a = add(a, "1");
	}
	cout << ans.size() << endl;
	return 0;
}
