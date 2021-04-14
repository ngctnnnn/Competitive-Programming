#include <iostream>
#include <map>
#define ff first
#define ss second
using namespace std;
int main () {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    map<int, int> ans;
    auto it = ans.begin();
    for (int i = 1; i <= s1; ++i)
        for (int j = 1; j <= s2; ++j)
            for (int t = 1; t <= s3; ++t) {
                int x = i + j + t;
                if (ans.find(x) == ans.end())
                    ans.insert({x, 0});
                else
                    (ans.find(x)->ss)++;
            }
    int maxx = -1, pos = 0;
    for (auto i: ans){ 
        if (maxx < i.ss) {
            maxx = i.ss;
            pos = i.ff;
        }
    }
    cout << pos; 
}