#include <bits/stdc++.h>
#define loop(i, a, b, c) for(__typeof(a) i=(a), _b=(b), _c=(c); i<_b; i+=_c)
#define loopeach(i, a, b) for(__typeof(a) i = (a), _b=(b); i <_b;++i)
#define loopback(i,a,b,c) for(__typeof(a) i=(a),_b=(b), _c=(c); i>=_b; i-=_c)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long
#define read(n) int n; cin >> n
#define readln(a,n) int n; cin >> n; int a[n]; loopeach(i, 0, n) cin >> a[i];
#define vii vector<pair<int, int>> 
#define vll vector<pair<long long, long long>> 
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define DEBUG(x) { cout << #x << " = "; cout << (x) << endl; }
#define PR(a,n) {loop(_, 0,n, 1) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 1e99
using namespace std;
string operator+ (string str1, string str2){ 
   	 if (str1.length() > str2.length()) 
		 swap(str1, str2); 
   	 string str = "";  
   	 int n1 = str1.length(), n2 = str2.length(); 
   	 reverse(str1.begin(), str1.end()); 
   	 reverse(str2.begin(), str2.end()); 
   	 int carry = 0; 
   	 for (int i=0; i<n1; i++){ 
       		 int sum = ((str1[i] - '0') + (str2[i] - '0') + carry); 
       		 str.push_back(sum % 10 + '0'); 
       		 carry = sum/10; 
   	 } 
   	 for (int i = n1; i < n2; i++) { 
       		 int sum = ((str2[i] - '0') + carry); 
       		 str.push_back(sum%10 + '0'); 
		 carry = sum / 10; 
	} 
	 if (carry) 
		 str.push_back(carry + '0'); 
	 reverse(str.begin(), str.end()); 
	 return str; 
}
bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
 
    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
 
    return false;
}
 
// Function for find difference of larger numbers
string operator -(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
 
    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
 
    // Run loop till small string length
    // and subtract digit of str1 to str2
    for (int i = 0; i < n2; i++) {
        // Do school mathematics, compute difference of
        // current digits
 
        int sub
            = ((str1[i] - '0') - (str2[i] - '0') - carry);
 
        // If subtraction is less then zero
        // we add then we add 10 into sub and
        // take carry as 1 for calculating next step
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    // subtract remaining digits of larger number
    for (int i = n2; i < n1; i++) {
        int sub = ((str1[i] - '0') - carry);
 
        // if the sub value is -ve, then make it positive
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}
int scs(ll k){
    int cnt = 0;
    while (k > 0){
        cnt++;
        k/=10;
    }
    return cnt;
}
template<typename T>
T power(T x, T y){
    if (!y)
        return 1;
    if (y == 1)
        return x;
    if (y & 1)
        return power(x, y/2) * power(x, y/2) * x;
    else
    {
        return power(x, y/2) * power(x, y/2);
    }   
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string s = "123456789101112131415161718192021222324252627282930313234";
    read(n);
    while (n--){
        long long k;
        cin >> k;
        if (k < 10)
            cout << k << endl;
        else {
            int temp = k - scs(k);
            if (temp != scs(k))
                cout << (k -scs(k)) % (power<int>(10, scs(k) - 1)) << endl;
                cout << (power<int>(10, scs(k) - 1)) << endl;
        }
    }
    return 0;
}