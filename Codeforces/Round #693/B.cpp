#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--){ 
    long long n,a,sum(0),Mot(0),Hai(0);
    cin >> n;
    if (n==1) {cout << "NO";}
    for (int i=1;i<=n;i++)
    {
        cin >> a;
        sum+=a;
        if (a==1) {Mot++;} else {Hai++;}
    }
    if ((Mot==0) && (Hai%2!=0)) {cout << "NO" << endl;}
    else if (sum%2!=0) {cout << "NO" << endl;}
    else {cout << "YES" << endl;}
    }
    return 0;

}
    