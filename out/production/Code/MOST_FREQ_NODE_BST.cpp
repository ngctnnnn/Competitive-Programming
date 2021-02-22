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
    void dfs(TreeNode* root, map<int, int>& ans){
        if (root != nullptr){
            dfs(root->left, ans);
            ans[root->val]++;
            dfs(root->right, ans);
        }    
    }
    vector<int> findMode(TreeNode* root) {
        map<int, int> ans;
        vector<int> ret;
        dfs(root, ans);
        int maxx = -100000000;
        for (auto i = ans.begin(); i != ans.end(); ++i){
            maxx = max(maxx, i->second);
        }
        for (auto i = ans.begin(); i != ans.end(); ++i){
            if (i->second == maxx)
                ret.push_back(i->first);
        }
        return ret;
    }
};