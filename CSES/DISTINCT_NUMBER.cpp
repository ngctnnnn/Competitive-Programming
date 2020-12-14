#include <bits/stdc++.h>
using namespace std;
struct node{
    string info;
    node* left;
    node* right;
    node(string x, node* p, node* q){
        info = x;
        left = p;
        right = q;
    }
};

bool operator > (string a, string b){
     if (a.length() != b.length())
        return (a.length() > b.length()) ? 1 : 0;
    else 
        for (unsigned long long i = 0; i < a.length(); ++i)
            if ((int)a[i] < (int)b[i])
                return 0;
            else if ((int)a[i] >= (int)b[i])
                continue;
    return 1;
}

int left(node* tree, string x){
    return ((tree->info > x) && tree->info != x) ? 1 : 0; 
}

int right(node* tree, string x){
    return ((x > tree->info) && tree->info != x) ? 1 : 0;
}

bool operator != (string a, string b){
    
    if (a.length() != b.length())

        return 1;

    else {
    
        for (unsigned long long i = 0; i < a.length(); ++i)
            if (a[i] != b[i])
                return 1;
    }
    return 0;
}
node* createNode(node* &tree, string x, unsigned long long &cnt){
    
    if (tree == NULL){ 
        node* p = new node(x, NULL, NULL);
        tree = p;
        ++cnt;
        return tree;
    }
    
    if (left(tree, x))
        return createNode(tree->left, x, cnt);

    if (right(tree, x))
        return createNode(tree->right, x, cnt);
    
    return tree;
}

void LNR(node* tree){
    if (tree != NULL){
        LNR(tree->left);
        cout << tree->info << " ";
        LNR(tree->right);
    }
}
int main () {
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    // cout.tie(0);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    node* tree = NULL;

    unsigned long long n;
    scanf("%lld", &n);
    unsigned long long times = 0;
    while(n--){
        string x;
        cin >> x;
        createNode(tree, x, times);
    }
    LNR(tree);
    cout << endl;

    cout << times << endl;
    
    return 0;
}