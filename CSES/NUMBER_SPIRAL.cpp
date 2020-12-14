#include <iostream>
 
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
 
    for(int i = 1; i <= t; ++i)
    {
        long long x,y;
        cin >> x >> y;
        if (x == y)
        {
            cout << (y-1) * x + 1 << endl;
            continue;
        }
 
        if (x > y)
        {
            if (x % 2 == 0)
            {
                cout << (x)*(x) - (y-1) << endl;
                continue;
            }
            if (x % 2 == 1)
            {
                cout << (x-1)*(x-1) + y << endl;
                continue;
            }
        }
 
        if (y > x)
        {
            if (y % 2 == 0)
            {
                cout << (y - 1) * (y - 1) + x << endl;
                continue;
            }
 
            if (y % 2 == 1)
            {
                cout << (y*y) - (x-1) << endl;
                continue;
            }
        }
    }
}