#include <iostream>
#include <map>
#include <list>
using namespace std;
map<int, bool> visited;
map<int, list<int>> adj;
void addEdge(int v, int w){
    adj[v].push_back(w);
}
void dfs(int v, int& cnt){
    visited[v] = true;
    list<int>::iterator i;
    cout << v << " ";
    cnt++;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            dfs(*i, cnt);
}
int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);
    
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i){ 
        int x, y;
        cin >> x >> y;
        addEdge(x, y);
    }
    for (int i = 1; i <= n; ++i) {
        int cnt = 0;
        dfs(i, cnt);
        cout << endl;
        if (cnt == n)
            cout << i << " ";
        visited.clear();
    }
    return 0;
}