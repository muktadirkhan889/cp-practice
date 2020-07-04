/* https://leetcode.com/problems/binary-tree-inorder-traversal/ */
// Iterative using stack
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk;
        TreeNode* curr = root;
        vector<int> res;
        while(curr!=NULL || stk.empty()==false) {
            while(curr!=NULL) {
                stk.push(curr);
                curr = curr->left;
            }
            curr = stk.top();
            stk.pop();    
            res.push_back(curr->val);
            curr = curr->right;
        }
        return res;
    }
};
