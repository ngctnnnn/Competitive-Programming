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
    bool valid(vector<int> root){
        for (int i = 0; i < root.size() - 1; ++i)
            if (root[i] >= root[i + 1])
                return 0;
        return 1;
    }
    vector<int> dfs(TreeNode* root, vector<int>& ans){
        if (root != nullptr) {
            dfs(root->left, ans);
            ans.push_back(root->val);
            dfs(root->right, ans);
        }
        return ans;
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        dfs(root, ans);
        return valid(ans) == 1 ? 1 : 0;
    }
};