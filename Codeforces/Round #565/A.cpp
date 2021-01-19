#include <iostream>
using namespace std;
int main () {
    int k;
    cin >> k;
    while (k > 0){
        k--;
        long long n;
        cin >> n;
        if (n == 1)
            cout << "0" << endl;
        else {
            long long flag = 0;
                while (n > 1){
                    if (n % 2 == 0) {
                        n /= 2;
                        flag++;
                    }
                    else if (n % 3 == 0){
                        n = 2*n/3;
                        flag++;
                    }
                    else if (n % 5 == 0){
                        n = 4*n/5;
                        flag++;
                    }
                    else {
                        cout << "-1" << endl;
                        break;
                    }
                }
            if (n == 1)  cout << flag << endl;
                //else cout << "-1" << endl;
            }
    }
}
    