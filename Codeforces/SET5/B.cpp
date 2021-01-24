#include <iostream> 
#include <fstream> 

using namespace std; 

long long n; 
long long cnt = 0; 

bool prime(long long x)
{ 
    if (x < 2) 
        return false; 
    for(int i = 2; i * i <= x + 1; ++i) 
        if (x % i == 0) 
            return false; 
    return true; 
}

void back_tracking(long long x, long long par)
{
    for(long long i = 1; i <= 9; ++i) 
    { 
        long long t = par * 10 + i; 
        if (prime(t) == true)
        { 
            if (x == n) 
                ++cnt ;
            else 
                back_tracking(x + 1, t); 
        }
    }
}

int main()
{
    cin >> n; 
    back_tracking(1, 0); 
    cout << cnt << endl;
    return 0; 
}