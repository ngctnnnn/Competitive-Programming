#include <bits/stdc++.h>
using namespace std;
void firstLine(long long n){
    long long c = 3;
    vector<long long> value;
    value.push_back(1);
    value.push_back(2);
    while(c < n - 3){
        c += 1;
        value.push_back(c);
        c += 3;
        value.push_back(c);
    }
    cout << value.size() << endl;
    for (long long i = 0; i < value.size(); ++i)
        cout << value[i] << " ";
    cout << endl;
}
void Secondline(long long n){
    long long c = 2;
    vector<long long> value;
    value.push_back(3);
    while (c < n - 3){
        c += 3;
        value.push_back(c);
        c += 1;
        value.push_back(c);
    }
    cout << value.size() << endl;
    for (long long i = 0; i < value.size(); ++i)
        cout << value[i] << " ";
    cout << endl;
}
void firstModule4(long long n){
    n++;
    vector<long long> firstCol;
    while (n >= 4){
        n--;
        firstCol.push_back(n);
        n -= 3;
        firstCol.push_back(n);
    }
    cout << firstCol.size() << endl;
    for (long long i = 0; i < firstCol.size(); ++i)
        cout << firstCol[i] << " ";
    cout << endl;
}
void secondModule4(long long n){
    vector<long long> value;
    n += 2;
    while (n >= 3){
        n-= 3;
        value.push_back(n);
        --n;
        value.push_back(n);
    }
    cout << value.size() << endl;
    for (long long i = 0; i < value.size(); ++i)
        cout << value[i] << " ";
    cout << endl;
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("DEBUG.INP", "r", stdin);
    // freopen("DEBUG.OUT", "w", stdout);

    long long n;
    scanf("%lld", &n);

    if (n < 3){
        cout << "NO" << endl;
        return 0;
    }
    else if (n == 3){
        cout << "YES" << endl;
        cout << "2" << endl;
        cout << "1 2" << endl;
        cout << "1" << endl;
        cout << "3" << endl;
    }
    else if (n % 4 == 0){
        cout << "YES" << endl;
        firstModule4(n);
        secondModule4(n);
    }
    else if ((n + 1) % 4 == 0){
        cout << "YES" << endl;
        firstLine(n);
        Secondline(n);
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}