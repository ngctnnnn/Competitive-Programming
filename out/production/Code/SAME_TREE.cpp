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
    void dfs(TreeNode* p, TreeNode* q, bool& ok) {
        if ((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr)) {
            ok = 0;
            return;
        } 
        if (p != nullptr || q != nullptr) {
            if (p->val != q->val){ 
                ok = 0;
            }
            dfs(p->left, q->left, ok);
            dfs(p->right, q->right, ok);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ok = 1;
        dfs(p, q, ok);
        return ok;
    }
};