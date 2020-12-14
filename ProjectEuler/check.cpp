#include <bits/stdc++.h>
using namespace std;
struct node{
	long long val;
	node* left;
	node* right;
	node(long long x, node*p ,node*q){
		val = x;
		left = p;
		right = q;
	}
};
long long left(node* tree, long long x){
	return x < tree->val;
}
long long right(node* tree, long long x){
	return x > tree->val;
}
node* createNode(node* &tree, long long x){
	node* p = new node(x, nullptr, nullptr);
	if (tree == nullptr){
		tree = p;
		return tree;
	}
	if (left(tree, x))
		return createNode(tree->left, x);
	if (right(tree, x))
		return createNode(tree->right, x);
	return tree;
}
void LNR(node* tree){
	if (tree != nullptr){
		LNR(tree->left);
		cout << tree->val << " ";
		LNR(tree->right);
	}
}
bool snt(long long x){
	if (x == 2 || x == 3)
		return 1;
	if (x < 2 || x % 2 == 0)
		return 0;
	for (long long i = 3; i*i <= x; i+=2)
		if (x % i == 0)
			return 0;
	return 1;
}
long long countSNT(node* tree, long long sum){
	if (tree != nullptr){
		if (snt(tree->val))
			sum++;
		countSNT(tree->left, sum);
		countSNT(tree->right, sum);
	}
}
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

//	freopen("DEBUG.INP", "r", stdin);

	node* tree(nullptr, nullptr, nullptr);
	long long t;
	cin >> t;
	long long n;
	while (cin >> n){
		if (n == 0){
			cout << "SNT: " << countSNT(tree, 0) << endl;
			break;
		}
		else {
			createNode(tree, n);
		}
	}
	return 0;
}
