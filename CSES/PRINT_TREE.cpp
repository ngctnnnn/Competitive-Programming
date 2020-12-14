#include <bits/stdc++.h>
using namespace std;
struct node{
	long long info;
	node* left;
	node* right;
	node(long long x, node* p, node* q){
		info = x;
		left = p;
		right = q;
	}
};
int left(node* tree, long long x){
	return x < tree->info;
}
int right(node* tree, long long x){
	return x > tree->info;
}
node* createNode(node* &tree, long long x){
	node* p = new node(x, NULL, NULL);
	if (tree == NULL){
		tree = p;
		return tree;
	}
	if (left(tree, x))
		createNode(tree->left, x);
	if (right(tree, x))
		createNode(tree->right, x);
	return tree;
}
long long depthTree(node* tree){
	if (tree == NULL)
		return 0;
	else {
		long long l = depthTree(tree->left);
		long long r = depthTree(tree->right);

		if (l <= r){
			return r + 1;
		}
		else 
			return l + 1;
	}
}
void NLR(node* tree, long long need, long long cnt){
	if (tree != NULL){
		if (cnt == need){ 
			
			cout << tree->info;
			for (long long i = 0; i < cnt; ++i)
				cout << " ";
		}
		NLR(tree->left, need, cnt + 1);
		NLR(tree->right, need, cnt + 1); 
	}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("DEBUG.INP", "r", stdin);
	freopen("DEBUG.OUT", "w", stdout);

	node* tree = NULL;
	long long x, cnt = 0;
	int tt = 1000;
	while (scanf("%lld", &x)){
		tt--;
		if (tt == 0)
			return 0;
		if (x == 0){:
			long long need = depthTree(tree), i = 0;
			while (i != need){
				NLR(tree, i, cnt);
				cout << endl;
				i++;
			}
			return 0;
		}
		else
			createNode(tree, x);
	}
}
