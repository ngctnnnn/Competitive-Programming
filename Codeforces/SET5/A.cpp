
#include <iostream> 
#include <fstream> 
#include <algorithm> 
  
using namespace std; 

const long long NMAX = 101; 

long long n, id = 1;
long long f[NMAX * NMAX]; 
long long dp[NMAX][NMAX]; 

bool CSL(long long &x, long long &y)
{ 
    long long j;
    if (dp[x][y] != 0) return false; 
    for(int i = y; i >= 1 && dp[x][i] == 0; --i) 
    { 
        dp[x][i] = f[id++]; 
        j = i; 
    }
    x = x - 1; 
    y = j; 
    return true;
}

bool CSR(long long &x, long long &y)
{ 
    long long j;
    if (dp[x][y] != 0) return false; 
    for(int i = y; i <= n && dp[x][i] == 0; ++i) 
    { 
        dp[x][i] = f[id++]; 
        j = i; 
    }
    x += 1; 
    y = j; 
    return true; 
}


bool CSD(long long &x, long long &y)
{ 
    long long j;
    if (dp[x][y] != 0) return false; 
    for(int i = x; i <= n && dp[i][y] == 0; ++i) 
    { 
        dp[i][y] = f[id++]; 
        j = i; 
    }
    x = j; 
    y = y - 1; 
    return true; 
}

bool CSU(long long &x, long long &y)
{ 
    long long j;
    if (dp[x][y] != 0) return false; 
    for(int i = x; i >= 1 && dp[i][y] == 0; --i) 
    { 
        dp[i][y] = f[id++]; 
        j = i; 
    }
    x = j; 
    y = y + 1; 
    return true;
}

void print()
{ 
    for(int i = 1; i <= n; ++i) 
    { 
        for(int j = 1; j <= n; ++j) 
            cout << dp[i][j] << " "; 
        cout << endl; 
    }
}

int main()
{
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    cin >> n; 
    long long cnt = 0; 
    for(int i = 1; i <= n; ++i) 
        for(int j = 1; j <= n; ++j) 
            cin >> f[++cnt];

    sort(f + 1, f + (n * n)+ 1); 
    
    bool check = true; 
    long long x = 1; 
    long long y = 1;
    do
    { 
        check = CSR(x, y) & 1; 
        check = CSD(x, y) & 1; 
        check = CSL(x, y) & 1;   
        check = CSU(x, y) & 1; 
        
    }while(check == true); 

    print();
    return 0; 
}
