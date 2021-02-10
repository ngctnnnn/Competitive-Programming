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
    void dfs(TreeNode* root, int &cnt, int k = 0) {
        if (root == nullptr)
            return;
        cnt = max(cnt, k);
        dfs(root->left, cnt, k + 1);
        dfs(root->right, cnt, k + 1);
    }
    int maxDepth(TreeNode* root) {
        int cnt = 0, k;
        dfs(root, cnt);
        return root == nullptr ? 0 : cnt + 1;
    }
};