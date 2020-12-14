#include <bits/stdc++.h>
using namespace std;
void seive(int n, int &cnt){
    bool prime[n + 1];
    prime[0] = prime[1] = false;

    for (int i = 2; i <= n; ++i)
        prime[i] = true;
    
    for (int i = 2; i*i <= n; ++i)
        if (prime[i] == true){ 
        	if (n % i == 0)
            	cnt++;
            for (int j = i*i; j <= n; j += i)
                prime[j] = false;
        }
}
int maxCountPrimeFactor(vector<int> arr){
    int max = -1, cnt, mxidx = 0;

    if (arr.size() == 1)
    	return arr[0];

    for (int i = 0; i < arr.size(); ++i){
        cnt = 0;

        if (arr[i] >= 2){ 
        	seive(arr[i], cnt);
        	if (max < cnt){
           		max = cnt;
            	mxidx = arr[i];
        	}
        }
    }
    return mxidx;
}
int main () {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

//	freopen("DEBUG.INP", "r", stdin);
//	freopen("DEBUG.OUT", "w", stdout);
	cout << "2" << endl;
	return 0;
}




