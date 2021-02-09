/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, int& sum){
        if (root != nullptr) {
            dfs(root->left, sum);
            if (!(root->val & 1)) {
                if (root->left != nullptr) { 
                    if (root->left->left != nullptr)
                        sum+=root->left->left->val;
                    if (root->left->right != nullptr)
                       sum+=root->left->right->val;
                }
                if (root->right != nullptr) { 
                    if (root->right->left != nullptr)
                        sum += root->right->left->val;
                    if (root->right->right != nullptr)
                        sum += root->right->right->val;
                }
            } 
            dfs(root->right, sum);
        }
    }
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        dfs(root, sum);
        return sum;
    }
};