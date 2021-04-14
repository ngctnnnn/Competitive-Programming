#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int reverse(int x){
    int sum = 0; 
    while(x != 0) {
        sum = sum * 10 + (x % 10); 
        x /= 10; 
    }
    return sum;
}
bool check(int x){
    return __gcd(x, reverse(x)) == 1 ? true : false;
}
int main () {
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for (int i = x; i <= y; ++i)
        if (check(i)){ 
            cnt++;
            // cout << i << endl;
        }
    cout << cnt << endl;
}